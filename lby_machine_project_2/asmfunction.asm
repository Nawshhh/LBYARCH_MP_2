section .data
norm_factor: dd 0.00392156863 ; 1 / 255

section .text
bits 64
default rel
global imgCvtGrayInttoFloat

imgCvtGrayInttoFloat:
    ; height -> rcx
    ; width -> rdx
    ; r8 -> int pixels
    ; r9 -> float pixels

    ; calculate total number of pixels
    mov r10, rcx            
    imul r10, rdx           ; r10 = height * width (size)

    xor r11, r11            ; r11 (i = 0)

convert_loop:
    cmp r11, r10            ; if index >= total pixels, exit loop
    jge convert_done

    ; Load integer pixel value into eax
    mov eax, dword [r8 + r11 * 4]   
    and eax, 0xFF                   ; for unsigned representation

    ; int -> float
    cvtsi2ss xmm0, eax      

    movss xmm1, dword [norm_factor] ; normalize the pixels
    mulss xmm0, xmm1        ; xmm0 = xmm0 * norm_factor

    movss dword [r9 + r11 * 4], xmm0    ; store the float result in array

    inc r11
    jmp convert_loop

convert_done:
    ret

# LBYARCH x86-to-C Interface Programming Project
Second Machine Porject of LBYARCH - Introduction to Computer Organization and Architecture Laboratory

## Task
Implement a program that converts the grayscale image representation from int based to float based using C and x86 assembly language. Implement the function imgCvtGrayInttoFloat(). <br>
Input: height, width, integer pixel values <br>
Example. <br>

Input:
height: 3 <br>
width 4 <br>
64 89 114 84 <br>
140 166 191 84 <br>
216 242 38 84 <br>

Output: Single Float pixel values <br>
0.25 0.35 0.45 0.33 <br>
0.55 0.65 0.75 0.33 <br>
0.85 0.95 0.15 0.33 <br>

## Execution Time
Presented below are the test cases conducted:
- Trial 1: 10x10 = 350.00 ns
- Trial 2: 100x100 = 21040.00 ns
- Trial 3: 200x200 = 81473.33 ns <br>

[Link to Google Sheets](https://docs.google.com/spreadsheets/d/1s2xqv6Z_rnFvH23ZUPOAHCQCIYrCsRUNOafY2DUJivo/edit?usp=sharing) <br><br>
Based from the results of the test cases, the running time is dependent on the size of the array provided. The execution time of the assembly funciton increases as the number of dimension increases. On Trial 1, the run time is 350.00 ns because only 100 elements were calculated and tested. Unlike Trial 2 and Trial 3, the run times were 21040.00 ns and 81473.33 ns respectively. Alternatively, the hardware/machine used also plays a crucial role in executing the assembly function. Not all hardwares have the same specification. Thus, one machine could execute the function much faster than the one used in this experiment.

## Program Output with Correctness
![image](https://github.com/user-attachments/assets/f8f36938-8227-4ca5-9dad-7958ec95177e)
![image](https://github.com/user-attachments/assets/3cd62985-0364-44fa-bfc4-de64d5327270)

## Machine Project Demo Link
[Screen Recording Link](https://drive.google.com/file/d/1a-MXx7JWJJdzJK2obzg5uZVvAHgkFuTz/view?usp=sharing)

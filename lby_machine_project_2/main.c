#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// assembly function
extern void imgCvtGrayInttoFloat(int height, int width, int* intPixels, float* floatPixels);

int main() {
    int height, width;

    printf("Enter height of the image: ");
    scanf_s("%d", &height);

    printf("Enter width of the image: ");
    scanf_s("%d", &width);

    // allocate memory
    int* intPixels = (int*)malloc(height * width * sizeof(int));
    float* floatPixels = (float*)malloc(height * width * sizeof(float));

    // input the integer pixels
    printf("Enter the integer pixel values:\n");
    for (int i = 0; i < height * width; i++) {
        scanf_s("%d", &intPixels[i]);
    }

    clock_t start, end;
    double time_taken;

    start = clock();
        imgCvtGrayInttoFloat(height, width, intPixels, floatPixels);
    end = clock();
    time_taken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC; 
    printf("Time it takes to execute using x86-64 is %lf ns\n", time_taken);

    // output
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%.2f ", floatPixels[i * width + j]);
        }
        printf("\n");
    }

    // free the allocated memory
    free(intPixels);
    free(floatPixels);

    return 0;
}

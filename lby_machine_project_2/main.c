#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// assembly function
extern void imgCvtGrayInttoFloat(int height, int width, int* intPixels, float* floatPixels);

int main() {
    int height, width;
    printf("Enter height: ");
    scanf_s("%d", &height);
    printf("Enter width: ");
    scanf_s("%d", &width);

    // allocate memory
    int* intPixels = (int*)malloc(height * width * sizeof(int));
    float* floatPixels = (float*)malloc(height * width * sizeof(float));

    // input the integer pixels
    printf("Enter the integer pixel values:\n");
    for (int i = 0; i < height * width; i++) {
        scanf_s("%d", &intPixels[i]);
    }

    // High-resolution timing
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency); // Get the frequency of the high-resolution counter
    QueryPerformanceCounter(&start);       // Start time

    imgCvtGrayInttoFloat(height, width, intPixels, floatPixels);

    QueryPerformanceCounter(&end);         // End time

    // Calculate elapsed time in nanoseconds
    double elapsed = (double)(end.QuadPart - start.QuadPart) * 1e9 / frequency.QuadPart;

    printf("\nOutput: \n\n");

    // output
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%.2f ", floatPixels[i * width + j]);
        }
        printf("\n");
    }

    printf("\n\nElapsed time of execution: %f ns\n\n", elapsed);

    // free the allocated memory
    free(intPixels);
    free(floatPixels);

    return 0;
}

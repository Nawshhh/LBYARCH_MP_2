# LBYARCH x86-to-C Interface Programming Project
Second Machine Porject of LBYARCH - Introduction to Computer Organization and Architecture Laboratory

## Task
Implement a program that converts the grayscale image representation from int based to float based using C and x86 assembly language. Implement the function imgCvtGrayInttoFloat().
Input: height, width, integer pixel values
Example.

Input:
height: 3
width 4
64 89 114 84
140 166 191 84
216 242 38 84

Output: Single Float pixel values
0.25 0.35 0.45 0.33
0.55 0.65 0.75 0.33
0.85 0.95 0.15 0.33

## Execution Time
Th execution time of the ASM function is always 0.0000ns. No matter what the size of the height and width is, the execution time displays 0.0000ns.
- Trial 1: 10x10 = 0.0000ns
- Trial 2: 100x100 = 0.0000ns
- Trial 3: 200 x 200 = 0.0000ns
- Trial 4: 300 x 300 = 0.0000ns
Based from the results of the test cases, all trials lasted for 0ns. The group is not sure if we 

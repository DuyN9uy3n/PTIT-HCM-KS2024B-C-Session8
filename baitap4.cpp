#include <stdio.h>  

int main() {  
 
    int rows = 3;
    int cols = 4;
    int matrix[3][4] = {  
        {1, 5, 2, 7},  
        {7, 2, 6, 4},  
        {0, 9, 1, 18}  
    };  
    printf("Mang 2 chieu:\n");  
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  

    int max = matrix[0][0];
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {  
            if (matrix[i][j] > max) {  
                max = matrix[i][j];
            }  
        }  
    }  

    printf("Phan tu lon nhat trong mang: %d\n", max);  

    return 0;  
}
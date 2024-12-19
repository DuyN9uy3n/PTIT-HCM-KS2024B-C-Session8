#include <stdio.h>  

int main() {  
    int n;  

    printf("Nhap mot so nguyen duong: ");  
    scanf("%d", &n);  

    if (n <= 0) {  
        printf("nhap mot so nguyen duong.\n");  
        return 1;  
    }  

    int matrix[n][n];  

    printf("Nhap cac phan tu %dx%d:\n", n, n);  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            printf("Phan tu [%d][%d]: ", i, j);  
            scanf("%d", &matrix[i][j]);  
        }  
    }  

    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  

    return 0;  
}
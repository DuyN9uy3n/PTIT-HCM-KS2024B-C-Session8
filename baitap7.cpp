#include <stdio.h>  

int main() {  
    int n;  

    do {  
        printf("Nhap n (n > 0): ");  
        scanf("%d", &n);  
    } while (n <= 0);  

    int matrix[n][n];  

    printf("Nhap cac phan tu cua ma tran:\n");  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            printf("matrix[%d][%d] = ", i, j);  
            scanf("%d", &matrix[i][j]);  
        }  
    }  

    printf("\nMa tran da nhap:\n");  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  
	
	  
    int diagonalSum = 0;  
    printf("Cac phan tu tren duong cheo chinh:\n");  
    for (int i = 0; i < n; i++) {  
        printf("%d ", matrix[i][i]);  
        diagonalSum += matrix[i][i];
    }  

    printf("\nTong cac phan tu tren duong cheo chinh: %d\n", diagonalSum);  

    return 0;  
}  
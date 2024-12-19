#include <stdio.h>  

int main() {  
    int n;  

    do {  
        printf("Nhap n (n > 2): ");  
        scanf("%d", &n);  
    } while (n <= 2);  

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

    int bienSum = 0;  
    for (int i = 0; i < n; i++) {  
        bienSum += matrix[0][i];
        bienSum += matrix[n-1][i];
        bienSum += matrix[i][0];
        bienSum += matrix[i][n-1]; 
    }  
    bienSum -= (matrix[0][0] + matrix[0][n-1] + matrix[n-1][0] + matrix[n-1][n-1]);  

    printf("Tong cac so tren duong bien: %d\n", bienSum);  

    return 0;  
}
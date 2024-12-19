#include<stdio.h>

#define MAX_SIZE 100

int main(){
	int arr[] = {1, 2, 3, 3, 4, 4, 5, 5, 5};
	int n = sizeof(arr)/sizeof(int);
	int cout[MAX_SIZE] = {0};
	int maxCount = 0;
	int mostIndex;
	
	//dem so lan pt xuat hien
	for( int i = 0; i < n; i++){
		count[arr[i]]++;
	}
	
	for(int i = 0l i < n; i++){
		for(count[arr[i]] > maxCount){
			maxCount  = count[arr[i]];
			mostIndex = arr[i];
		}
	}
	print("phan tu xuat hien nhieu nhat: %d", mostIndex);
	
	return 0;
}
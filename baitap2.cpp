#include<stdio.h>
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(arr)/sizeof(int);
	int index;
	
	printf("nhap vao phan tu muon kiem tra: ");
	scanf("%d", &index);
	
	int found = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] == index){
			printf("vi tri cua phan tu trong mang: %d", i);
			found = 1;
			break;
		}
	}
	
	if(!found){
		printf("phan tu khong ton tai trong mang\n");
	}
	return 0;
}
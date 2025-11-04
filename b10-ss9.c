#include <stdio.h>
int main(){
	const int max = 100;
	int arr[max];
	int n;
	int temp;
	
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1 || n>max){
			printf("Nhap lai n \n");
		}
	}while(n<1 || n>max);
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nMang vua nhap: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	int count_max_element = 0;
	int position = 0;
	int position_i;
	for(int i=0;i<n;i++){
	
		int count_at_i = 1;
		position_i = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				count_at_i++;
			}
		}
		if(count_max_element<count_at_i){
			count_max_element = count_at_i;
			position = position_i;
		}
	}
	
	printf("\nPhan tu co so lan xuat hien nhieu nhat la: ");
	
	for(int i=0;i<n;i++){
	
		int count_at_i = 1;	
		for(int j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				count_at_i++;
			}
		}
		if(count_max_element==count_at_i){
			printf("%d  ",arr[i]);
		}
	}
}


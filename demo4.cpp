#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang: \n");
	scanf("%d",&n);
	int arr[n];

	printf("NHap gia tri cho mang: \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}


	int arr2[n];
	int max = 0;
	for(int i=0;i<n;i++){
		int m = 0;
		for(int j=0;j<n;j++){
			if(arr[i] == arr[j]){
				m++;
			}
		}
		if(m>max){
			max = m;
		}
		arr2[i] = m;
	}

	printf("Danh sach xuat hien nhieu nhat:\n");
	int prev_print = arr[0];
	if(arr2[0] == max){
		printf("%d\t",arr[0]);
	}
	for(int i=1;i<n;i++){
		if(arr2[i] == max && arr[i] != prev_print){
			prev_print = arr[i];
			printf("%d\t",arr[i]);
		}
	}
}
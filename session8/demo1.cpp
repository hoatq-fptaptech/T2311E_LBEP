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

	int sl = 0;
	for(int i=n-1;i>=0;i--){
		if(arr[i] %2 != 0){
			sl = arr[i];
			break;
		}
	}
	printf("So le cuoi cung: %d\n",sl);

}
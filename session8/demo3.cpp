#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang: \n");
	scanf("%d",&n);
	int arr[n];

	printf("NHap gia tri cho mang: \n");
	for(int i=0;i<n; ){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]); // arr[i]
		// kiem tra xem arr[i] có nằm trong 
		//danh sach mảng arr[0]->arr[i-1]: i phan tu
		int check = 0;
		for(int j=0;j<i;j++){
			if(arr[i] == arr[j]){
				check = 1;
				break;
			}
		}

		if(check == 0){
			i++;
		}

	}


}
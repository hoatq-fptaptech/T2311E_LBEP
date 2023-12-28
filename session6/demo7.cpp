#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong:");
	scanf("%d",&n);

	int ary[n];

	// nhap 10 so nguyen
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d:",i);
		scanf("%d",&ary[i]);
	}

	int max = arr[0];

	for(int i= 1;i<n;i++){
		if(ary[i] > max){
			max = arr[i];
		}
	}
	printf("Max: %d\n",max);

	int second = max;
// tìm trong mảng xem có số nào khác max hay không để thay thế
	for(int i=0;i<n;i++){
		if(ary[i]<max){
			second = ary[i];
			break;
		}
	}

	if(second == max){
		printf("Mang toàn số bằng nhau\n");
	}else{
		for(int i=0;i<n;i++){
			if(ary[i] > second && ary[i]< max){
				second = ary[i];
			}
		}
		printf("Second: %d\n",second);
	}
}
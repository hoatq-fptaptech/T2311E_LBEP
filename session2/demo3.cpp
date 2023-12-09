#include <stdio.h>

int main(){
	int A;
	printf("Nhap so thu nhat:");
	scanf("%d",&A);

	int B;
	printf("Nhap so thu hai:");
	scanf("%d",&B);

	int C;
	printf("Nhap so thu 3:");
	scanf("%d",&C);

	int Max;
	Max = A;

	if(B>Max){
		Max = B;
	}else{

	}

	if(C>Max){
		Max = C;
	}else{

	}

	printf("Max: %d",Max);
}
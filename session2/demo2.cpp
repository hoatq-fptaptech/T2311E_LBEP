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

	if(A > B){
		// yes
		if(A>C){
			printf("Max: %d",A);
		}else{
			printf("Max: %d",C);
		}
	}else{
		//no
		if(B >= C){
			printf("Max: %d",B);
		}else{
			printf("Max: %d",C);
		}
	}
}
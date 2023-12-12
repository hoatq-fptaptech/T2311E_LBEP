#include <stdio.h>

int main(){
	int a;
	printf("Nhap a = ");
	scanf("%d",&a);

	int b;
	printf("Nhap b=");
	scanf("%d",&b);

	int c;
	printf("Nhap c=");
	scanf("%d",&c);

	if((a+b>c) && (b+c>a) && (a+c > b)){
		int P = a+b+c; 
		// float P2 = P/2.0;
		float P2 = (float)P/2;
		// float P2 = P/ (float)2;
		float S = sqrt(P2*(P2-a)*(P2-b)*(P2-c));

		//printf("Tam giac co chu vi: %d\n",P);
		//printf("Dien tich: %f",S);

		printf("Tam giac co chu vi %d va dien tich %f",P,S);
	}else{
		printf("Day khong phai do dai 3 canh tam giac");
	}
}
#include <stdio.h>

int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);

	int n2 = 0;

	// while(n>0){
	// 	int sd = n%10;
	// 	n /=10; // n = n/10;
	// 	n2 = n2*10 + sd;
	// }

	// for
	for(int sd=0;n>0;n/=10){
		sd = n%10;
		n2 = n2*10+sd;
	}

	printf("So dao nguoc: %d",n2);
}
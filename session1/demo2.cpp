#include <stdio.h>

int main(){

	int num;
	scanf("%d",&num);

	int r = num % 2;

	if(r == 0){
		// yes
		printf("Num la so chan");
	}else{
		// no
		printf("Num la so le");
	}
}
#include <stdio.h>

int main(){
	
	int x = 10;

	if(x > 5){
		int y = 20;	// local variable
		printf("y = %d\n",y);
	}else{
		int z = 30;
	}
	printf("x = %d\n",x);

	// int i = 0;
	// while(i<10){
	// 	printf("i = %d\n",i);
	// 	i++;
	// }
	
	for(int i=0;i<10;i++){ // i: local variable
		printf("i=%d\n",i);
	}
	
}
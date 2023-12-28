#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){
		int sls = 5;
		if(i%2==1){
			sls = 4;
		}
		for(int j=0;j<sls;j++){
			printf("* ");
		}
		printf("\n");
	}
}
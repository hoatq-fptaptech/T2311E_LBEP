#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			for(int k=0;k<=i;k++){
				printf("* ");
			}
			printf("\t");
		}
		printf("\n");
	}
}
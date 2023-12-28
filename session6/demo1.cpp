#include <stdio.h>

int main(){
	
	// for(int i=0;i<10;i++){ // 10 rounds
	// 	printf("A\n");
	// 	for(int j=0;j<5;j++){ // 5 rounds
	// 		printf("	B\n");
	// 	}
	// }

	for(int i=0;i<10;i++){
		printf("start i = %d\n",i);
		if(i>=5){
			// break;
			continue;
		}
		printf("end i= %d\n",i);
	}

	int n;
	printf("Nhap n=");
	scanf("%d",&n);

	for(int i = n-1;i>=0;i--){
		if(i%2 == 0 && i%3 == 0){
			printf("So can tim: %d",i);
			break;
		}
	}

}
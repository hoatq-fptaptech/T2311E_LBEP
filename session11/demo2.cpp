#include <stdio.h>
#include <string.h>
int main(){
	char arr[5][20];// mảng 5 strings
	for(int i=0;i<5;i++){
		printf("Nhap chuoi:\n");
		scanf("%s",arr[i]);
	}

	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
			if(strcmp(arr[j],arr[j+1])>0){
				char temp[20];
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
		}
	}
}
#include <stdio.h>
#include "demo.h"


int main(){
	int x = 10, y= 20;
	int z = tinh_tong(x,y);// 30
	int gtz = giai_thua(z);

	//bool kt = kt_nguyen_to(z);

	if(kt_nguyen_to(z)){
		printf("z la so nguyen to\n");
	}else {
		printf("z ko phai so nguyen to");
	}
	menu();
}



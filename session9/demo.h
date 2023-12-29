#include <math.h>
int tinh_tong(int a,int b){
	int c = a+b;
	return c;
}
// viet ham tính n! 
int giai_thua(int n){
	int gt = 1;
	for(int i=1;i<=n;i++){
		gt *= i;
	}
	return gt;
}

// viet ham kiem tra 1 so nguyen co phai so nguyen to hay khong
bool kt_nguyen_to(int n){ // true false
	if(n<=1){
		return false;
	}
	if(n == 2 || n==3){
		return true;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void menu(){
	printf("Danh sach cac mon an:\n");
	printf("1. Lẩu tứ xuyên\n");
	printf("2. Lẩu hải sản\n");
	printf("3. Lẩu thái chua cay\n");
	printf("4. Lẩu cá lăng\n");
	printf("5. Lẩu gà lá é\n");
}

int chu_vi_tam_giac(int a,int b,int c){
	return a+b+c;
}
float dien_tich_tamgiac(int a,int b,int c){
	float p = chu_vi_tam_giac(a,b,c)/2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int tong_chu_so(int n){
	int t = 0;
	while(n!= 0){
		t += n%10;
		n/=10;
	}
	return t;
}
int ucln(int a,int b){
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
	return 1;
}
int bcnn(int a,int b){
	for(int i=a; ;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
	return a*b;
}

// tìm số lớn nhất trong mảng n số nguyên
int max(int arr[],int n){ // tham số dạng tham chiếu
	int h = arr[0];
	for(int i=1;i<n;i++){
		if(h < arr[i]){
			h= arr[i];
		}
	}
	return h;
}

// viết hàm nhập các giá trị cho 1 mảng n số nguyên

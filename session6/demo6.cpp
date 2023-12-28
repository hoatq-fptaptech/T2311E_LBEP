#include <stdio.h>
int main(){
	int arr[5] = {0,12,34,13,4};// data_type array_name[size_of_array];

	int x = 10;
	arr[0] = 15;
	arr[4] = 20; // arr[5] - không có

	for(int i=0;i<5;i++){ // duyệt mảng
		arr[i] = 6 ;// arr[0] - i=0  -> arr[1] -- i =1
	}
}
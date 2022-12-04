#include<stdio.h>
#include<stdlib.h>
//需要移动几个数，就把数组整体往后移动几个位置，然后再把末尾的几个数提到前面来，在重置末尾的那几个数

void printout(int i,int number[]) {
	for (int k = 0; k < i; k++) {
		printf("%d ", number[k]);

	}
}
void input(int number[] , int n) {
	//注意数组的小标和实际值的问题
	
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &number[i]);

	}

}

//n是移动个数，
//void move(int arr[], int n , int m )
//{
//	if (n != 0) {
//		//数组向后移动n位
//		for (int i = 0; i <= n + 1; i++) {
//			arr[m - 1 - i + n] = arr[m - 1 - i];
//			arr[m - 1 - i] = 0;
//
//		}
//		//移动末尾数
//		for (int j = 0; j < n; j++) {
//			arr[m - 1 - j + n - m] = arr[m - 1 - j + n];
//
//		}
//	}
//	
//}

//n是数组元素的个数
void move(int arr[],int n) {
	
	for (int i = 0; i < n; i++) {
		arr[n - i] = arr[n - 1 - i];
		
	}
	arr[0] = arr[n ];
}
int main() {

	int* s;
	int n , time;
	scanf_s("%d", &n);
	int m = n * 2;

	s = (int*)calloc(m, sizeof(int));
	
	
	input(s,n);

	//输入要移动的位数time

	scanf_s("%d", &time);

	for (int i = 0; i < time; i++) {
		move(s, n);
	}

	printout(n, s);



	return 0;


}

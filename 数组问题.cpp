#include<stdio.h>
#include<stdlib.h>
//��Ҫ�ƶ����������Ͱ��������������ƶ�����λ�ã�Ȼ���ٰ�ĩβ�ļ������ᵽǰ������������ĩβ���Ǽ�����

void printout(int i,int number[]) {
	for (int k = 0; k < i; k++) {
		printf("%d ", number[k]);

	}
}
void input(int number[] , int n) {
	//ע�������С���ʵ��ֵ������
	
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &number[i]);

	}

}

//n���ƶ�������
//void move(int arr[], int n , int m )
//{
//	if (n != 0) {
//		//��������ƶ�nλ
//		for (int i = 0; i <= n + 1; i++) {
//			arr[m - 1 - i + n] = arr[m - 1 - i];
//			arr[m - 1 - i] = 0;
//
//		}
//		//�ƶ�ĩβ��
//		for (int j = 0; j < n; j++) {
//			arr[m - 1 - j + n - m] = arr[m - 1 - j + n];
//
//		}
//	}
//	
//}

//n������Ԫ�صĸ���
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

	//����Ҫ�ƶ���λ��time

	scanf_s("%d", &time);

	for (int i = 0; i < time; i++) {
		move(s, n);
	}

	printout(n, s);



	return 0;


}

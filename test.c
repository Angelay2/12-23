#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�� 2 ��ʼ��һֱ�� num �����е��������Կ��ܲ���������
//ֻҪ�ҵ�һ���������ģ���һ������������
//������е�����������Ҳû�ҵ������ģ�����������
int IsPrime(int num){
	if (num < 2){
		return 1;
	}
	for (int i = 2; i < num; i++){
		if (num % i == 0){
			return 0;
		}
	}return 1;
}
int main(){
	int count = 0;

	int i = 100;
	printf("100-200֮�������(����)��:\n");
	for (; i <= 200; i++){
		IsPrime(i);
		if (IsPrime(i) == 1){
			printf("%d ", i);
			count++;
		}
	}
	printf("һ����%d��\n", count);
	system("pause");
	return 0;
}

// ��ӡ 9 * 9 �˷��ھ���
//int two(){
//	int n = 9;
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//		printf("%d*%d=%d ", j, i, i * j);
//	}
//		putchar('\n');
//  }
//		system("pause");
//		return 0;
//}

// ��ӡ���������ĳ˷��ھ���
//int four(){
//	int n = 0;
//	printf("���������������\n");
//	scanf("%d",&n);
//	int i = 1;
//	int j = n;
//
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	for (i = n; i >= 1; i--){
//		for (j = i; j >= 1; j--){
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}

// �������κ���ʱ�������������н���
//int three(){
//	int a = 0;
//	int b = 0;
//	printf("���������������ÿո��������\n");
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("����������Ϊ:\n%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//			 
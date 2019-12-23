#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//从 2 开始，一直到 num 拿所有的数字试试看能不能整除。
//只要找到一个能整除的，就一定不是素数。
//如果所有的数都找完了也没找到整除的，就是素数。
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
	printf("100-200之间的素数(质数)有:\n");
	for (; i <= 200; i++){
		IsPrime(i);
		if (IsPrime(i) == 1){
			printf("%d ", i);
			count++;
		}
	}
	printf("一共有%d个\n", count);
	system("pause");
	return 0;
}

// 打印 9 * 9 乘法口诀表
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

// 打印任意列数的乘法口诀表
//int four(){
//	int n = 0;
//	printf("请输入最大列数：\n");
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

// 不借助任何临时变量对两数进行交换
//int three(){
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数（用空格隔开）：\n");
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("两数交换后为:\n%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//			 
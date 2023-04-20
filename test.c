#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//指针就是变量，用来存放地址的变量
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(double*));
//
//
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//指针类型决定了指针解引用能够访问空间大小
//	//int* p  4个字节
//	//char* p  1个字节
//	//double* p  8个字节
//
//
//	char* pc = &a;
//	*pc = &a;
//
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pa);
//	return 0;
//
//}


//int main()
//{
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//指针类型决定了指针的步长
//	//int* p+1 --> 4
//	//char* p+1 --> 1
//	//double* p+1 --> 8
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	int m = 0;
//	return 0;
//}

//int main()
//{
//	int* p;//野指针，随机值
//	*p = 12;
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}
	return 0;
}

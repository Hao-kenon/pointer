#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//ָ����Ǳ�����������ŵ�ַ�ı���
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
//	*pa = 0;//ָ�����;�����ָ��������ܹ����ʿռ��С
//	//int* p  4���ֽ�
//	//char* p  1���ֽ�
//	//double* p  8���ֽ�
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
//	//ָ�����;�����ָ��Ĳ���
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
//	int* p;//Ұָ�룬���ֵ
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
		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		*(p++) = i;
	}
	return 0;
}

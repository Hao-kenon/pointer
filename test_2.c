#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1; 
//	}*/
//	/*for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}


//指针减指针(同一个空间)
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符窜长度
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//数组与指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名-数组首元素地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//&数组名-整个数组的地址
//	//sizeof(数组名)--计算整个数组的大小
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ===== %p\n", p + i, &arr[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d\n", arr[i]);
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}



//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;
//	return 0;
//}

//指针数组
int main()
{
	int a = 10, b = 20, c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
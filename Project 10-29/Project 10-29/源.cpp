#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int arr[3][4] = { {1,2,3},{4,5 } }; // 二维数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n ", i,j,&arr[i][j]);
		}
		printf("\n");
	}

	//char ch[5][6];
	//int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//行可以省略，列不可以省列
	return 0;
}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);   //数组在内存中是连续存放的
//	}
//	return 0;
//}



//int main()
//{
//	//char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	//int i = 0;
//	//for (i = 0; i <(int) strlen(arr); i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}



//数组的创建

//int main()
//{
//	//创建一个数组 存放整型
//	//int arr[10] = {0,1,2,3,4,5,6,7};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5] = {'a','b'};
//	/*char arr3[5] =  "abc" ;*/
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	return 0;
//}
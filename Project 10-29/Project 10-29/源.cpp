#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int arr[3][4] = { {1,2,3},{4,5 } }; // ��ά����
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
	//int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ�ԣ��в�����ʡ��
	return 0;
}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);   //�������ڴ�����������ŵ�
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



//����Ĵ���

//int main()
//{
//	//����һ������ �������
//	//int arr[10] = {0,1,2,3,4,5,6,7};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = {'a','b'};
//	/*char arr3[5] =  "abc" ;*/
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	return 0;
//}
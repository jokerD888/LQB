#define _CRT_SECURE_NO_WARNINGS 1

//A.��������
//#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 2020; i++)
//	{
//		int j = i;
//		while (j)
//		{
//			int n = j % 10;
//			j /= 10;
//			if (n == 2)
//				sum++;
//		}
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}


//����B����Լ����
//#include<stdio.h>
//int Gcd(int a,int b)
//{
//	int r = 1;
//	while (b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	if (a == 1)
//		return 1;
//	return 0;
//}
//int main(void)
//{
//	int z, m;
//	int sum = 0;
//	for (z = 1; z <= 2020; z++)
//	{
//		for (m = 1; m <= 2020; m++)
//		{
//			if (Gcd(m,z))
//				sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����C:��������
#include<stdio.h>
int main(void)
{
	int arr[50][50] = { 0 };
	int i=1,n=40;
	int x, y;
	x = 0;
	y = 0;
	while (n--)
	{
		if (n % 2)//n%2���������壬ֻΪ������ϵ��ºʹ��µ����������֣�
		{
			while (x >= 0)
			{
				arr[x--][y++] = i++;
			}
			����ѭ����x=-1,++��Ϊ0
			x++;
		}

		if (n % 2 == 0)
		{
			while (y >=0)
			{
				arr[x++][y--] = i++;
			}
			����ѭ����y=-1,++��Ϊ0
			y++;
		}
		
	}
	printf("%d\n", arr[19][19]);
	return 0;
}



#include "stdio.h"
#include "conio.h"
#include "Math.h"
#include "stdlib.h"
#include "time.h"
#define MAX 100

void nhapMang_1D(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{ 
		printf("Nhap phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void nhapMang_1D_Random(int a[], int n)
{ 
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 15;
	}
}
void xuatPT_ChanLe(int a[], int n)
{
	printf("\nCac phan tu chan trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%4d", a[i]);
		}
	}

	printf("\nCac phan tu le trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			printf("%4d", a[i]);
		}
	}
}
int xuatPT_Chan(int n)
{
	if (n % 2 == 0) return n;
}
float AVG(int a[], int n)
{
	if (n <= 0) return 0;
	return (a[n - 1] + AVG(a, n - 1)) / (float)(n);
}
void AVG_Cong(int a[], int n) //Sai rồi nè
{
	int AVG = 0;
	
	for (int i = 0; i < n; i++)
	{
		AVG = (AVG + a[i]) / (float)(n + 1);
	}
	printf("\nTrung binh cong la: %d", AVG);
}
void xuatMang_1D(int a[], int n)
{
	printf("Cac phan tu trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

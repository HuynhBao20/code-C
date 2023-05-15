#pragma once
#include "Math.h"
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "Time.h"
#define MAX 100
//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
int tong_for(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		S += i;
	}
	return S;
}
int tong_While(int n)
{
	int i = 1, S = 0;
	while (i <= n)
	{
		S += i;
		i++;
	}
	return S;
}
int tong_DeQuy(int n)
{
	if (n == 1) return 1;
	return n + tong_DeQuy(n - 1);
}
int tong_Nguoc(int n)
{
	int S = 0;
	for (int i = n; i >= 1; i--)
	{
		S += i;
	}
	return S;
}
//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
int tong_BinhPhuong(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		//S += i * i;
		S += pow((float)i, 2);
	}
	return S;
}
int tong_BinhPhuong_DeQuy(int n)
{
	if (n == 1) return 1;
	return pow((float)n, 2) + pow(tong_BinhPhuong_DeQuy(n - 1) * 1.0, 2);
}
int tong_BinhPhuong_While(int n)
{
	int i = 0, S = 0;
	while (i <= n)
	{
		S += pow((float)i, 2);
		i++;
	}
	return S;
}
//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
float tong_Phan(int n)
{
	float S = 0;
	for (int i = 1; i <= n; i++)
	{
		S += (1 / (float)i);
	}
	return S;
}
float tong_Phan_DeQuy(int n)
{
	if (n == 1) return 1;
	return (1 / (float)n) + (1 / (float)tong_Phan_DeQuy(n - 1));
}
//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
float tong_2n(int n)
{
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S += (1 / (float)(2 * i));
		i++;
	}
	return S;
}
float tong_2n_DeQuy(int n)
{
	if (n == 1) return 1;
	return (1 / (2.0 * n)) + (1 / (2.0 * tong_2n_DeQuy(n - 1)));
}
//Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
void timUS(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%4d", i);
		}
	}
}
//Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n
int tongUS(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			S += i;
		}
	}
	return S;
}
//Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n
int tichUS(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			S *= i;
		}
	}
	return S;
}
//Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
void timUS_Le(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 != 0)
			{
				printf("%4d", i);
			}
		}
	}
}
//Phân số
void nhapXuat_PS(int tuSo, int mauSo)
{
	printf("Tu so la: %d", tuSo);
	printf("\nMau so la: %d", mauSo);
}
float tong_PS(int tuSo, int mauSo)
{
	return tuSo / (float)mauSo;
}
void nhapXuat_Mang(int a[], int n)
{
	/*for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 15;
	}*/

	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
int tim_MAX(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}
void swap(int &a, int &b)
{
	int T = a;
	a = b;
	b = T;
}
void selectionSort(int a[], int n)
{
	int jmin;
	
	for (int i = 0; i < n - 1; i++)
	{
		jmin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[jmin])
			{
				jmin = j;
			}
		}
		if (jmin != i)
		swap(a[jmin], a[i]);
	}
	printf("\nSelection Sort: ");
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
void 
#include "stdio.h"
#include "conio.h"
#include "GiaiDe.h"

void main()
{	
	int a[MAX], n;
	do{
		printf("Nhap kich thuoc phan tu: ");
		scanf("%d", &n);
	} while (n < 0);
	
	//nhapMang_1D(a, n);
	nhapMang_1D_Random(a, n);
	xuatMang_1D(a, n);
	xuatPT_ChanLe(a, n);
		printf("\n%.2f", AVG(a, n));
	AVG_Cong(a, n);
	getch();
}
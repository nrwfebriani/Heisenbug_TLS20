#include <stdio.h>

int main()
{
int X1,X2,V1,V2;
	printf("Program Adu Loncatan Jangkrik\n");
	printf("Masukkan: \n\t-posisi jangkrik 1 \n\t-panjang lompatan jangkrik 1 \n\t-posisi jangkrik 2 \n\t-panjang lompatan jangkrik 2 \n(Rentang yang dibolehkan adalah 0<=X1<X2<=1000, 1<=V1<=1000, 1<=V2<=1000) \nsecara berturut-turut dipisahkan dengan satu spasi: ");
	scanf("%d %d %d %d", &X1, &V1, &X2, &V2);

	if(0<=X1<=1e3 && X1<X2 && 0<=X2<=1e3 && 1<=V1<=1e3 && 1<=V2<=1e3)
	{
		while(X1<X2)
		{
			X1=X1+V1;
			X2=X2+V2;
		}
		if (X1==X2) 
		{
			printf("YES");
		}
			else
			{
				printf("NO");
			}
	}
	else
	{
		printf("Angka yang anda masukkan salah!");
	}
return 0;
}
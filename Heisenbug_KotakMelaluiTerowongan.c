#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int volume, length, width, height;
}boxes;

int main()
{
	int i, n;
	boxes a[100];

	printf("Bisakah kotakmu melewati terowongan???? (& berapakah volumenya)\n\n");
	printf("Masukkan jumlah kotak yang ingin dibawa (angka 1-100) pada baris pertama dan ukuran tiap kotak (panjang, lebar, tinggi dipisahkan dengan satu spasi, dengan rentang ukuran 1-100) pada baris-baris selanjutnya:\n");
	scanf("%d", &n);
	if(n>=1 && n<=100)
	{
		for(i=0;i<n;i++)
		{
			scanf("\n%d %d %d", &a[i].length, &a[i].width, &a[i].height);
	
			if(a[i].length>=1 && a[i].length<=100 && a[i].width>=1 && a[i].width<=100 && a[i].height>=1 && a[i].height<=100)
			{
				a[i].volume=a[i].length*a[i].width*a[i].height;
			}

			else
			{
				printf("Input yang anda masukkan salah!");
				exit(0);
			}
		}

		for(i=0;i<n;i++)
		{
			if(a[i].height<41)
			{
				printf("\n%d", a[i].volume);
			}
		}
	}
	else
	{
		printf("Input yang anda masukkan salah!");
	}
return 0;
}

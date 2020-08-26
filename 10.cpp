#include<conio.h>
#include<stdio.h>
int main()
{
	int a[50],n,i;
		int dem=0;
	printf("Nhap so phan tu n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	printf("Mang sau khi nhap:");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	printf("Chi so cac phan tu can tim la:\n");
	int tong=a[0];
	for(i=1;i<n;i++)
	{ tong+=a[i];
		if(a[i]==tong){
			printf("%5d",i+1);
			dem++;
		}
		
	}
	if(dem==0)
	printf("khong co!");
}

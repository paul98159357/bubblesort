#include<stdio.h>
#include<stdlib.h>

void bubble(int a[],int n)
{
	for(int i=0;i<n-1;i++)//外迴圈的職 
		for(int j=0;j<n-i-1;j++) //內迴圈要得直與下一個職 
		if(a[j] > a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
}

int main(void)
{
	int a[] = {26,5,81,7,63};
	
	bubble(a, 5);
	printf("take in line\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}

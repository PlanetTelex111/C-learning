#include <stdio.h>
int main(void)
{
	int arr[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<6;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
			else
			{
				break;
			}
		}
	}
	for(int n=0;n<6;n++)
	{
		printf("%d ",arr[n]);
	}
	return 0;
}

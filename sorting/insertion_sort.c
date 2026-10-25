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
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	for(int n=0;n<6;n++)
	{
		printf("%d ",arr[n]);
	}
	return 0;
}

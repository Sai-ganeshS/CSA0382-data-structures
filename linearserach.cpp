#include<stdio.h>
int main()
{
	int n,s;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&s);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			printf("Element %d  index: %d",s,i);
			return 0;
		}
	}
	printf(" %d not found!!",s);
}

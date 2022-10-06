#include<stdio.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define r(i,a,b) for(int i=a;i>b;i--)
signed main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c];
	f(i,0,r)
	{
		f(j,0,c)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int min=100000,max=-11,sum=0,sum1=0;
	f(i,0,r)
	{
		f(j,0,c)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("min:%d  max:%d",min,max);
	f(i,0,r)
	{
		f(j,0,c)
		{
			if(i==j)
			{
				sum+=a[i][j];
				
			}
			
		}
	}
	int y=c-1,x=0;
	while(y>=0)
	{
		sum1+=a[x][y];
		x++;
		y--;
		
		
	}
	printf(" sum:%d  sum1:%d",sum,sum1);
	
}

#include<stdio.h>
#define f(i,a,b) for(int i=a;i<b;i++)

signed main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c];
	f(i,0,r)
	{
		f(j,0,c)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n");
	f(i,0,r)
	{
		f(j,0,c)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	int m[r][c]={0};
	f(i,0,r)
	{
		f(j,0,c)
		{
			m[i][j]=0;
		}
	}
	f(i,0,r)
	{
		f(j,0,c)
		{
			f(k,0,c)
			{
				m[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	f(i,0,r)
	{
		f(j,0,c)
		{
		printf("%d ",m[i][j]);
		}
		printf("\n");
	}

return 0;




}

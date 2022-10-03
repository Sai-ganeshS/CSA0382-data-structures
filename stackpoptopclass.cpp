#include<stdio.h>

#define n 100

class stack{
	int* arr;
	int top;

	public:
		stack()
		{
			arr=new int [n];
			top=-1;
		}
		
		void push(int x)
		{
			if(top==n-1)
			{
				printf("stack overflow\n");
			}
			top++;
			arr[top]=x;		
		}
		
		int pop()
		{
			if(top==-1)
			{
				printf("no element to pop\n");
				return 0 ;
			}
			top--;
		}
		
		
		
		
		int Top()
		{
			if(top==-1)
			{
				printf("there is no element\n");
				return 0;
			}
			return arr[top];
		}
};





int main()
{
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	printf("%d\n",st.Top());
	st.pop();
	printf("%d\n",st.Top());
	st.pop();
	st.pop();
	st.pop();
	
}

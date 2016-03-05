#include<stdio.h>
int main()
{
	int n,i,count=0;
	char c[50];
	printf("Enter total one\n");
	scanf("%d",&n);
	printf("Enter formula\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&c[i]);
	}

	for(i=0;i<=n;i++)
	{
		if( ((c[i]>=65) && (c[i]<=90))  || ((c[i]>=97) && (c[i]<=122)) )
		{
			count=count+1;
		}		
	}
	printf("total %d",count);

return 0;
}

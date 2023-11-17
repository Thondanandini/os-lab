#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the no. of processors and blocks");
	scanf("%d%d",&n,&m);
	int a[n],p[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&p[i]);
	}
	int b[m];
	for(int i=0;i<m;i++)
	{
		b[i]=-1;
	}
	for(int i=0;i<m;i++)
	{	for(int j=0;j<n;j++)
		{
			if(a[j]>=p[i])
			{
				b[i]=j;
				a[j]=a[j]-p[i];
				break;
			}
		}
	}
	printf("processor\tblock values\tno.of block\t\n");
	for(int i=0;i<m;i++)
	{
		if(b[i]!=-1)
		printf("%d\t\t%d\t\t%d\n",i,a[i],b[i]);
		else
		printf("%d\t\t%d\t\tmemory not allocated\n",i,a[i]);
	} 
}
			

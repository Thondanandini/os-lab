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
	{	int w=-1;
		for(int j=0;j<n;j++)
		{
			if(a[j]>=p[i])
			{
			    if(w==-1)
			    w=j;
			    else 
			    {
			        if(a[w]>a[j])
			        w=j;   
			    }
			    
			}
		}
		if(w!=-1)
		{
		b[i]=w;
		a[w]=a[w]-p[i];
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
		

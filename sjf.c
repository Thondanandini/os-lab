#include<stdio.h>
int main()
{
int n;
printf("enter the no. of processors:");
scanf("%d",&n);
int p[n],a[n],b[n];
for(int i=0;i<n;i++)
{
	scanf("%d%d%d",&p[i],&a[i],&b[i]);
}
for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			int temp1=p[j];
			p[j]=p[j+1];
			p[j+1]=temp1;
			int temp2=b[j];
			b[j]=b[j+1];
			b[j+1]=temp2;
		}
	}
}
float ata=0;
float wt=0;
int sum=0;
sum=a[0]+b[0];
int i=1;
ata=ata+sum-a[0];
wt=wt+sum-a[0]-b[0];
printf("pro\ttat\twt\t\n");

for(int i=1;i<n-1;i++)
{
	for(int j=1;j<n-1;j++)
	{
		if(b[j]>b[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			int temp1=p[j];
			p[j]=p[j+1];
			p[j+1]=temp1;
			int temp2=b[j];
			b[j]=b[j+1];
			b[j+1]=temp2;
		}
	}
}

printf("%d\t%d\t%d\t\n",p[0],sum-a[0],sum-a[0]-b[0]);
while(n!=i)
{     
	if(a[i]>sum)
	{
	printf("idle case occured\n");
	int t=a[i]-sum;
	 sum=sum+t;
	}
	 
	 sum=sum+b[i];
	 
	
	
	printf("%d\t%d\t%d\n",p[i],sum-a[i],sum-a[i]-b[i]);
	ata=ata+sum-a[i];
	wt=wt+sum-a[i]-b[i];
	i++;
	// printf("%f %f",ata,wt);
	
	
}
printf("%f\t%f\t",ata/n,wt/n);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
			
         
                              
                         
                     
            

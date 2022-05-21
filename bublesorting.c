#include <stdio.h>

int main(){
int  a1[10],i,j,n,temp;
printf("Enter the Limit for Array : \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the element :\n");
	scanf("%d",&a1[i]);
}
printf("original Array  is :\n");
for(i=0;i<n;i++)
{
	printf("%d \t",a1[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(a1[j]>a1[j+1])
		{
			temp=a1[j];
			a1[j]=a1[j+1];
			a1[j+1]=temp;
		}
	}
}
printf("\n");
printf("sorted Array is :\n");
for(i=0;i<n;i++)
{
	printf("%d \t",a1[i]);
}
    return 0;

}

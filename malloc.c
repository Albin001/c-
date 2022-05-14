#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int n;
	printf("Enter the Size Of Array:\n");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)malloc(n*4);
	if(ptr==NULL)
	{
	printf("Memory Is Not ALLOCATED \n");
	}
	else
	{
	printf("Memory Is ALLOCATED \n");
	}
	free(ptr);
	if(ptr==NULL)
	{
	printf("Memory is NOT ALLOCATED \n");
	}
	else
	{
		printf("MEMORY IS ALLOCATED \n");
	}
}

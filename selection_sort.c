#include<stdio.h>
int main()
{
int arr[20];
   int i, j, position, swap,n;
   for(i=0;i<4;i++)
   {
   	printf("Enter the Element :\n");
   	scanf("%d",&arr[i]);
   }
   printf("Before Sorting the Element  :\n");
   for(i=0;i<4;i++)
   {
   	printf("%d :\t",arr[i]);
   }
   for (i = 0; i < (4 - 1); i++) {
      position = i;
      for (j = i + 1; j < 4; j++) {
         if (arr[position] > arr[j])
         {
            position = j;
        }
      }
      if(position!=i)
      {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
     }
      
   }
   printf("\n");
   printf("After sorting :\n");
   for (i = 0; i < 4; i++)
      printf("%d\t", arr[i]);
   return 0;
}


#include<stdio.h>
int main()
{ 
  int arr[10],i,key,n;
  printf("enter array size");
  scanf("%d ",&n);
  printf("enter elements");
  for (i=0;i<n;i++)
  { 
  scanf("%d ",&arr[i]);
	 }   
	 printf("enter key element");
	 scanf("%d ",&arr[i]);
	 for(i=0;i<n;i++)
	 {
	 	if(arr[i]==key)
	 {
	 	printf("%d is found at %d position",key ,i+1);
	 	break;
	 }
}
   if(i==n)
   {
   	printf("%d is not found ");
   }
   return 0;
}


#include<stdio.h>
int factorial(int n);
int main()
{
   int n;
   printf("Enter the number to find factorial \n");
   scanf("%d",&n);
   printf("The value of factorial of %d is %d \n",n,factorial(n));
   
 
}

int factorial(int n)
{
	if (n<=1)
	   {
	   return 1;
	   }
	 else
	   {
	    return (n*factorial(n-1));
	   }
}

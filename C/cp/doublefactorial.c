/*Double factorial of a non-negative integer n is defined as the product of all the integers from 1 to n that have the same parity (odd or even) as n.
It is also called as semifactorial of a number and is denoted by n!!
*/

#include <stdio.h>
int doublefactorial(int n){
    int res = 1;
    for(int i=n;i>0;i-=2){
    if(n==0 || n==1)
        return res;
    else
         res = res*i;
    }
    
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("The Double Factorial is : %d",doublefactorial(n));

    return 0;
}

/*
Enter the number :6                                                                                                                           
The Double Factorial is : 48   
*/

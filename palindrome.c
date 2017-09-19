#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rev=0,remainder,num;
 scanf("%d", &n);
 num = n;
 while( n!=0 )
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }
if (num == rev)
        printf("%d is a palindrome",num);
    else
        printf("%d is not a palindrome",num);
}

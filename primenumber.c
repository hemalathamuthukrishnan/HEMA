#include<stdio.h>
void main()
{
   int n, m, i, flag;
   scanf("%d %d",&n,&m);
   while (n<m)
    {
        flag = 0;
      for(i = 2; i<=n/2;++i)
        {
            if(n%i==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
         printf("%d",n);
         ++n;
    }
}

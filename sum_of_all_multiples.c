#include <stdio.h>

void main()
{
   int i, a,b,sum=0;
   scanf("%d",&a);
   scanf("%d",&b);
    
   for(i=a;i<=b;i++)
   {
     if(i%7==0)
     {
       
       sum+=i;
     }
   }
   printf("%d",sum);
}
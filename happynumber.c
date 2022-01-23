#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,n,c=0,g,sum=0,rev;
  scanf("%d",&n);
  g=n;
  while(n!='\0')
  {
    n/=10;
    c++;
  }
  while(g!='\0')
  {
    rev=g%10;
    sum=sum+pow(rev,c);
    g=g/10;
  }
  printf("%d",sum);
}
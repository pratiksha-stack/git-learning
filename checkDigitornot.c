#include <stdio.h>
#include<ctype.h>

//Compiler version gcc  6.3.0

int main()
{
  char c[19];
  gets(c);
  int i,n,t=0;
  n=strlen(c);
  for(i=0;i<n;i++)
  {
    if(isdigit(c[i])>='0'&& c[i]<='9')
    {
      t++;
    }
    else
    {
      break;
    }
  }
  if(t==n)
  {
    printf("yes");
   
  }
  else
  {
    printf("false");
  }
  return 0;
}
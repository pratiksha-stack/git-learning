#include <stdio.h>
#include<string.h>

//Compiler version gcc  6.3.0

int main()
{
  char n[100],rev[100];
  int i,p,c=0;
  printf("enter string");
  fgets(n,sizeof(n),stdin);
  //puts(n);
  while(n[c]!='\0')
   c++;
  printf("%d",c);
  p=c-1;
  for(i=0;i<c;i++)
  {
    rev[i]=n[p];
    p--;
  }
  rev[i]!='\0';
  printf("%s",rev);
   
  
  
  

  return 0;
}
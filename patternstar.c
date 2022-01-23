#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,n,k=1;
  printf("enter no:");
  scanf("%d", &n);
     for(i=1;i<=5;i++)
     {
       if(i<=5)
       {
       
       for(j=1;j<=5;j++)
       {
        
      
      if(j<=6-i){
          
          printf("*");
          
        }
        else
         {
         printf(" ");
         
         }
          
       }
       printf("\n");  
       }
       else
       {
       for(j=5;j<=9;j++)
       {
         if(j>=4+i)
         {
           printf("*");
         }
         else
         {
           printf(" ");
         }
       }
       }
       printf("\n");
       
     
  }
  
  return 0;
}
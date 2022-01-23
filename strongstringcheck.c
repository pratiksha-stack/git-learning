#include<stdio.h>

#include<conio.h>

#include<string.h>

void main()

{

clrscr();

char string[25];

int count=0,flag, length,i;



gets(string);

if( (string[0]>='a'&&string[0]<='z') //small letter

    ||

    (string[0]>='A'&&string[0]<='Z') //cap letter

    ||

    (string[0]=='_')   //underscore

   )

       {



   for(int i=1;i<=strlen(string);i++)

   {

     if((string[i]>='a'&& string[i]<='z')

     ||

      (string[i]>='A' && string[i]<='Z')

     ||

     (string[i]>='0'&& string[i]<='9')

     ||

     (string[i]=='-')

     )

     {

 count++;



     }

   }

    if(count==strlen(string))

    {

      flag=0;

    }

  }

 else

 {

  flag=1;

 }



if(flag==1)

 printf("%s is not valid identifier",string);

 else

 {
   length = strlen(string);
    
    for(i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("you inputed a weak string");
    }    
    else {
        printf( "you inputed strong string");
    }
 }



getch();

}
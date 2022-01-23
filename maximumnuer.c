#include <stdio.h>

//Compiler version gcc  6.3.0

int sort(int arr[],int n);
int getmax(int arr[],int n);
int main()
{
  int arr[]={255,66,77,22,65,98};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,n);
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);
  
}
int sort(int arr[],int n)
{
  int t,maxint;
  if(n>1)
  {
  
  maxint=getmax(arr,n);
  t=arr[n-1];
  arr[n-1]=  arr[maxint];
  arr[maxint]=t;
  sort(arr,n-1);
  }
  
}
int getmax(int arr[],int n)
{
  int max=arr[0],t=0;
  for(int i=1;i< n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
      t=i;
    }
  }
  return t;
}
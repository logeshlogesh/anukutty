#include <stdio.h>

int main()
{
  int n1,n2,n3;
  printf("enter thre numbers:");
  scanf ("%d %d %d",&n1,&n2,&n3);
  if((n1>n2)&&(n1>n3))
  {
      
      printf(" n1 largest number");
  }
      
  else if(n2>n3)
  {
      
      printf(" n2 largest nmber");
      }
      else
      {
      printf("n3 largest number");
      }
      
  }
  

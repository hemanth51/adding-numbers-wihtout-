// Online C compiler to run C program online
#include <stdio.h>

int main(void) {
int i,j;
printf(" enter two numbers");
scanf("%d %d", &i,&j);

  if(j<0 && i>0)
  {
      while(j!=0)
      {
          i--;
          j++;
      }
  }
  if(i<0 && j>0)
  {
      while(j!=0)
      {
          i++;
          j--;
          
      }
  }
      if(i<0 && j<0)
      {
          while(j!=0)
         
         { i--;
          j++;
         }
      }
      if(i>0 && j>0)
      {
          while(j!=0)
          {
              i++;
              j--;
          }
      }
      
  
  
  printf(" the sum=%d",i);
  return 0;
}
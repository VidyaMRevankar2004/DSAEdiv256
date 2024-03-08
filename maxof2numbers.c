//C Program to find maximum out of 2 numbers
/* Name : Vidya Revankar
   Roll No : 514
   Division : E
   Date : 08/03/2024
*/
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the values of a and b\n");
  scanf("%d%d",&a,&b);
  if(a>b)
        printf("%d is maximum\n",a);
  else if(a==b)
        printf("Both are equal\n");
else
    printf("%d is maximum\n",b);
  printf("This program checks maximum of 2 numbers");
  return 0;


}


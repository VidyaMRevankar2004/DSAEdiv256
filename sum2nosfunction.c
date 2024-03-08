//Modular C Program to compute addition of two numbers
/*Name : Vidya Revanakar
  division : E
  Roll No : 514
  Date : 08/03/2024
*/
#include<stdio.h>
//function prototype
int addition(int num1,int num2);

int main()
{
    int num1,num2,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    //function call
    sum = addition(num1,num2);
    printf("Sum is %d\n",sum);
    return 0;
}
  //function definition
  int addition(int num1,int num2)
  {
      int sum;
      sum = num1+num2;
      return sum;
  }

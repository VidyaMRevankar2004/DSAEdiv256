//C program to check day as friday
/*Name : Vidya Revanakar
  Roll no : 514
  Division : E
  Date : 08/03/2024
*/
#include<stdio.h>
int main()
{
    char day;
    printf("Enter a character for day\n");
    scanf("%c",&day);
    if(day=='F'||day=='f')
    {
        printf("Have a nice weekend!\n");
    }
    else
    {
        printf("Have a nice day\n");
    }
    return 0;
}

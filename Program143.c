
#include<stdio.h>

void strtoggleX(char str[])
{

    while(*str != '\0')
    {
        if(*str>= 'a' && *str <= 'z')
        {
             *str=*str-32;
        }
        else // will give wrong output
        {
             *str=*str+32;
        }
       
        str++;
    }
  
}
int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}
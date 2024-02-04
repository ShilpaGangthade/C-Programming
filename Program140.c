// accept string from user and replace vowels with *(underscore)

#include<stdio.h>

void Replace(char str[])
{

    while(*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o'|| *str=='u'|| *str=='A' || *str=='E' || *str=='I'|| *str=='O'|| *str=='U')
        {
            *str = '_';
        }
        str++;
    }
  
}
int main()
{
    char Arr[20];
    char cValue = '\0';

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}
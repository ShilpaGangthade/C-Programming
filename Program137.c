// count vowels (case insensitive)

#include<stdio.h>

int CountVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o'|| *str=='u'|| *str=='A' || *str=='E' || *str=='I'|| *str=='O'|| *str=='U')
        {
        iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("Frequency of  vowels is : %d\n",iRet);
    
    return 0;
}
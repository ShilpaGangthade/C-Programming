// count the number of capital characters in the string
#include<stdio.h>

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
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

    iRet = CountCapital(Arr);

    printf("Frequency of capital letter is : %d\n",iRet);
    
    return 0;
}
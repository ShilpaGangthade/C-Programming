//Problem Statement : Accept the number from user and state whether it is odd or even

//Algorithm
/*
    START
        Accept number from user
        Devide that number by 2
        If remainder is 0 then display Even
        otherwise display Odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int  iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is even number \n", iValue);
    }
    else
    {
        printf("%d is a odd number \n",iValue);
    }
    return 0;
}
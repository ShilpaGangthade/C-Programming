// print 10 stars : *   *   *   *   *   *   
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue=0;
    
    printf("Enter the count : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
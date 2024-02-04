#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;
    
    while(iCnt<=5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
    
}

int main()
{
    DisplayI();

    return 0;
}
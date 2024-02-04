#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;
    
    if(iCnt<=5)
    {
        iCnt++;
        DisplayR(); // Head Recurssion
        printf("%d\n",iCnt); // last la iCnt 6 hota mhanun nehmi 5 ch aal
    }
    
}
int main()
{
    DisplayR();

    return 0;
}
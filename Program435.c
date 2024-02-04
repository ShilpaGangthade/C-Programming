// Recurssion

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;
    
    while(iCnt<=4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
    
}

void DisplayR()
{
    int iCnt = 1;
    
    if(iCnt<=4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        DisplayR();  // Recursive Call means calling a function from the same function
    }
    
}

int main()
{
    DisplayR();

    return 0;
}
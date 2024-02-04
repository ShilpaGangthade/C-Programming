// Recurssion

#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;
    
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

    printf("End of application\n");
    return 0;
}
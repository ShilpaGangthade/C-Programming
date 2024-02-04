//PS : Accept the class of a student from the user and display their exam timings
/* class - 1 - 8 am, 2 - 9 am , 3 - 10 am , 4 - 11 am, 5 -12 am*/
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard ==1)
    {
        printf("Your exam is at 8 AM\n");
    }
    if(iStandard ==2)
    {
        printf("Your exam is at 9 AM\n");
    }
    if(iStandard ==3)
    {
        printf("Your exam is at 10 AM\n");
    }
    if(iStandard ==4)
    {
        printf("Your exam is at 11 AM\n");
    }
    if(iStandard ==5)
    {
        printf("Your exam is at 12 AM\n");
    }
    else
    {
        printf("Invalid Input..\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter your class\n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);
    return 0;
}
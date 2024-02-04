//PS : Accept percentage from the user and display their class -
// if marks are:
/*
0-34 = Fail
35-49 = pass class (third class)
50-59 = second class
60-74 = first class
75-100 = distinction
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >=0.0) && (fMarks < 35.00))
    {
        printf("You are fail..\n");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is Pass class\n");
    }
    else if((fMarks >=50.00) && (fMarks <60.00))
    {
         printf("Your class is Second class\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 74.00))
    {
         printf("Your class is First class\n");
    }
    else if((fMarks >= 74.00) && (fMarks <= 100.00))
    {
         printf("Your class is First with Distinction\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}
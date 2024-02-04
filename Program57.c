
#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    
    while(iNo >  0) // Joparyant iNo 0 peksha motha ahe toparyant fira
    {
        printf("-----------------------------\n");
        iDigit = iNo % 10;
        printf("Digit is : %d\n",iDigit);
        iNo= iNo / 10;
        printf("Number is : %d\n", iNo);
    }
}

int main()
{

    int iValue = 721;

   printf("Enter number : \n");
 scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
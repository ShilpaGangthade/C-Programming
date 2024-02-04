// Problem statement: Accept input as integer from user and return its cube as output

// Algorithm
/*
    START
        Accept a number from user and store into iNo
        Create variable as iCube
        Calculate cube iNo * iNo * iNo
        Display the value of Cube to the user
    STOP
 */

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function name : CalculateCube
// Description : It is used to calculate cube of a number
// Input : int 
// Output : int
// Author Name : Shilpa Sanjay Gangthade
// Date : 02/10/2023
//
////////////////////////////////////////////////////////////////////////
//long is used in case if outcome is longer not the input

long int CalculateCube(int iValue)
{
   long int iCube = 0;

    iCube = iValue * iValue * iValue;
    return iCube;
}

////////////////////////////////////////////////////////////////////
//
//Entry Point function
//
//////////////////////////////////////////////////////////////////////
int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is : %ld\n",iAns);
    return 0;
}
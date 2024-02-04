// Accept n no from user and display only even numbers.
#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[],int iSize) 
{
    int iCnt = 0;

    printf("\n Even Elements of the array are : \n");
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt])%2)==0)
        {
            printf("%d\t",Arr[iCnt]); 
        }
        
    }
    printf("\n");
}

int main()
{
    int iCount= 0; int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
    printf("Enter the %d values : \n",iCount);
    //     1      2              3
    for(iCnt=0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]); //4
    }

    EvenDisplay(ptr, iCount); 
    free(ptr);
    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}
#include <stdio.h>
#include <conio.h>

    //  for question 1

    int add(int a, int b)
    {
        int c;
        c = a + b;
        printf("\n\tAddition is %d\n", c);
    }
    int sub(int a, int b)
    {
        int c;
        c = a - b;
        printf("\n\tSubtraction is %d\n", c);
    }
    int mul(int a, int b)
    {
        int c;
        c = a * b;
        printf("\n\tMultiplication is %d\n", c);
    }
    int div(int a, int b)
    {
        int c;
        c = a / b;
        printf("\n\tDivision is %d\n", c);
    }

    //  for question 3

    void Total(int qarr[], int Size)
    {
        int sump = 0;

        printf("\n\nArray elements in reverse order: ");
        for (int i = Size - 1; i >= 0; i--)
        {
            printf("%d ", qarr[i]);
        }
        printf("\n\n");

        for (int i = 0; i < Size; i++)
        {
            sump += qarr[i];
        }

        printf("Sum of all array elements: %d\n", sump);
    }
    

int main()
{
    int choice;

    // Question-1

    printf("\n\t\tWELCOME TO PROGRAM\n\n");

    printf("--------------- QUESTION-1 ---------------\n");
    printf("\nEnter 1 For Addition");
    printf("\nEnter 2 For Subtraction");
    printf("\nEnter 3 For Multiplication");
    printf("\nEnter 4 For Division\n");


    printf("\nEnter your choice :- ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        printf("------------------------------");
        add(a, b);
    }
    else if (choice == 2)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        printf("------------------------------");
        sub(a, b);
    }
    else if (choice == 3)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        printf("------------------------------");
        mul(a, b);
    }
    else if (choice == 4)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        printf("------------------------------");
        div(a, b);
    }
    else
    {
        printf("------------------------------");
        printf("\n\tinvalid input :) \n");
    }


    // Question-2

    printf("\n\n--------------- question-2 ---------------\n");
        for (int i=0;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf(" %d ",i*i);
        }
        printf("\n"); 
    }    

    // Question-3
    
    printf("\n--------------- question-3 ---------------");

    printf("\n\nCreating An Arrey..\n\n");
    int myArr[5];
        for (int i = 0; i < 5; i++)
        {
                printf("Enter Element %d :- ",i+1);
                scanf("%d", &myArr[i]);
        }

    int arrSize = sizeof(myArr) / sizeof(myArr[0]);

    Total(myArr, arrSize);

    // Question-4

    printf("\n\n--------------- question-4 ---------------");
    int value;
    int *p1 = &value;
    printf("\n\nEnter the value For Making Cube Of it: ");
    scanf("%d", &value);
    printf("\n\nThe cube of %d is --> %d\n",value, *p1 * *p1 * *p1);

    // Question-5

    int count=11;

    printf("\n--------------- QUESTION-5 ---------------\n\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}
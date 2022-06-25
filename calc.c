#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{   
    system("color 3F");
    int num1,num2;
    int option;
    printf("\n\t\t\t======================*Calculator*===================");
    printf("\nEnter 1st no: ");
    scanf("%d",&num1);
    printf("\nEnter the 2nd no: ");
    scanf("%d",&num2);
    while (num1,num2>=0)
    {   
        printf("\n1.Addition");
        printf("\n2.Substraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\nPlease select the option : ");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            printf("Answer: %d",num1+num2);
            break;
        case 2:
            printf("Answer: %d",num1-num2);
            break;
        case 3:
            printf("Answer: %d",num1*num2);
            break;
        case 4:
            printf("Answer: %d",num1/num2);
            break;
        case 5:
            printf("invalid option");
            break;
        default:
            Beep(800,1000);
            exit(0);
        }
    }
    return 0;
}
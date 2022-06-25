#include<windows.h>
#include<stdio.h>
#include<time.h>

int main(){
    system("color 3F");
    int pin=1234,option,enteredpin,count=0,amount=1;
    float balance=500000;
    int continueTransaction=1;
    time_t now;
    time(&now);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&now));
    printf("\n\t\t\t\t\t\t ############### WELCOME TO OUR ATM MACHINE ###############");


    while (pin!=enteredpin)
    {
        printf("\nPLEASE ENTER YOUR PIN  :");
        scanf("%d",&enteredpin);


        if(enteredpin !=pin)
        {
            Beep(5000,1000);
            printf("INVALID PIN!!!");
        }
        count++;

        
        if(count==3 && pin!=enteredpin)
        {
            exit(0);
        }
    }

    while (continueTransaction!=0)
    {
        printf("\n\t\t\t=================CHOOSE AVAILABLE TRANSACTIONS ==================");
        printf("\n\n\t\t1.WITHDRAW");
        printf("\n\t\t2.DEPOSIT");
        printf("\n\t\t3.CHECK BALANCE");
        printf("\n\t\t4.cancel");
        printf("\n\n\t PLEASE SELECT THE OPTION :");
        scanf("%d",&option);
            switch (option)
    {
    case 1:
        while (amount % 50 !=0)
        {
           printf("\n\t\t ENTER THE AMOUNT : ");
           scanf("%d",&amount);
           if(amount%50 != 0)
           {
               printf(" \n\t THE AMOUNT MUST BE A MULTIPLE OF 50");
               break;
           } 
        }
        if(balance <amount)
        {
            printf("\n\t SORRY INSUFFICIENT BALANCE");
            amount=1;
            break;
        }
        else
        {
            balance-=amount;
            printf("\n\t\t YOU HAVE WITHDRAWN RS.%d. YOUR NEW BALANCE IS %.2f",amount,balance);
            amount=1;
            break;
        }
    

    case 2:
        printf("\n\t\t PLEASE ENTER THE AMOUNT : ");
        scanf("%d",&amount);
        balance+=amount;
        printf("\n\t\t YOU HAVE DEPOSITED RS.%d. YOUR NEW BALNANCE IS %.2f",amount,balance);
        printf("\n\t\t\t ==================== THANKYOU FOR BANKING WITH OUR ATM MACHINE ====================");
        amount=1;
        break;
    
    case 3:
        printf("\n\t\t YOUR NEW BALANCE IS RS.%.2f",balance);
        break;

    case 4:
        Beep(610,500);
        printf("\n\t\t CANCEL TRANSACTION");
    
    default:
        Beep(610,500);
        exit(0);
    }
    printf("\n\t\t DO YOU WISH TO PERFORM ANOTHER TRANSACTION? Press 1[Yes],0[No]");
    scanf("%d",&continueTransaction);
    }
    

    return 0;
}
#include <stdio.h>
    unsigned long amount=1000, deposit, withdraw;
    int choice, pin, k;
    char transaction ='y';
    void main()
    {
        while (pin != 1520)
        {
            printf("ENTER YOUR SECRET PIN NUMBER:");
            scanf("%d", &pin);
            if (pin != 1520)
            printf("PLEASE ENTER VALID PASSWORD\n");
        }
        do
        {
            printf("********Welcome to ATM Service**************\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw Cash\n");
            printf("3. Deposit Cash\n");
            printf("4. Quit\n");
            printf("********************************************\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                    printf("\nYOUR BALANCE IN Rs : %lu ", amount);
                    break;
            case 2:
                	printf("\nENTER THE AMOUNT TO WITHDRAW: ");
                	scanf("%lu", &withdraw);
                	if (withdraw % 100 != 0)
               		 {
                    	printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
               		 }
                	else if (withdraw >(amount - 500))
                	{
                    printf("\nINSUFFICENT BALANCE");
                	}
                	else
                	{
                    amount = amount - withdraw;
                    printf("\nPLEASE COLLECT CASH");
                    printf("\nYOUR CURRENT BALANCE IS %lu", amount);
                	}
                	break;
            case 3:
                	printf("\nENTER THE AMOUNT TO DEPOSIT : ");
                	scanf("%lu", &deposit);
                    amount = amount + deposit;
                	printf("YOUR BALANCE IS %lu", amount);
                	break;
            case 4:
                	printf("\nTHANK U FOR USING ATM");
                	break;
            default:
                	printf("\nINVALID CHOICE");
            }
            printf("\nDO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
            fflush(stdin);
            scanf("%c", &transaction);
            if (transaction == 'n'|| transaction == 'N')
                        k = 1;
        } 
		while (k==0);
        printf("\nTHANKS FOR USING OUT ATM SERVICE");
    }

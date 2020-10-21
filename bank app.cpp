#include<stdio.h>
#include<conio.h>

float balance = 0;
int anothertransaction;
void transaction()
{
	int choice;
	printf("Enter any option to be served!\n\n");
	printf("1. withdraw\n");
	printf("2. Deposite\n");
	printf("3. Balance\n");
	printf("4. creat account\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
		int amountTOwithdraw;
		printf("please enter amount to withdraw: ", amountTOwithdraw);
		scanf("%d", &amountTOwithdraw);
		if(amountTOwithdraw > balance){
		
		printf("There is insuffient fund in your account.");
	    	printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit");
		scanf("%d", &anothertransaction);
		if(anothertransaction == 1)
		{
			transaction();
			
		}	}
	    else{  
	      balance = balance - amountTOwithdraw;
	      printf("You have withdraw %d and your new balance is %f",amountTOwithdraw, balance);
	    printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit");
		scanf("%d", &anothertransaction);
		if(anothertransaction == 1)
			{
			transaction();
			
		}
		}	
	break;
	
	case 2:
		int amountTOdeposite;
		printf("Please enter amount to deposite: ");
		scanf("%d", &amountTOdeposite);
		balance = amountTOdeposite + balance;
		printf("Thank you for depositing, new balance is: %f", balance);
		 
	    printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit");
		scanf("%d", &anothertransaction);
		if(anothertransaction == 1)
			{
			transaction();
			
		}
	break;
	case 3:
		printf("Your bank balance is: %f",balance);
		 
	    printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit");
		scanf("%d", &anothertransaction);
		if(anothertransaction == 1)
			{
			transaction();
			
		}
	break;
	case 4:
	        int i,a,b;
	        char name[20];
	        char add[25];
	   
	    
	    printf("wellcome to our bank. \n");
	 printf("Enter your age: \n",a);
	 scanf("%d",&a);   
	 
	 if(a>=18)
	 {
	 	  printf("Enter your name: \n",name[20]);
	 	  scanf("%s",&name[20]);
	 	  printf("Enter your phone number: \n",b);
	 	  scanf("%d",&b);
	 	  printf("Enter your address: \n",add[25]);
	 	  scanf("%s",add[25]);
	 	   printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit");
		scanf("%d", &anothertransaction);
		if(anothertransaction == 1)
			{
			transaction();
			
		}	
	 	
	 	
	 }
	 else
	 {
	 	printf("You are not allowed!!!");
	 
	  printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit");
		scanf("%d", &anothertransaction);
		if(anothertransaction == 1)
			{
			transaction();
			
		}
	}
 	break;	
	}
	
}
int main()

{
	
        transaction();
	 
	 
}

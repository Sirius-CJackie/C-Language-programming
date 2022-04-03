#include <stdio.h>
#include<stdlib.h>
void pass();
void account();
void withdrawal();
void Deposit();
void getmoney();
void transfer();


int acc=1000;

void withdrawal()/* Withdraw money bady function */ 
{ int i,j;
  int x,y;
  int k;
   printf("Please enter the withdrawal amount:");
   scanf("%d",&i);
   if( i > acc)
   {
   	printf("Insufficient account balance.");
	}
else{

  while( i<20 || i>1000 || i == 30 || (i%10) != 0)
  {  
     printf("\nPlease enter the withdrawal amount:");
     scanf("%d",&i);
  }
  acc = acc-i;  /*The algorithm to calculate the minimum number of bills*/ 
  j=i/50; 
  x=(i-50*j)/20; 
  y=(int)x/1;
  if((20*y+50*j)==i)
  {}
  else
  {
  j=j-1;
  x=(i-50*j)/20;
  }

  printf("\nThere are %d bills worth 20 € ",y);
  printf("\nThere are %d bills worth 50 € ",j);  
  printf("\nwolcome to your next coming!");}
  getch();
  system("cls");   /*Enter any key to clear the screen*/ 
	 	
 } 
 void Deposit() /*Deposit money bady function */ 
{ int i;
  printf("Please put the cash into the verification machine(Only in 50 or 30 € notes)\n");
  printf("Please enter your deposited amount: \n");
  scanf ("%d",&i);
   while( i<20 || i>1000 || i == 30 || (i%10) != 0)/*Determine whether the amount of money saved conforms to the machine algorithm*/ 
  {  
     printf("\nPlease enter the right deposited amount:");
     scanf("%d",&i);
  } 
  acc = acc+i;
  printf("Deposit successfully."); 
  getch();
  system("cls");
  
} 
 void pass()/*login system bady funtion*/ 
{
char idnumber[100]; 
char password[100];
int ac;
char a[100];
char id[100];
char ps[100];
FILE *pf;
pf=fopen("user.txt","r"); /*Read the user information in the file*/ 
fgets(a,100,pf);
sscanf(a,"IDnumber:%s Password:%s Account:%d",&id,&ps);

while(1)
{
  printf("\nPlease enter your account:\n");
  scanf("%s",idnumber);
  if(strcmp(idnumber,id)==0)
  {
	printf("Account is right.\n");
	break;
  }
  else
  {
   	printf("Account does not exit.\n");
   	
  }
} 

while(1)
{
  printf("Please enter your password:\n");
  scanf("%s",password);
  if(strcmp(password,ps)==0)
  {
	printf("Password is right.\n");
     
	break;
  }
  else
  {
   	printf("Password does not exit.\n");
   	
  }
 
}
printf("Authentication success.\n");
getch();
system("cls");
}
 void transfer()/*transfer accounts*/ 
{
 int a,n;
 printf("\nPlease enter transfer account number:");
 scanf("%d",&n);
 printf("\n Please enter your transfer amount:");
 scanf("%d",&a);
if( a > acc)
   {
   	printf("Insufficient account balance.");
	}
else{

printf("Transfer success.");
acc = acc-a;

}
getch();
system("cls");
 }
 void account()  /*account body function*/ 
 {
  
  printf("Your account bulance is  %d €",acc); 
  getch();
  system("cls");
 }
 void sc()/*Select service display body function*/ 
 {
  printf("\n***************************************************************\n");
  printf(" \nPlease select the service item you need\n"); 
  printf("+Account information and balance inquiry, please enter 1+\n");
  printf("++++++++++++++Deposit service,please enter 2+++++++++++++\n");
  printf("++++++++++++Withdrawal service,please enter 3++++++++++++\n");
  printf("+++++++++++++Transfer service, plese enter 4+++++++++++++\n");
  printf("++++++++++++++++Log out,please enter 5+++++++++++++++++++\n   Please enter the service number of your choice is \n");
  printf("\n***************************************************************\n");

 
 }
int main()/*main funtion*/ 
{
 
  int num1,num2,num3;
  printf("***************************************************************\n");
  printf("           Welcome to HUAXING bank \n         Please insert your bank card \n        Bank card identification success  \n");
  printf("***************************************************************");
  int i,j;
  pass();
  while(j != 5)
  {
  	
  sc();
  scanf ("%d",&j);        
  if(j == 1)
  {
   account();
   
   }
  if(j == 2)
  
  { printf("\n***************************************************************\n");
     Deposit();
    
  }
  if(j==3)
  { printf("\n***************************************************************\n");
     withdrawal();
     
  } 
  
  if(j==4)
  {
  printf("\n***************************************************************\n");
  transfer();
  
  }
  
  }
   if(j==5)
  { 
  
  printf("\n***************************************************************\n");
  printf("Please keep your bank card. Welcome next time");
   }
return 0;
}
 


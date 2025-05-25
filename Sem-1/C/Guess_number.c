#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int choice,i,round,self=0,com=0,num;
	printf("Enter number of round : ");
	scanf("%d",&round);
	printf("\n[1] Rock.\n[2] Paper.\n[3] Scissor\n\n");


	for(i=1;i<=round;i++){
		printf("\n\nEnter your choice : ");
		scanf("%d",choice);
		num=(rand()%3)+1;
		printf("%d",num);

		if(choice==num){
			printf("\nBoth are same.\nTry again");
		}
		else if(choice==1 && num==2){
			printf("\nYou choose Rock and computer choose Paper");
			printf("\nComputer won\n");
			com++;
		}
		else if (choice==1 && num==3)
		{
			printf("\nYou choose Rock and computer choose Scissor.");
			printf("\nYou won\n");
			self++;
		}
		else if (choice==2 && num==1)
		{
			printf("\nYou choose Paper and computer choose Rock.");
			printf("\nYou won.\n");
			self++;
		}
		else if (choice==2 && num==3)
		{
			printf("\nYou choose Paper and computer choose Scissor.");
			printf("\nComputer won.\n");
			com++;
		}
		else if (choice==3 && num==1)
		{
			printf("\nYou choose Scissor and computer choose Rock.");
			printf("\nComputer won.\n");
			com++;
		}
		else if(choice==3 && num==2)
		{
			printf("\nYou choose Scissor and computer choose Paper.");
			printf("\nYou won/\n");
			self++;
		}
	}
	if(self>com){
		printf("\n\n\t\t\t\tGame is over.");
		printf("\nYour score is %d.\nComputer's score is %d.",self,com);
		printf("\nYou Win the game.");
	}
	else if(self==com){
		printf("\n\n\t\t\t\tGame is over.");
		printf("\nYour score is %d.\nComputer's score is %d.",self,com);
		printf("\nIt's a tie.");
	}
	else{
		printf("\n\n\t\t\t\tGame is over.");
		printf("\nYour score is %d.\nComputer's score is %d.",self,com);
		printf("\nYou Lost the game.");
	}
}
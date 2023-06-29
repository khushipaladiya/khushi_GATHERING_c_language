#include<stdio.h>
int Addition(int A,int B){
	int sum=A+B;
	return sum;
}

int Subtraction(int A,int B){
	int sum=A-B;
	return sum;
}

int Multiplication(int A,int B){
	int sum=A*B;
	return sum;
}

int Division(int A,int B){
	int sum=A/B;
	return sum;
}

int Modulo(int A,int B){
	int sum=A%B;
	return sum;
}


int main(){
	int choice;
	int first;
	int second;
	
	do{
	
	printf("Press 1 for + \n");
	printf("Press 2 for - \n");
	printf("Press 3 for * \n");
	printf("Press 4 for / \n");
	printf("Press 5 for % \n");
	printf("Press 0 for EXIT \n");
	
	printf("Enter your choice: ");
	scanf("%d",&choice);

	

 switch(choice){
    case 1:
	  printf("\n");
	  printf("Enter the first number: ");
	  scanf("%d",&first);
	  printf("Enter the second number: ");
	  scanf("%d",&second);
	  printf("Addition of %d & %d number is: %d\n",first,second,Addition(first,second));	
      break; 
 
  case 2:
	  printf("\n");
	  printf("Enter the first number: ");
	  scanf("%d",&first);
	  printf("Enter the second number: ");
	  scanf("%d",&second);
	  printf("Subtraction of %d & %d number is: %d\n",first,second,Subtraction(first,second));	
    break;
    
    case 3:
	  printf("\n");
	  printf("Enter the first number: ");
	  scanf("%d",&first);
	  printf("Enter the second number: ");
	  scanf("%d",&second);
	  printf("Multiplication of %d & %d number is: %d\n",first,second,Multiplication(first,second));	
    break;
    
     case 4:
	  printf("\n");
	  printf("Enter the first number: ");
	  scanf("%d",&first);
	  printf("Enter the second number: ");
	  scanf("%d",&second);
	  printf("Division of %d & %d number is: %d\n",first,second,Division(first,second));	
    break;
    
     case 5:
	  printf("\n");
	  printf("Enter the first number: ");
	  scanf("%d",&first);
	  printf("Enter the second number: ");
	  scanf("%d",&second);
	  printf("Modulo of %d & %d number is: %d\n",first,second,Modulo(first,second));	
    break;
    
    default:
    	printf("You are EXITED");
    	break;
 }
}while(choice!=0);
return 0;
}


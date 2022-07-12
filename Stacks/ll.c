#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int stack[SIZE], top = -1;

void push(int value){
	if(top == SIZE-1)
		printf("\nOverflow!!\n");
	else{
		top++;
		stack[top] = value;
		printf("\nInsertion done!!\n");
	}
}

void pop(){
	if(top == -1)
		printf("\nUnderflow!!\n");
	else{
		top--;
		printf("\nDeletion Done\n");
	}

}

void display(){
	if(top == -1)
		printf("\n Stack is empty\n");
	else{
		int i;
		printf("\nStack elemnts are:\n");
		for(i=top; i>=0; --i)
			printf("%d ", stack[i]);
	}
}

int main(){
	int value, choice;
	while(1){
		printf("\nMenu\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter the choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: 
				printf("Enter the value to be pushed");
				scanf("%d", &value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3: 
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong Choice");

		}
	}

	
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//I dont know what to do

void print_choice(int );

int main(){
	int user_choice, machine_num, machine_choice, res;
	int user_score = 0, machine_score = 0, turn = 0;
	int user_temp = -1, machine_temp = -1;
	
	printf("\n***********The Rock, Paper & Scissor game**************\n");
	printf("\n***Created by: noobprog_22***\n");
	printf("\n***Rules***\n");
	printf("\nPaper - 0\nStone - 1\nScissor - 2\n");
	
	while(turn < 3){
		turn++;
		printf("\nEnter your choice: ");
		scanf(" %d", &user_choice);
		printf("User: \t");
		print_choice(user_choice);
		printf("\n");
		machine_num = rand()%1000;
		if(machine_num < 333)
			machine_choice = 0;
		else if(machine_num < 666)
			machine_choice = 1;
		else
			machine_choice = 2;
		printf("Machine: \t");
		print_choice(machine_choice);
		printf("\n");
		
		if(machine_choice == user_choice){
			printf("\nSame choice, so game nulled");
			turn--;
			continue;
		}
		switch(user_choice){
			case 0:
				if(machine_choice == 1)
					user_temp = 1;
				else if(machine_choice == 2)
					machine_temp = 1;
				break;
			case 1: 
				if(machine_choice == 2)
					user_temp = 1;
				else if(machine_choice == 0)
					machine_temp = 1;
				break;
			case 2:
				if(machine_choice == 0)
					user_temp = 1;
				else if(machine_score == 1)
					machine_temp = 1;
				break;
		}
		if(user_temp == 1){
			user_score++;
			print_choice(user_choice);
			printf(" Won\n");
		}
		else if(machine_temp = 1){
			machine_score++;
			print_choice(machine_choice);
			printf(" Won\n");
		}
		user_temp = -1;
		machine_temp = -1;
	}
	if(user_score > machine_score)
		printf("\nYou won it with a score of %d-%d", user_score, machine_score);
	else
		printf("\nYou lose it with a score of %d-%d", user_score, machine_score);
	getch();
}

void print_choice(int a){
	int choice;
	choice = a;
	switch(choice){
		case 0:
			printf("Paper");
			break;
		case 1:
			printf("Stone");
			break;
		case 2: 
			printf("Scissor");
			break;
	}
}

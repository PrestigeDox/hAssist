//main.c

// printf(WHITE"["RED"-"WHITE"] "GREEN"\n"COLOUR_RESET); ---> FALSE RED
// printf(WHITE"["GREEN"+"WHITE"] "GREEN"\n"COLOUR_RESET); ---> TRUE GREEN

#include <stdio.h> //Including all needed modules
#include <unistd.h>

#define RED "\x1B[31m" //Colour codes
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"
#define COLOUR_RESET "\x1b[0m" //Enabling colour reset to original server colour

int choice;

void clearPage() {
	printf("\033[2J\033[1;1H");
}

void initiateMenu() {
	printf(WHITE"["GREEN"+"WHITE"] "GREEN"OPTIONS\n"COLOUR_RESET);
	printf(WHITE"["RED"0"WHITE"] "GREEN"QUIT\n"COLOUR_RESET);
	printf(WHITE"["RED"1"WHITE"] "GREEN"PRINT MENU\n"COLOUR_RESET);
}

void menu() {
	printf(WHITE"["GREEN"+"WHITE"] "GREEN"MENU\n"COLOUR_RESET);
	printf(WHITE"["RED"0"WHITE"] "GREEN"QUIT\n"COLOUR_RESET);
	printf(WHITE"["RED"1"WHITE"] "GREEN"CLEAR SCREEN\n"COLOUR_RESET);
	printf(WHITE"["RED"2"WHITE"] "GREEN"ROOT THIS SERVER\n"COLOUR_RESET);
	printf(WHITE"["RED"3"WHITE"] "GREEN"ROOT VIA SSH\n"COLOUR_RESET);
}

int main() {
	printf(WHITE"["GREEN"+"WHITE"] "GREEN"Welcome to hAssist!\n\n"COLOUR_RESET);
	sleep(1);

	initiateMenu();
	printf(">>> ");
	scanf("%d", &choice);

	while(choice != 0) {
		clearPage();
		menu();
		printf(">>> ");
		scanf("%d", &choice);

		if(choice == 1) {
			clearPage();
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"CLEARNING SCREEN\n"COLOUR_RESET);
			sleep(2);
			clearPage();
		}

		else if(choice == 2) {
			printf("OPTION 2\n");
		}

		else if(choice == 3) {
			printf("OPTION 3\n");
		}

		else {
			//
		}

	}
}

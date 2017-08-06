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
int passwordSize;
int passwordCounter;
char passwordRand;

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
	printf(WHITE"["RED"2"WHITE"] "GREEN"UPDATE THIS SERVER\n"COLOUR_RESET);
	printf(WHITE"["RED"3"WHITE"] "GREEN"ROOT THIS SERVER\n"COLOUR_RESET);
	printf(WHITE"["RED"4"WHITE"] "GREEN"RANDOM PASSWORD GENERATOR\n"COLOUR_RESET);
}

void updateSystem() {
	system("yum update -y");
}

void installDependancies() {
	system("yum install perl -y");
	system("yum install gcc -y");
	system("yum install gcc-c++ -y");
	system("yum install cpan -y");
	system("yum install httpd -y");
	system("yum install httpd -y");
	system("yum install tftp -y");
	system("yum install screen -y");
	system("yum install nano -y");
	system("yum install unzip -y");
	system("yum install tar -y;");
	system("yum install wget -y");
	system("yum install curl -y");
	system("yum install busybox -y");
	system("yum install python-paramiko -y");
	system("yum install dstat -y");
	system("yum install nc -y");
	system("yum install dos2unix -y");
	system("yum install python -y");
}

void rootServer() {
	system("sh root.sh");
}

void passwordGenerator() {
	passwordCounter = 0;
	srandom(time(NULL));

	printf(WHITE"["GREEN"+"WHITE"] "GREEN"ENTER AMOUNT OF LETTERS\n>>> "COLOUR_RESET);
	scanf("%d", &passwordSize);

	while(passwordCounter < passwordSize) {
		passwordRand = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
        printf("%c", passwordRand);
        passwordCounter++;
	}
	printf("\n");
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
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"CLEARING SCREEN\n"COLOUR_RESET);
			sleep(2);
			clearPage();
		}

		else if(choice == 2) {
			clearPage();
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"UPDATING SYSTEM\n"COLOUR_RESET);
			sleep(2);
			updateSystem();
			clearPage();
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"INSTALLING DEPENDENCIES\n"COLOUR_RESET);
			sleep(2);
			installDependancies();
			clearPage();
		}

		else if(choice == 3) {
			clearPage();
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"ROOTING THIS SERVER\n"COLOUR_RESET);
			sleep(2);
			rootServer();
			clearPage();
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"SERVER HAS BEEN ROOTED\n"COLOUR_RESET);
			sleep(2);
			clearPage();
		}

		else if(choice == 4) {
			clearPage();
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"RANDOM PASSWORD GENERATOR\n"COLOUR_RESET);
			sleep(2);
			clearPage();
			passwordGenerator();
			sleep(2);
			printf(WHITE"\n["GREEN"+"WHITE"] "GREEN"PASSWORD DESTRUCTIO  PROCESS INITIATED\n"COLOUR_RESET);
			sleep(1);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"15 SECONDS TO COPY PASSWORD\n"COLOUR_RESET);
			sleep(5);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"10 SECONDS TO COPY PASSWORD\n"COLOUR_RESET);
			sleep(5);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"5 SECONDS TO COPY PASSWORD\n"COLOUR_RESET);
			sleep(5);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"TIME UP - PASSWORD DESTOYED\n"COLOUR_RESET);
			sleep(2);
			clearPage();
		}

		else {
			//
		}

	}
}

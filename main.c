//main.c

// printf(WHITE"["RED"-"WHITE"] "GREEN"\n"COLOUR_RESET); ---> FALSE RED
// printf(WHITE"["GREEN"+"WHITE"] "GREEN"\n"COLOUR_RESET); ---> TRUE GREEN

//TO INCLUDE:
//Reverse Netcat Shell {--}
//Reverse Bash Shell   {--}
//Calculator
//Root via SSH
//Write to file
//Auto botnet setup  {--}
//Auto scanner setup {--}
//Scanner/Net download from site
//Dox Generator {--}
//Dox to file   {--}


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

//////////////////
char Username[50] = "prestige";
char Password[50] = "dox";
char UsernameAttempt[50];
char PasswordAttempt[50];
//////////////////

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

int contributerList() {
	printf(WHITE"["GREEN"+"WHITE"] "GREEN"CONTACT:\n"COLOUR_RESET);
	printf(WHITE"["RED"-"WHITE"] "GREEN"SKYPE ~ PrestigeDox\n"COLOUR_RESET);
	printf(WHITE"["RED"-"WHITE"] "GREEN"TWITTER ~ @PrestigeDox\n"COLOUR_RESET);
	printf(WHITE"["RED"-"WHITE"] "GREEN"DISCORD ~ PrestigeDox#2258\n"COLOUR_RESET);
	printf("\n");
	printf(WHITE"["GREEN"+"WHITE"] "GREEN"CREDITS:\n"COLOUR_RESET);
	printf(WHITE"["RED"-"WHITE"] "GREEN"CODING: PrestigeDox\n"COLOUR_RESET);
	printf(WHITE"["RED"-"WHITE"] "GREEN"INCORRECT BANNER: Entity.cs, Sprite\n"COLOUR_RESET);
	sleep(5);
	clearPage();
}

int main() {
	clearPage(); //Clear page before hand to make sure everything is neat and tidy

	printf(WHITE"["GREEN"+"WHITE"] "GREEN"ENTER USERNAME:\n>>> "COLOUR_RESET);
	scanf("%s", UsernameAttempt);
	if(strcmp(UsernameAttempt, Username) == 0) {
		printf(WHITE"["GREEN"+"WHITE"] "GREEN"VALID USERNAME!\n"COLOUR_RESET);
		sleep(2);
		clearPage();

		printf(WHITE"["GREEN"+"WHITE"] "GREEN"ENTER PASSWORD:\n>>> "COLOUR_RESET);
		scanf("%s", PasswordAttempt);
		if(strcmp(PasswordAttempt, Password) == 0) {
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"VALID PASSWORD!\n"COLOUR_RESET);
			sleep(2);
			clearPage();
		}

		else {
			printf("\x1b[1;31m              _________                   _______  \n");
	        printf("\x1b[1;33m    _-----____/   ========================|______| \n");
	        printf("\x1b[1;32m    |           ______________/                    \n");
	        printf("\x1b[1;34m    |    ___--_/(_)       ^                        \n");
	        printf("\x1b[1;35m    |___ ---                                       \n");
	        printf(GREEN"Get of this hAssist!\n");
	        printf(GREEN"This is kept private and access is only for the owner of this server\n"COLOUR_RESET);
	        sleep(3);
	        clearPage();
	        return 0;
		}
		
	}

	else {
		printf("\x1b[1;31m              _________                   _______  \n");
        printf("\x1b[1;33m    _-----____/   ========================|______| \n");
        printf("\x1b[1;32m    |           ______________/                    \n");
        printf("\x1b[1;34m    |    ___--_/(_)       ^                        \n");
        printf("\x1b[1;35m    |___ ---                                       \n");
        printf(GREEN"Get of this hAssist!\n");
        printf(GREEN"This is kept private and access is ONLY for the owner of this server\n"COLOUR_RESET);
        sleep(3);
	    clearPage();
        return 0;
	}

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
			printf(WHITE"\n["GREEN"+"WHITE"] "GREEN"PASSWORD DESTRUCTION PROCESS INITIATED\n"COLOUR_RESET);
			sleep(1);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"15 SECONDS TO COPY PASSWORD\n"COLOUR_RESET);
			sleep(5);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"10 SECONDS TO COPY PASSWORD\n"COLOUR_RESET);
			sleep(5);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"5 SECONDS TO COPY PASSWORD\n"COLOUR_RESET);
			sleep(5);
			printf(WHITE"["GREEN"+"WHITE"] "GREEN"TIME UP - PASSWORD DESTROYED\n"COLOUR_RESET);
			sleep(2);
			clearPage();
		}

		else {
			//
		}
	}

	clearPage();
	contributerList();

}

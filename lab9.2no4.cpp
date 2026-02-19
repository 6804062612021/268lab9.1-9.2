#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password (5 characters and at least 1 digit of number)\n"); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		printf("Accepted\n");
	}
	else{
		printf("Reject\n");
	}
}

int checkValidPass(char *ps) {
	int accepted=0,L,upper=0,digit=0,repeat=0,uplen=0;
	L = strlen(ps);
	int temp[L];
	for(int i=0;i<L;i++){
		if(isdigit(*(ps+i))) digit = digit+1;
	}
	if(L==5){
		if(digit>=1) accepted = 1;
	}
	return accepted;
}

int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}

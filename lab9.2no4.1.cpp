#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		//if Password is valid
		printf("Accepted\n");
	}
	else{
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
	int accepted=0;
	int len = strlen(ps);
	if (len != 5){
		return 0;
	}
	for(int i=0;i<len;i++){
		if( ps[i]>='0' && ps[i]<='9'){
			accepted = 1;
			break;
		}
	}	
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypa1"))
		return 1;
	else
		return 0;
}

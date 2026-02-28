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
	int acc=0;
	int len = strlen(ps);
	if (len<5||len>8){
		return 0;
	}
	if( ps[0]>='0' && ps[0]<='9'){
		return 0;
		}
		
	for(int i=0;i<len;i++){
		if( ps[i]>='0' && ps[i]<='9'){
			accepted ++;
		}
		if(ps[i]>='A' && ps[i]<='Z'){
			acc++;
		}
	}
	if(accepted >=2 && acc >= 2){
		return 1;
	}
	else{
		return 0;
	}
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "MYpa11"))
		return 1;
	else
		return 0;
}

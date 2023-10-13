#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>


int p1[15] = {64, 80, 64, 120, 48, 85, 48, 81, 122};


char password[100] = "TheWorldIsUpsideDown";

void exit(){
	printf("\n");
	printf("I hope you not dizzy reading this program. hehehe :)\n");
	printf("Bye Bye\n");
}
int p2[15] = {119, 75, 50, 77, 58, 92, 106, 54, 92, 50, 77, 92};

int decrypt(int a){
	a = a^3;
	return a;
}

void reverseString(char* str) {
    int i, j;
    int temp;
    int length = strlen(str);
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}


void display(){
	                                                                                                                                                                               
                 
printf("------------------------------------------------------------------------------------------------------------------------\n"); 
printf("|     ___________ ____  _______    ____________     ____  ______   ________  _______  ________    _______       __     |\n"); 
printf("|    / ____/ ___// __ \\/ ____/ |  / / ____/ __ \\   / __ \\/_  __/  / ____/  |/  / __ \\/ ____/ /   / ____/ |     / /     |\n"); 
printf("|   / __/  \\__ \\/ /_/ / __/  | | / / __/ / /_/ /  / / / / / /    / __/ / /|_/ / / / / /   / /   / __/  | | /| / /      |\n"); 
printf("|  / /___ ___/ / _, _/ /___  | |/ / /___/ _, _/  / /_/ / / /    / /___/ /  / / /_/ / /___/ /___/ /___  | |/ |/ /       |\n"); 
printf("| /_____//____/_/ |_/_____/  |___/_____/_/ |_|   \\____/ /_/    /_____/_/  /_/\\____/\\____/_____/_____/  |__/|__/        |\n"); 
printf("------------------------------------------------------------------------------------------------------------------------\n"); 
			                                                                                                                                                                                                                                                                                                                                                   
}



	
void menu(){
	printf("1. GALF\n");
	printf("2. TERCES\n");
	printf("3. TIXE\n");

};

void menu1(){
	printf("CSC{941F_3K4f}\n");
	printf("\n... eunitnoC ot retnE sserP\n");
	getchar();
};

int p3[15] = {113, 48, 85, 48, 113, 54, 48, 126};

int menu2(){
	char pass[100]={};
	printf("drowssaP >>> ");
	scanf("%s",&pass);
	reverseString(pass);
	return strcmp(password,pass);
};

const char* getString() {
    static char combinedString[30];
    for(int i=0;i<29;i++){
    	if(i<9){
    		combinedString[i] = decrypt(p1[i]);
		}
		else if(i>8 && i<21){
			combinedString[i] = decrypt(p2[i-9]);
		}
		else if(i>20){
			combinedString[i] = decrypt(p3[i-21]);
		}
	}
    //sprintf(combinedString, "%s%s%s", p1, p2, p3);
    return combinedString;
}

void print() {
    char string[30];
    const char* flag;

    strcpy(string, getString());
    reverseString(string);
    flag = string;

    printf("%s\n", flag);
    printf("\n... eunitnoC ot retnE sserP\n");
    getchar();
}

void puts(){
	printf("drowssaP gnorW\n");
	printf("\n... eunitnoC ot retnE sserP\n");
	getchar();
}

	
int main(){
	int select;
	do{
		system("cls");
		display();
		printf("\n");
		menu();
		printf("rebmuN uneM tceleS >>> ");
		scanf("%d",&select); getchar();
		switch(select){
			case 1 : menu1(); break;
			case 2 :
				int result = menu2();
				if(result == 0){
					print();
				}
				else puts();
				getchar();
				break;
		}
	}while (select !=3);
	
	exit();
	sleep(5);
	
	return 0;
}







#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning (disable : 4996)

const char * name = "laowang"; // char * 
const char * password = "123456"; 
void Login(){

	int count = 3;
	int time = 1;

	
	while(count > 0){
		char _name[32];
		char _password[32];

		//scanf("%s ", _name); 格式控制符后面加上空格，则需要在输入时输入空格来进行分隔。格式控制符后面不要随便加空格
		printf("Please Enter Your Name: ");
		scanf("%s",_name); 
		printf("Please Enter Your Passwd: ");
		scanf("%s",_password);
		// strcmp( string1,string2) 用于两个字符串之间的比较，如果相等，返回值为0；

		if (0 == strcmp(name, _name) && 0 == strcmp(password, _password)){

			printf("Login success!\n");
			break;

		}
		else{

			printf("Your enter is error !\n");
			count--;
				printf("You Have %d times!\n", count);

		
		}
		if (count <= 0){

			

			if ( time > 3){
				
				printf("Sorry ! You hava no chance !\n1");
				break;
					
			}
			
			int second = time * 3000;
			printf("Lock %d S, Wait...\n", time * 3);
			Sleep(second);
			count = 3; //重新将count赋为 3；
			time++;

		}

	}
}
int main()
{

	Login();
	system("pause");


	return 0;
}

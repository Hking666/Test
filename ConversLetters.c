#include<stdio.h>
#include<windows.h>

int main(){
	char c = 0;

	while ((c = getchar()) != EOF){  // 获取字符
			
		if (c >= 'a' && c <= 'z'){  //判断c 为小写字母
			c -=  ('a' - 'A');
				printf("%c\n", c);
		}
		else if(c >= 'A' && c <= 'Z'){//判断c 为大写字母
			c +=  + ('a' - 'A');
			printf("%c\n", c);
		}
		else{  //判断c不是字母
			;
		}
		
	
	}
	system("pause");
	return 0;
}

#include <stdio.h>
#include <windows.h> 
#pragma warning (disable : 4996) 

int Strlen(char * str){ 

    if( *str == '\0'){ 
    
        return 0; 
     } 
     
 return 1 + Strlen(str + 1);
     
}
  
int main( )
{ 

const char * str = "abcdef"; 

int len = Strlen( str ); 

printf("%d ", len); 
system("pause");


}

#include <stdio.h>
#include <windows.h> 
#pragma warning (disable : 4996) 
void PrintNumber(int x){ // x若大于个位， 
  
  if (x > 9){ PrintNumber(x / 10) ; // 自己调用自己到下一位 

  } 
// x为个位数 
printf("%d\n", x % 10); 

} 
int main( ) 
{ 
PrintNumber( 1234 ); 
system("pause"); 

}

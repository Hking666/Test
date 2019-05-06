#pragma warning(disable : 4996)
#include <stdio.h>
#include <windows.h >
int IsLeapYear( int year)
{

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;

	else
		return 0;
	


}
int main( )
{

	int year = 1000;
	

	for (; year <= 2000 ; year++ ){
	
		if (IsLeapYear(year) ){
		
			printf("%d \t", year);

		}
	}
	system("pause");
	return 0;
}

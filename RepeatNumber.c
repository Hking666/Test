#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	  #define INDEX 1001 // 数组元素个数
	  int index; // 随机数组下标
	  int i ; 
	  int repeatNumber = 0; // 重复数组元素
	  int arr[ INDEX] = { 0 };
	  srand( time ( 0 ) );
	  
	index = rand( ) % INDEX ; // 产生随机下标
	for( i = 0 ; i < INDEX ;i++){
	
	arr[ i ] = i + 1 ;
		
	}
	
	if( i = index){ 
	
	arr[ i ] = rand( ) % ( INDEX -1 )+1 ; // 产生随机数 赋给 随机下标数组单元
	
	}

	for( i = index +1 ; i < INDEX ; i++){

	 arr[i] = i;

	}
	 for( i = 0 ; i < INDEX ;i++){
	
	printf( "%d \t" , arr[ i ]);  
	
	}

	 for( i = 0 ; i < INDEX ;i++){
          
          repeatNumber = repeatNumber ^ i;  // 从0 开始 异或 INDEX-
          
          }
	
	 
	 for( i = 0 ; i < INDEX ;i++){	
	
	repeatNumber = repeatNumber ^ arr[ i ] ; // 异或数组元素，只剩下 repeatNumber
        }

	printf( "\n 该数值中的重复元素为 %d ",repeatNumber );
}

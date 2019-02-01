/*
用*输出符号c
****
*
*
**** 
*/ 

#include <stdio.h>//预处理器指令

int main(){//开始函数 
	char c='*';//使用字符类型存放* 
	printf("用*输出符号c：\n");
	printf("%c%c%c%c \n",c,c,c,c);
	printf("%c \n",c);
	printf("%c \n",c);
	printf("%c%c%c%c \n",c,c,c,c);
	return 0;
} 


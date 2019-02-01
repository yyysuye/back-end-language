/*
将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
2~90之间循环 判断90%i==0 
保存 i和90/i 
分别在2~i之间和2~90/i之间循环 再判断 
*/ 

#include <stdio.h>

int main(){
	int num,n;
	printf("请输入一个整数：");
	scanf("%d",&num);
	printf("%d=",num);
	for(int i=2;i<num;i++){
		while(num%i==0){
			printf("%d",i);
			num/=i;
			if(num!=1) printf("*");
		}
	} 
	printf("\n");
	return 0;
} 

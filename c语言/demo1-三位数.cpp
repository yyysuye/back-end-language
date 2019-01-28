#include <stdio.h> //预处理器指令 
#include <limits.h>
/*
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
三重循环，百位，十位，个位
互不相等 
*/
int main(){//主函数 程序开始 
	int count = 0;//定义计数器 
	for(int i =1;i<5;i++){ //第一层循环，数字1-4 
		
		for(int j=1;j<5;j++){ //第二层循环，数字仍旧1-4
		
			if(j==i){ //如果十位和百位相等，则跳过这一轮 
				continue;
			} 
			
			for(int k=1;k<5;k++){ //第三层循环，个位，数字1-4
			
				if(k==j||k==i){
					continue;
				} 
				
				printf("%d,%d,%d \n",i,j,k);//输出每一个 
				count+=1;//每遇到一次满足条件的三位数，自增1 
			}
		}
	} 
	printf("%d \n",count);//打印共满足条件的三位数个数 
	return 0;//终止函数，返回0 
} 

/*
判断101到200之间的素数
素数：质数，在大于1的自然数中，除了1和本身不具有其他因子 
*/ 
#include <stdio.h>//预处理器指令

int main(){
	int count=0,arr[100],flag=0; 
	for(int i=101;i<200;i++){
		flag=0;//判断 
		for(int j=2;j<i;j++){//循环判断是否可被2-i之间的数整除 
			if(i%j==0){
				flag=1;
			}
		}
		if(flag==0){	//如果不存在，则是素数 
			arr[count]=i;
			count+=1;
		}
	}
	printf("总数：%d\n",count);
	for(int k=0;k<count;k++){
		printf("%d\n",arr[k]);
	}
	return 0;
} 

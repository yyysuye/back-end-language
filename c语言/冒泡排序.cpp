/*
输入三个整数x,y,z，请把这三个数由小到大输出
解： 根据冒泡排序
将数放进数组中，
嵌套循环
每一轮取一个最大的数放到最后一个 
*/ 
#include <stdio.h>//预处理器指令

int main(){
	int x,y,z;//定义的三个整数 
	printf("输入三个整数：\n");
	scanf("%d%d%d",&x,&y,&z);//输入 
	int arr[]={x,y,z};//存放在数组中 
	int len=sizeof(arr)/sizeof(arr[0]);//求数组长度 
	for(int i=0;i<len;i++){//外层循环 
		int convert;
		for(int j=i+1;j<len;j++){//每个数依次和其他数相比较 
			if(arr[i]>arr[j]){//把最大的数换到最后 
				convert=arr[i];
				arr[i]=arr[j];
				arr[j]=convert;
			}
		}
	}
	printf("从小到大输出：\n");
	for(int k=0;k<len;k++){
		printf("%d\n",arr[k]);
	}
	return 0;
} 

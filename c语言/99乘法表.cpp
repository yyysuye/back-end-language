/*
输出9*9口诀
1*1
2*1 2*2
3*1 3*2 3*3
...
9*1 9*2 9*3 9*4 9*5 9*6 9*7 9*8 9*9
i=1 i<=9
j=1 j<=i 
*/
#include <stdio.h>

int main(){
	int i,j;//定义行和列 
	for(i=1;i<=9;i++){//行 
		for(j=1;j<=i;j++){//列 
			printf("%d * %d = %-3d ",i,j,i*j);//-3d表示左对齐，占3位 
		}
		printf("\n");
	}
	return 0;
} 

/*
��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5
2~90֮��ѭ�� �ж�90%i==0 
���� i��90/i 
�ֱ���2~i֮���2~90/i֮��ѭ�� ���ж� 
*/ 

#include <stdio.h>

int main(){
	int num,n;
	printf("������һ��������");
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

/*
�ж�101��200֮�������
�������������ڴ���1����Ȼ���У�����1�ͱ��������������� 
*/ 
#include <stdio.h>//Ԥ������ָ��

int main(){
	int count=0,arr[100],flag=0; 
	for(int i=101;i<200;i++){
		flag=0;//�ж� 
		for(int j=2;j<i;j++){//ѭ���ж��Ƿ�ɱ�2-i֮��������� 
			if(i%j==0){
				flag=1;
			}
		}
		if(flag==0){	//��������ڣ��������� 
			arr[count]=i;
			count+=1;
		}
	}
	printf("������%d\n",count);
	for(int k=0;k<count;k++){
		printf("%d\n",arr[k]);
	}
	return 0;
} 

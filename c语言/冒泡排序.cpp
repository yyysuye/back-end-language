/*
������������x,y,z���������������С�������
�⣺ ����ð������
�����Ž������У�
Ƕ��ѭ��
ÿһ��ȡһ���������ŵ����һ�� 
*/ 
#include <stdio.h>//Ԥ������ָ��

int main(){
	int x,y,z;//������������� 
	printf("��������������\n");
	scanf("%d%d%d",&x,&y,&z);//���� 
	int arr[]={x,y,z};//����������� 
	int len=sizeof(arr)/sizeof(arr[0]);//�����鳤�� 
	for(int i=0;i<len;i++){//���ѭ�� 
		int convert;
		for(int j=i+1;j<len;j++){//ÿ�������κ���������Ƚ� 
			if(arr[i]>arr[j]){//��������������� 
				convert=arr[i];
				arr[i]=arr[j];
				arr[j]=convert;
			}
		}
	}
	printf("��С���������\n");
	for(int k=0;k<len;k++){
		printf("%d\n",arr[k]);
	}
	return 0;
} 

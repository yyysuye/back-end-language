/*
����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
���磺2019 5 29 
�ȼ��ϵ�ǰ��֮ǰ������ �·� > 1 
�ж��Ƿ�Ϊ����
���Ϊ���꣬2�¼�һ�� 
�ټ��ϵ��µ����� 
*/
#include <stdio.h>//Ԥ������ָ������������ͷ�ļ� 

int main(){//��ʼ���� 
	int year,month,day;//�����꣬�£��� 
	int date;//�������� 
	printf("����������:(��ʽΪ��/��/��)\n"); 
	scanf("%d/%d/%d",&year,&month,&day);//������/��/�� 
	//year month day
	switch(month-1){//���㵱��֮ǰ���� 
		case 11://12��֮ǰ���Դ����� 
			date+=30;
		case 10:
			date+=31;
		case 9:
			date+=30;
		case 8:
			date+=31;
		case 7:
			date+=31;
		case 6:
			date+=30;
		case 5:
			date+=31;
		case 4:
			date+=30;
		case 3:
			date+=31;
		case 2:
			if(year/400==0||year/4==0&&year/100!=0){//�ж��Ƿ������� ��ͨ����Ϊ�ܱ�4���������ܱ�100��������������Ϊ�ܱ�400���� 
				date+=29;
			}else{
				date+=28;
			}
		case 1:
			date+=31;
			break;
		default:
			printf("�����ʽ����"); 
			break;
	}
	date+=day;//�����ϵ������� 
	printf("\n%d��ĵ�%d��",year,date); //��� 
	return 0;
} 

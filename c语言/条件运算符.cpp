/*
���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ
*/

#include <stdio.h>

int main() {
	int score;
	char grade;
	char a;
	printf("������ɼ�:");
	scanf("%d",&score);
	grade = (score>=90) ? 'A' : ((score>=60) ? 'B' : 'C' );
	printf("�ȼ���%c",grade);
	return 0;
}

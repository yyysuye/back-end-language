/*
输入某年某月某日，判断这一天是这一年的第几天？
例如：2019 5 29 
先加上当前月之前的天数 月份 > 1 
判断是否为闰年
如果为闰年，2月加一天 
再加上当月的天数 
*/
#include <stdio.h>//预处理器指令，引入输入输出头文件 

int main(){//起始函数 
	int year,month,day;//定义年，月，日 
	int date;//定义天数 
	printf("请输入日期:(格式为年/月/日)\n"); 
	scanf("%d/%d/%d",&year,&month,&day);//输入年/月/日 
	//year month day
	switch(month-1){//计算当月之前天数 
		case 11://12月之前，以此类推 
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
			if(year/400==0||year/4==0&&year/100!=0){//判断是否是闰年 普通闰年为能被4整除但不能被100整除，世纪闰年为能被400整除 
				date+=29;
			}else{
				date+=28;
			}
		case 1:
			date+=31;
			break;
		default:
			printf("输入格式有误！"); 
			break;
	}
	date+=day;//最后加上当月天数 
	printf("\n%d年的第%d天",year,date); //输出 
	return 0;
} 

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int guesstable() {
	printf("*****************************\n");
	printf("*****1.开始      2.退出*******\n");
	printf("*****************************\n");
	printf("***猜数字游戏，数字在1-100***\n");
	printf("*****************************\n");
}
void game() {
	//生成一个随机数
	int num = 0;
	int i=rand()%100;

	while (1) {
		scanf("%d", &num);
		if (num > i) {
			printf("数字猜大了\n");
			
		}
		else if (num < i)
		{
			printf("数字猜小了\n");
			

		}else 
		{
			printf("恭喜你猜中了，这个数字为%d\n", i);
			break;
		}
	}
}
int main() {
srand((unsigned int)time(NULL));//利用时间戳传入随机数，使得随机数一直变化

	//电脑产生一个随机数（1-100）
	guesstable();
	int input = 0;
	printf("请选择：:>\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("开始游戏，系统已经产生一个数字请猜猜看\n");
		game();
		printf("是否再来一次");
		break;
	case 2:
		printf("已结束再见:>\n");
		break;
	}
	while (input == 2) {
		return 0;
	}
	return 0;
	





	//模拟用户登录场景，并且只能输入三次，如果超出三次则无法登录系统退出，正确则提示登录成功

	//char enter[] = { ""};
	//int i = 0;
	//while (i < 3) {
	//	printf("请输入你的密码");
	//	scanf("%s", &enter);
	//	if (strcmp(enter, "xlc021025") == 0) {
	//		//比较俩个字符串是否相等，应该使用库函数strcmp(string compare) 引入string.h
	//		printf("登录成功");
	//		break;
	//	}
	//	else
	//	{
	//		printf("密码错误请重新输入\n");
	//		char enter[] = { ""};
	//		i++;


	//	}
	//	if (i == 3) { printf("三次机会已经用完，请稍后再试"); }
	//	
	//}
	//		
	//		return 0;
}


	
	////演示多个字符从两端移动，向中间汇聚
	//char arr1[] = { "welcome to school" };
	//char arr2[] = { "#################" };
	//int ar1 = 0;
	//int ar2 = strlen(arr2)-1;
	//while (ar1 <= ar2) {
	//	arr2[ar1] = arr1[ar1];
	//	arr2[ar2] = arr1[ar2];
	//	printf("%s\n", arr2);
	//	Sleep(1000);//休眠1秒添加库函数Windows.h
	//	//清空屏幕
	//	system("cls");//添加库函数stdlib.h
	//	ar1++;
	//	ar2--;
	//  /*w###############l
	//	we#############ol
	//	wel###########ool
	//	welc#########hool
	//	welco#######chool
	//	welcom#####school
	//	welcome### school
	//	welcome #o school
	//	welcome to school*/
	//	}
	



	//for (;;) {//for循环判断部分省略判断会恒成立
	//	printf("hehe\n");
	//}
	
	/*do
	{
		i++;
		if (i==5)
		{
			continue;
		}
		printf("%d\n", i);

	} while (i<=10);*/

	//计算i的阶乘
	/*int i = 1;
	int j = 0;
	int sum = 1;
	scanf("%d", &j);
	for ( i = 1; i <= j; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	int o = pow(12, 3);
	printf("%d\n", o);
	return 0;*/



	//计算1！+2！+3！+...+10!
	/*int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for ( n = 1; n <=10; n++)
	{
		for (i = 1;i <= n;i++) {
			
			ret *= i;

		}
		sum = sum + ret;
		ret = 1;
	}
	printf("%d\n", sum);*/

	//int s = 0;
	//scanf("%d", &s);
	//int sum1 = jisuan(s);
	//printf("%d", sum1);


	//利用二分法查找顺序数组,并返回下标
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int count = 8;
	
	int c = 0;
	int v = sizeof(arr) / sizeof(arr[0]);
	while (c<=v) {
		int mid = c+(v-c)/2;
		if (arr[mid] > count) {
			v = mid - 1;
		}
		else if (arr[mid] < count) {
			c = mid + 1;
		}
		else
		{
			printf("找到目标数字下标是%d", mid);
			break;
		}
		 if (c>v) {
			printf("数组中没有这个数字");
		}
	}*/
	
	
//	return 0;
//}





//计算1！+2！+3！+...+n!
//int jisuan(int a) {
//	int i = 0;
//	int j = 0;
//	int ji = 1;
//	int sum = 0;
//	for ( i = 1; i <=a; i++)
//	{
//		for (j = 1;j <= i;j++) {
//			ji = ji * j;
//		}
//		sum = sum + ji;
//		ji = 1;
//	}
//	return sum;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int guesstable() {
	printf("*****************************\n");
	printf("*****1.��ʼ      2.�˳�*******\n");
	printf("*****************************\n");
	printf("***��������Ϸ��������1-100***\n");
	printf("*****************************\n");
}
void game() {
	//����һ�������
	int num = 0;
	int i=rand()%100;

	while (1) {
		scanf("%d", &num);
		if (num > i) {
			printf("���ֲ´���\n");
			
		}
		else if (num < i)
		{
			printf("���ֲ�С��\n");
			

		}else 
		{
			printf("��ϲ������ˣ��������Ϊ%d\n", i);
			break;
		}
	}
}
int main() {
srand((unsigned int)time(NULL));//����ʱ��������������ʹ�������һֱ�仯

	//���Բ���һ���������1-100��
	guesstable();
	int input = 0;
	printf("��ѡ��:>\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("��ʼ��Ϸ��ϵͳ�Ѿ�����һ��������²¿�\n");
		game();
		printf("�Ƿ�����һ��");
		break;
	case 2:
		printf("�ѽ����ټ�:>\n");
		break;
	}
	while (input == 2) {
		return 0;
	}
	return 0;
	





	//ģ���û���¼����������ֻ���������Σ���������������޷���¼ϵͳ�˳�����ȷ����ʾ��¼�ɹ�

	//char enter[] = { ""};
	//int i = 0;
	//while (i < 3) {
	//	printf("�������������");
	//	scanf("%s", &enter);
	//	if (strcmp(enter, "xlc021025") == 0) {
	//		//�Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯��strcmp(string compare) ����string.h
	//		printf("��¼�ɹ�");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�����������������\n");
	//		char enter[] = { ""};
	//		i++;


	//	}
	//	if (i == 3) { printf("���λ����Ѿ����꣬���Ժ�����"); }
	//	
	//}
	//		
	//		return 0;
}


	
	////��ʾ����ַ��������ƶ������м���
	//char arr1[] = { "welcome to school" };
	//char arr2[] = { "#################" };
	//int ar1 = 0;
	//int ar2 = strlen(arr2)-1;
	//while (ar1 <= ar2) {
	//	arr2[ar1] = arr1[ar1];
	//	arr2[ar2] = arr1[ar2];
	//	printf("%s\n", arr2);
	//	Sleep(1000);//����1����ӿ⺯��Windows.h
	//	//�����Ļ
	//	system("cls");//��ӿ⺯��stdlib.h
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
	



	//for (;;) {//forѭ���жϲ���ʡ���жϻ�����
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

	//����i�Ľ׳�
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



	//����1��+2��+3��+...+10!
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


	//���ö��ַ�����˳������,�������±�
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
			printf("�ҵ�Ŀ�������±���%d", mid);
			break;
		}
		 if (c>v) {
			printf("������û���������");
		}
	}*/
	
	
//	return 0;
//}





//����1��+2��+3��+...+n!
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
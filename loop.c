#include<stdio.h>

int main_loop(void)
{	
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");
	//printf("Hello World\n");

	// ** �Ի�
	//int a = 10;
	//printf("a�� %d\n", a);
	//a++;
	//printf("a�� %d\n", a);
	//a++;
	//printf("a�� %d\n", a);

	// ++b => b = b + 1
	//int b = 20;
	//printf("b�� %d\n", ++b); // ++�� ���� �տ� �ִ� ��쿡�� ++�� ���� �ϰ� �����
	//printf("b�� %d\n", b++); // ++�� ���� �ڿ� �ִ� ��쿡�� ������ �����ϰ� ���� ���� ���忡 ++�� ������
	//printf("b�� %d\n", b);
	
	//int i = 1;
	//printf("Hello World %d\n", i++); // 1
	//printf("Hello World %d\n", i++); // 2
	//printf("Hello World %d\n", i++); // 3
	//printf("Hello World %d\n", i++); // 4
	//printf("Hello World %d\n", i++); // 5
	//printf("Hello World %d\n", i++); // 6
	//printf("Hello World %d\n", i++); // 7
	//printf("Hello World %d\n", i++); // 8
	//printf("Hello World %d\n", i++); // 9
	//printf("Hello World %d\n", i++); // 10

	// �ݺ���
	// for, while, do while

	// for (����; ����; ����) { }
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World %d\n", i);
	//}

	// while (����) { }
	//int i = 0;
	//while (i <= 9)
	//{
	//	printf("Hello World %d\n", i, i++);
	//}

	// do { } while (����);
	//int i = 0;
	//do {
	//	printf("Hello World %d\n", i, i++);
	//} while (i < 10);

	// 2�� �ݺ���
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("ù ��° �ݺ��� : %d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//	printf("       �� ��° �ݺ��� : %d\n", j);
	//	}
	//}

	// ������
	// 2 X 1 = 2
	// 2 X 2 = 4
	// 2 X 3 = 6
	// 2 X 4 = 8
	//
	// 9 X 9 = 81
	//for (int i = 2; i <= 9; i++)
	//{	
	//	printf("%d�� ���\n", i);
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf(" %d X %d = %d\n", i, j, i * j);
	//	}
	//}
	

	// ���� �ݺ���

	/*
	*
	**
	***
	****
	*****
	*/

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	// ���� �ݺ��� (�Ųٷ�)

	/*
	SSSS*
	SSS**
	SS***
	S****
	*****
	*/

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i; j < 5 - 1; j++)
	//	{
	//		printf(" "); // S�� ����� ��ü
	//	}
	//	for (int k = 0; k <= i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// �Ƕ�̵带 �׾ƶ� - ������Ʈ
	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/

	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
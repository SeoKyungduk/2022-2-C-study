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

	// ** 뿔뿔
	//int a = 10;
	//printf("a는 %d\n", a);
	//a++;
	//printf("a는 %d\n", a);
	//a++;
	//printf("a는 %d\n", a);

	// ++b => b = b + 1
	//int b = 20;
	//printf("b는 %d\n", ++b); // ++이 문자 앞에 있는 경우에는 ++을 먼저 하고 출력함
	//printf("b는 %d\n", b++); // ++이 문장 뒤에 있는 경우에는 문장을 실행하고 나서 다음 문장에 ++을 실행함
	//printf("b는 %d\n", b);
	
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

	// 반복문
	// for, while, do while

	// for (선언; 조건; 증감) { }
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World %d\n", i);
	//}

	// while (조건) { }
	//int i = 0;
	//while (i <= 9)
	//{
	//	printf("Hello World %d\n", i, i++);
	//}

	// do { } while (조건);
	//int i = 0;
	//do {
	//	printf("Hello World %d\n", i, i++);
	//} while (i < 10);

	// 2중 반복문
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫 번째 반복문 : %d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//	printf("       두 번째 반복문 : %d\n", j);
	//	}
	//}

	// 구구단
	// 2 X 1 = 2
	// 2 X 2 = 4
	// 2 X 3 = 6
	// 2 X 4 = 8
	//
	// 9 X 9 = 81
	//for (int i = 2; i <= 9; i++)
	//{	
	//	printf("%d단 계산\n", i);
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf(" %d X %d = %d\n", i, j, i * j);
	//	}
	//}
	

	// 이중 반복문

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
	
	// 이중 반복문 (거꾸로)

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
	//		printf(" "); // S를 띄어쓰기로 대체
	//	}
	//	for (int k = 0; k <= i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// 피라미드를 쌓아라 - 프로젝트
	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/

	int floor;
	printf("몇 층으로 쌓겠느냐?");
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
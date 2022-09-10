#include<stdio.h>
#include<time.h>

int main_condition(void)
{
	// 버스를 탄다고 가정 : 학생 / 일반인으로 구분 (일반인 : 20세)
	//int age = 25;
	//// if (조건) { } else { }
	//if (age >= 20) // if는 조건문
	//{ 
	//	printf("일반인입니다.\n");
	//}
	//else
	//{
	//	printf("학생입니다.\n");
	//}

	// 초등학생 (8 ~ 13) / 중학생 (14 ~ 16) / 고등학생 (17 ~ 19)
	// if / else if / else
	//int age = 25;
	//if (age >= 8 && age <= 13) // &&는 앞 조건과 뒤 조건 모두를 만족할 때 사용
	//{
	//	printf("초등학생입니다.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생입니다.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생입니다.\n");
	//}
	//else
	//{
	//	printf("어른입니다.\n");
	//}
	//printf("\n");

	// break / continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6)
	//	{
	//		printf("나머지 학생은 집에 가세요.\n");
	//		break; // break는 조건에 만족하면 출력되는 문장을 탈출함
	//	}
	//	printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	//}

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번은 제외하고 6번부터 10번까지 조별 발표를 하세요
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d번 학생은 결석입니다.\n", i);
	//			continue; // continue는 break와 다르게 문장이 계속 진행됨.
	//		}
	//		printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
	//	}

	//}

	// and or -> && || -> and: 앞의 조건과 뒤의 조건이 모두 동일 / or: 앞의 조건 혹은 뒤의 조건이 동일
	//int a = 10;
	//int b = 11;
	//int c = 13;
	//int d = 13;

	//if (a == b || c == d)
	//{
	//	printf("a와 b 혹은 c와 d의 값이 같습니다.\n");
	//}
	//else
	//{
	//	printf("값이 서로 다르네요.\n");
	//}

	// 가위0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("몰라요~");
	//}

	//srand(time(NULL));
	//// int i = rand() % 3; // 0 ~ 2 반환
	//int i = 1;
	//switch (i) // 스위치의 경우 일정 시작 값부터 끝까지 다 출력됨. 만약 중간에 그만두고 싶으면 break를 통해 중지시킬 수 있음.
	//{
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n"); break;
	//}

	// 초등학생 (8 ~ 13) / 중학생 (14 ~ 16) / 고등학생 (17 ~ 19)
	// if / else if / else
	//int age = 15;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13:printf("초등학생입니다.\n"); break;
	//case 14:
	//case 15:
	//case 16:printf("중학생입니다.\n"); break;
	//case 17:
	//case 18:
	//case 19:printf("고등학생입니다.\n"); break;
	//default: printf("어른입니다.\n"); break;
	//}

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) // 1 : 참, 0 : 거짓
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓");
		}
		else if (answer < num)
		{
			printf("UP ↑");
		}
		else if (answer == num)
		{
			printf("정답입니다!! \n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요.");
		}

		if (chance == 0)
		{
			printf("\n모든 기회를 다 사용하셨네요. 아쉽게 실패하셨습니다.");
			break;
		}
	}

	return 0;
}
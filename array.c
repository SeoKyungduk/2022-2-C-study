#include<stdio.h>

int main_array(void)
{
	// 배열
	//int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다
	//int subway_2 = 40;
	//int subway_3 = 50;


	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_2);
	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_3);

	// 여러 개의 변수를 함께, 동시에 생성
	//int subway_array[3]; // [0][1][2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d 호차에 %d 명이 타고 있습니다.\n", i + 1, subway_array[i]);
	//}

	// 값 설정 방법
 	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	// 값은 초기화를 반드시 해야 함
	//int arr[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	// 배열 크기는 항상 상수로 선언
	//int size = 10;
	//int arr[10];

	//int arr[10] = { 1, 2 }; // 3번째 값부터는 자동으로 0으로 초기화
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	// int arr[] = { 1, 2 }; // arr[2]

	//float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%.2f\n", arr_f[i]);
	//}

	// 문자 VS 문자열
	//char c = 'A';
	//printf("%c\n", c);

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함
	// char str[6] = "coding"; // [c][o][d][i][n][g][\0]
	//char str[7] = "coding"; // => 7 문자를 출력하는데 마지막은 '\0'이 들어감
	//printf("%s\n", str);

	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str)); // coding이라는 것은 6문자이지만, 마지막 NULL 문자가 들어가기 때문에 7글자 값이 출력됨

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	char kor[] = "나도코딩"; // => 4글자인데, 한 글자가 2byte이므로 2*4 + 1 = 9가 출력됨
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// 영어 한 글자 : 1byte
	// 한글 한 글자 : 2byte
	// 한 글
	// En gl ish
	// char 크기 : 1byte

	// char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	//char c_array[6] = { 'c', 'o', 'd', 'i', 'n', 'g'};
	//printf("%s\n", c_array);

	char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	/*printf("%s\n", c_array);*/
	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%c\n", c_array[i]);
	//}

	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%d\n", c_array[i]); // 아스키코드값이 출력 (NULL 문자는 0으로 입력됨)
	//}

	// 문자열 입력받기 : 경찰서 조서 쓰기 예제

	//char name[256]; // 최대 256 글자를 입력 받음
	//printf("이름이 뭐에요? ");
	//scanf_s("%s", name, sizeof(name));
	//printf("%s\n", name);

	// 참고 : 아스키코드? => ANSI(미국표준협회)에서 제시한 표준 코드 제시
	// 7bit로 표시 가능. 128개의 코드를 갖고 있음 (0 ~ 127)
	// a : 97 (문자 a의 아스키코드 정수값)
	// A : 65
	// 0 : 48

	printf("%c\n", 'a');
	printf("%d\n", 'a'); // => 아스키코드에 따라 'a' 값이 97이 나옴.

	printf("%c\n", 'b');
	printf("%d\n", 'b'); // => 아스키코드에 따라 'b' 값이 98이 나옴.

	printf("%c\n", 'A');
	printf("%d\n", 'A'); // => 아스키코드에 따라 'A' 값이 65가 나옴.

	printf("%c\n", '\0');
	printf("%d\n", '\0'); // => 아스키코드에 따라 '\n' 값이 0이 나옴.

	printf("%c\n", '0');
	printf("%d\n", '0');  // => 아스키코드에 따라 '0' 값이 48이 나옴.

	printf("%c\n", '1');
	printf("%d\n", '1'); // => 아스키코드에 따라 '1' 값이 49이 나옴.

	// 참고2 0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 값 %d : %c\n", i, i);
	}

	return 0;
}
#include<stdio.h>

int main_printfscanf(void)
{	
	// 정수형 변수에 대한 예제
	//int age = 12; // int = 정수형
	//printf("%d\n", age); // %d는 정수형 값을 출력하라는 의미
	//age = 13; // 처음에 int를 통해 정수형 값을 넣었기 때문에 굳이 int를 넣지 않아도 됨
	//printf("%d\n", age);

	//printf("1\n");
	///*printf("\n");*/ // -> 주석 입력을 통해 코드가 skip됨
	//printf("3\n");

	//// 실수형 변수에 대한 예제
	//float f = 46.5; // float = 실수형
	//printf("%1.f\n", f); // %f는 실수형 값을 출력하라는 의. f 앞에 1.을 붙이면서 소숫점 한 자리에서 끊음
	//double d = 4.428;
	//printf("%.2lf\n", d); // double를 사용할 때는 f 앞에 l을 붙이고 앞에서와 마찬가지로 l 앞에 .과 숫자를 붙여서 소숫점을 끊을 수 있음
	//
	//// 상수
	//const int YEAR = 2000; // int 앞에 const를 붙이면서 상수로 만들어 값을 변할 수 없게 함
	//printf("태어난 년도 : %d\n", YEAR);
	//// YEAR = 2001; // 상수기익 때문에 2000에서 2001로 바꾸려고 하면 오류가 발생함

	//// printf
	//// 연산
	//int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);
	//printf("%d * %d = %d\n", 3, 7, 3 * 7);

	// scanf -> 어떤 값을 사용자로부터 입력받아서 집어 넣고 싶을때 사용
	// 키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input); // &는 input이라는 변수가 정의된 곳에 값을 입력받겠다는 의미
	//printf("입력값 : %d\n", input);

	//int one, two, three;
	//printf("3개의 정수를 입력하세요 : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("첫 번째 값 : %d\n", one);
	//printf("두 번째 값 : %d\n", two);
	//printf("세 번째 값 : %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	//char c = 'A'; // 문자를 출력하기 위해 char을 사용함
	//printf("%c\n", c); // 문자를 출력하기 위해 %c를 사용함

	// 문자열
	//char str[256]; // 문자 256개를 나타냄
	//scanf_s("%s", str, sizeof(str)); // 문자열을 나타내기 위해서는 %s를 입력함
	//printf("%s\n", str);

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 범죄명?
	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n --- 범죄자 정보 --- \n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄 : %s\n", what);

	return 0;
}

// 주석을 통해 코드 문장을 무시 가능
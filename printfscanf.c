#include<stdio.h>

int main_printfscanf(void)
{	
	// ������ ������ ���� ����
	//int age = 12; // int = ������
	//printf("%d\n", age); // %d�� ������ ���� ����϶�� �ǹ�
	//age = 13; // ó���� int�� ���� ������ ���� �־��� ������ ���� int�� ���� �ʾƵ� ��
	//printf("%d\n", age);

	//printf("1\n");
	///*printf("\n");*/ // -> �ּ� �Է��� ���� �ڵ尡 skip��
	//printf("3\n");

	//// �Ǽ��� ������ ���� ����
	//float f = 46.5; // float = �Ǽ���
	//printf("%1.f\n", f); // %f�� �Ǽ��� ���� ����϶�� ��. f �տ� 1.�� ���̸鼭 �Ҽ��� �� �ڸ����� ����
	//double d = 4.428;
	//printf("%.2lf\n", d); // double�� ����� ���� f �տ� l�� ���̰� �տ����� ���������� l �տ� .�� ���ڸ� �ٿ��� �Ҽ����� ���� �� ����
	//
	//// ���
	//const int YEAR = 2000; // int �տ� const�� ���̸鼭 ����� ����� ���� ���� �� ���� ��
	//printf("�¾ �⵵ : %d\n", YEAR);
	//// YEAR = 2001; // ������� ������ 2000���� 2001�� �ٲٷ��� �ϸ� ������ �߻���

	//// printf
	//// ����
	//int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);
	//printf("%d * %d = %d\n", 3, 7, 3 * 7);

	// scanf -> � ���� ����ڷκ��� �Է¹޾Ƽ� ���� �ְ� ������ ���
	// Ű���� �Է��� �޾Ƽ� ����
	//int input;
	//printf("���� �Է��ϼ��� : ");
	//scanf_s("%d", &input); // &�� input�̶�� ������ ���ǵ� ���� ���� �Է¹ްڴٴ� �ǹ�
	//printf("�Է°� : %d\n", input);

	//int one, two, three;
	//printf("3���� ������ �Է��ϼ��� : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("ù ��° �� : %d\n", one);
	//printf("�� ��° �� : %d\n", two);
	//printf("�� ��° �� : %d\n", three);

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	//char c = 'A'; // ���ڸ� ����ϱ� ���� char�� �����
	//printf("%c\n", c); // ���ڸ� ����ϱ� ���� %c�� �����

	// ���ڿ�
	//char str[256]; // ���� 256���� ��Ÿ��
	//scanf_s("%s", str, sizeof(str)); // ���ڿ��� ��Ÿ���� ���ؼ��� %s�� �Է���
	//printf("%s\n", str);

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? ���˸�?
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg �̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿���? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	// ���� ���� ���
	printf("\n\n --- ������ ���� --- \n\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %.2f\n", weight);
	printf("Ű : %.2lf\n", height);
	printf("���� : %s\n", what);

	return 0;
}

// �ּ��� ���� �ڵ� ������ ���� ����
// ��� ȸ��� ��� �����ý����� �ִ�.
// �� ������� �ý����� �����ڿ� ���� ����� �Է¹޾� ����� �� ������
// ����� ���� �����ȣ, �̸�, ����, ���� �̶�� �Ӽ��� ���� �ִ�.
// �����ڴ� ������� �ѹ��� �� �� �ְ�
// �����ڿ� ���� ����� �߰��� �� ������ ����� ���� �����ڿ� ���� ������ �� �ִ�.
// ������ �����ȣ�� �Է¹޾� ���ó���� �� �� �ִ�
// �����ȣ�� �ý��ۿ� ���� �ڵ����� �����Ǹ� �����ȣ�� �����Ǵ� ����� �����Ӱ� ������ �� �ִ� (100��)

#include "���.h"

int main() {

	Employee* employee[100]; // ����� ������ ���� 100��
	int count = 0; // ������ ��� ���� ����

	// ��� ����
	// ��� ���
	// ��� ����
	// ���α׷� ����


	// ���� ������ �ϳ� ����, �� �� �ʿ��� ��ɾ �Է��ϴ� ĭ, ��ɾ �°� ����� ����.
	while (true) {
		printf("��ɾ �Է����ּ���\n");
		printf("1. �������\n");
		printf("2. ������\n");
		printf("3. �������\n");
		printf("4. ���α׷�����\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			printf("== ��ü ��� ���� ==\n");
			for (int i = 0; i < count; i++) { // ������ ä�����ִ��� �𸣴ϱ� count�� ���
				employee[i]->printInfo();
			}
			
		}
		else if (input == 2) {
			printf("== ��� ��� ==\n");

			char* name = getString("������� �Է����ּ��� : ");
			int gender = getInt("������ �Է����ּ��� : ");
			char* rank = getString("������ �Է����ּ��� : ");

			Employee* e = new Employee(name, gender, rank);
			
		}
		else if (input == 3) {
			printf("== ��� ���� ==\n");
			
		}
		else if (input == 4) {
			printf("== ���α׷� ���� ==\n");
			break;
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) { // ����ڿ��� ���ڸ� �Է¹޴´�.
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input); // input�� �ܼ����� ���� �Ŵϱ� �ּҰ� �־����.
	return input;
} // �Է� ���� �������� ����

char* getString(const char* prompt) { // ����ڿ��� ���忭�� �Է¹޴´�.
	/*char input[100];*/ // �迭�� �ּҸ� �����ϰ� �������� �迭�� ������Ƿ� �����Ҵ��� �ؾ��Ѵ�.
	char* input = new char[100]; // �����Ҵ� // �� ������ ����Ƿ� ���� ���� ������ ������ �ʴ´�.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s",input); // 99��(�������� �ι��ڰ� ���;��ϴϱ�)�� ���ڸ� �޾Ƽ� String���� input�� ���� // input�� �迭�� ù��° �ּҸ� ����Ű�� �Ŵϱ� input �տ� &����.
	return input;
} // �Է� ���� ������ ����
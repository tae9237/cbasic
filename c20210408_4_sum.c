#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������
//int sum;

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ�
//int ssum(int a) {
//	//static
//	//�Լ��� ���ʷ� ������� �� ����, ���α׷� ����� �Ҹ�
//	//����� �Լ��ȿ����� ���ٰ���
//	static int sum = 0;
//	sum += a;
//	return sum;
//}

//�Ű�����:����
//���ϰ�:���Լ��� ������ Ƚ��
//�Լ��̸�:countTest
int countTest(){
	static int cnt=0;
	cnt++;
	return cnt;
}
int main() {
	//��������,�������� ��뿹
	//printf("����:%d\n",ssum(10));
	//printf("����:%d\n", ssum(20));

	//�ݺ����� �̿��ؼ� �Լ��� 10�� ����
	for (int i = 0; i < 10; i++) {
		printf("%d\n",countTest());
	}


	return 0;


}
/* 2���� �迭 �ǽ�
* ����ڷκ��� 2���� �л��� ����
* �׸��� �л� ������ 3���� ������ �Է� �޾Ƽ� ������ ����� ���ϴ� ���α׷� ����
*/

#include<iostream>
#include<string>
#define ROW 2
#define COL 3
using namespace std;

//int main()
//{
//	string name = " ";					// �̸�
//	int row = 0, col = 0, total = 0, i = 0, num = 0, count = 0;
//	int students[ROW][COL] = { 0 };		// �л� ���� ����
//	double avg = 0.0;
//
//	// �л� 2�� ���� �ݺ� ����. �ܺ� ����
//	for (int(&cnt)[COL] : students)
//	{
//		cout << " *** �л� " << num + 1 << ". �� ����� 3���� ������ �Է�" << endl;
//
//		// �л� ������ �޴� �ڵ�
//		cout << num + 1 << " .���� : ";
//		cin >> name;
//
//		// ���� �������� 3���� ������ �Է� �޴� �ڵ�
//		// �����ڸ� ���Ͽ� 2���� �迭 ����� ���� ����
//		for (int& j : students[i++])
//		{
//			cout << "���� " << ++count << "�� ���� : ";
//			cin >> j;
//		}
//
//		count = 0;
//		cout << endl;
//
//		// ����
//		i = 0;
//		for (int j : students[i])
//		{
//			total += j;
//		}
//
//		// ���
//		avg = (double)total / COL;
//
//		// 1�� ���� ����, ����, ��� ���
//		cout << name << "�� ���� ��Ȳ" << endl;
//		cout << "���� : " << total << endl;
//
//		cout << fixed;
//		cout.precision(2);
//		cout << "��� : " << avg << endl << endl;
//
//		// ���� ������ �ʱ�ȭ
//		total = 0;
//		num++;
//	}
//	cout << "��ü " << ROW << "���� ���� ó�� �� ���α׷� ����" << endl;
//
//
//	return 0;
//}
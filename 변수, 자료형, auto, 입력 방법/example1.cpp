#include<iostream>
#include <string>

using namespace std;

int main()
{
	// ������ �ۼ�
	int age = 0;
	// ������ ����ȭ �� �ְ��� ��� (C++ 11)
	int i{ 100 };				// int i = 100;

	short b = 0;
	// �ڷ����� ũ�� (sizeof(������ Ÿ��, ������))
	// to_string(����) : ���� ���� ���ڿ� Ÿ������ ��������ִ� string ������Ͽ� �����ϴ� �޼ҵ�
	cout << "short�� �ڷ����� ����Ʈ ũ��" + to_string(sizeof(short)) << endl;
	cout << "int�� �ڷ����� ����Ʈ ũ��" + to_string(sizeof(int)) << endl;
	cout << "long  �� �ڷ����� ����Ʈ ũ��" + to_string(sizeof(long)) << endl;
	cout << "long long�� �ڷ����� ����Ʈ ũ��" + to_string(sizeof(long long)) << endl;
	cout << "bool�� �ڷ����� ����Ʈ ũ��" + to_string(sizeof(bool)) << endl;
}
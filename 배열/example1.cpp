/* �迭 �ǽ�
* �迭�� ���� ������ Ÿ���� ���� ���� �����͸� ó���ϱ� ���� �ڷᱸ��
* �迭�� ���ӵ� �޸� ���� (STACK)�� �Ҵ� �޴´�
*
*  �迭�� �����ϴ� ������� : ������ Ÿ��, �迭�� (�ּ�), ũ�� (0�� �ʰ� �ϴ� ��)
*/

#include <iostream>
using namespace std;
/*
int main()
{
	// ������ �迭
	char char_name[10] = { "ABCDEFGHI" };			// 1* 10 = 10 ����Ʈ

	// short �� �迭
	short short_name[10] = { 0,1,2,3,4,5,6,7,8,9 };			// 20 ����Ʈ

	// int�� �迭
	int int_name[10] = { 0,1,2,3,4,5,6,7,8,9 };			// 40 ����Ʈ

	cout << "�迭�� ���� �ּ� : " << &char_name << endl;

	//char_name[i] : �Ϲ� ������ ����
	// iostream(��� ��Ʈ��) �̿�  �ÿ��� c++�� ������ �迭�� stringŸ������ �ν�
	// string Ÿ�� Ư�� �� ���ڿ� ���� �˸��� '\0'�� ������ �ʴ� ���ڿ��� �����ٰ� �ν����� ����
	for (int i = 0; i < 10; i++)
	{
		//cout << "char_name [ " << i << " ] " << char_name[i] << endl;
		cout << "char_name [ " << i << " ] " << reinterpret_cast<void*>(char_name[i]) << endl;
	}

	cout << "*****************************************" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "short_name [ " << i << " ] " << &short_name[i] << endl;
		//cout << "short_name [ " << i << " ] " << reinterpret_cast<void*>(short_name[i]) << endl;
	}

	cout << "*****************************************" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "int_name [ " << i << " ] " << &int_name[i] << endl;
		//cout << "int_name [ " << i << " ] " << reinterpret_cast<void*>(int_name[i]) << endl;
	}

	// ��� ����, �迭, ��ü ���� �ʱ�ȭ ���� ������ ������ ������ �����
	return 0;
}
*/
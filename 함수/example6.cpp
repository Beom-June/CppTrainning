/* ��ƿ��Ƽ �Լ� �ǽ� 3
* Sleep(int) : CPU�� �Ͻ����� (timed waiting) ���·� �����.
* ��, �߿��� ���� �Ű� ������ ���� ���� ������ ms����.
*/

#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	cout << "5�� �ڿ� ��� " << endl << endl;
	Sleep(5000);				// 5�� �ڿ� ���丮 ���

	cout << "���丮 ��� " << endl;
	system("dir");

	return 0;
}
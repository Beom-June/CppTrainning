/* ��ø �������� �̿��Ͽ� ���� ���� �����
*
* ��� ��� 1
*            1
*           123
*          12345
*         1234567
*        123456789
*
* ��� ��� 2
*        123456789
*         1234567
*          12345
*           123
*            1
*
* ��� ��� 3
*      *
*     ***
*    *****
*     ***
*      *
*
*  ��� ��� 4
*     *   *
*      * *
*       *
*      * *
*     *   *
*/


#include<iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, k = 0;
	int x = 0, y = 0, z = 0;
	int a = 0, b = 0, c = 0;

	cout << "��� ��� 1 " << endl;
	for (i = 0; i < 5; i++)
	{
		// ù ���� ���� ���� (������ �ϳ��� �ٿ����鼭 ���)
		for (j = 0; j < 4 - i; j++)
		{
			cout << " ";
		}

		// �� ���� ���� ���� (���ڸ� ��� �κ�)
		for (k = 1; k < (i + 1) * 2; k++)
		{
			cout << k;
		}
		cout << endl;
	}

	cout << endl;

	cout << "��� ��� 2 " << endl;
	for (x = 5; x > 0; x--)
	{
		for (y = 0; y < 5 - x; y++)
		{
			cout << " ";
		}
		for (z = 1; z < x * 2; z++)
		{
			cout << z;
		}
		cout << endl;
	}

	cout << endl;

	cout << "��� ��� 3 " << endl;
	// ��� �ﰢ��
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5 - a; b++)
		{
			cout << " ";
		}
		for (c = 1; c < (a - 1) * 2; c++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// �ϴ� �ﰢ��
	for (a = 3; a > 0; a--)
	{
		for (b = 0; b <= 3 - (a + 1) / 2; b++)
		{
			cout << " ";
		}
		for (c = 3; c < a * 2; c++)
		{
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}
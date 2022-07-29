/* 중첩 루프문을 이용하여 숫자 상감형 만들기
*
* 출력 결과 1
*            1
*           123
*          12345
*         1234567
*        123456789
*
* 출력 결과 2
*        123456789
*         1234567
*          12345
*           123
*            1
*
* 출력 결과 3
*      *
*     ***
*    *****
*     ***
*      *
*
*  출력 결과 4
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

	cout << "출력 결과 1 " << endl;
	for (i = 0; i < 5; i++)
	{
		// 첫 번쨰 내부 루프 (공백을 하나씩 줄여가면서 출력)
		for (j = 0; j < 4 - i; j++)
		{
			cout << " ";
		}

		// 두 번쨰 내부 루프 (숫자를 찍는 부분)
		for (k = 1; k < (i + 1) * 2; k++)
		{
			cout << k;
		}
		cout << endl;
	}

	cout << endl;

	cout << "출력 결과 2 " << endl;
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

	cout << "출력 결과 3 " << endl;
	// 상단 삼각형
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
	// 하단 삼각형
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
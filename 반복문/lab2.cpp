/* 종합 실습 예제 2
*  사용자로부터 하나의 정수를 입력 받고 해당하는 값 까지
*  피보나치 수열을 출력하는 프로그램을 작성
*  실행결과
*  정수 하나를 입력하세요 : 22
*  1 1 2 3 5 8 13 21
*/

#include<iostream>
using namespace std;
/*
int main()
{
	int n1 = 1;
	int n2 = 1;
	int n3 = 1;
	int input_num = 0;

	cout << "정수 하나 입력 : ";;
	cin >> input_num;

	for (int i = 1; n3 < input_num; i++)
	{
		if (i < 3)
		{
			n3 = 1;
		}
		else
		{
			n3 = n1 + n2;

			// 앞의 두 수를 변경해야 피보나치 수열의 값이 출력
			n1 = n2;
			n2 = n3;
		}

		// 피보나치 수열 값이 출력
		if (n3 < input_num)
		{
			cout << n3 << " ";
		}
	}
	cout << endl;
	return 0;
}
*/
/* while문 실습 1
* 주용도는 무한 루프.
* for문에 비해서 초깃값, 조건식, 증감식이 가각 따로 떨어져 있음
*/

#include <iostream>

using namespace std;

/*
int main()
{
	int su = 0, cnt = 0, hap = 0;

re: // goto문을 위한 레이블 설정
	cout << "어어디까지 합을 구할까요? : ";
	cin >> su;

	// 음수? 양수?에 따라서 분기
	if (su < 0)
	{
		cout << "음의 정수는 허용하지 않는다." << endl;
		cout << "프로그램을 다시 시작합니다." << endl;

		goto re;
	}
	else
	{
		cnt = 1;					// 반복문이 초기값을 설정

		// 반복문을 위한 조건문 설정
		while (cnt <= su)
		{
			hap += cnt;					// 누적 값
			cout << cnt << "회 반복 누적합 : " << hap << endl;
			cnt++;						// while문의 증감식은 루프 내에 존재
		}
		cout << "1부터 " << su << " 까지 누적 합 : " << hap << endl;
	}

	return 0;
}
*/
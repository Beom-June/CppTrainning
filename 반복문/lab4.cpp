/* 종합 실습 예제4
* 사용자로부터 상품 가격을 입력 받아서 그 합계를 구하는 프로그램을 작성
* 출력 결과
* 상품 금액 입력 : 1000
* 상품 금액 입력 : 2000
* 상품 금액 입력 : 3000
* 상품 금액 입력 : 0
* 상품의 총 가격 : 6000원
*/

#include<iostream>
using namespace std;

/*
int main()
{
	int total = 0;
	int gold = 0;
	bool flag = true;

	while (flag)
	{
		cout << " 상품 금액 입력 : ";
		cin >> gold;

		// 탈출 코드
		if (gold == 0)
		{
			cout << " 상품의 총 가격 : " << total << endl;
			flag = false;
			break;
		}
		total += gold;
	}
	return 0;
}
*/
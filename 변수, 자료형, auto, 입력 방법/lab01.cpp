/* 종합 실습 예제 - 1
철수가 가지고 있는 돈으로 최대의 사탕을 사려고 한다.
현재 1000원이 있으며, 사탕의 가격은 300원이다. 최대한 살 수 있는 사탕의 갯수와 나머지 돈은 얼마인가?
나눗셈 연산자 / 와 나머지 연산자 % 를 사용하여 아래와 같이 출력이 되도록 하자*/

/* 출력결과
현재 가지고 있는 돈 : 1000
캔디의 가격 : 300
최대로 살 수 있는 캔디의 갯수 = 3
캔디 구입 후 남은 돈 = 100
*/

#include <iostream>
using namespace std;

/*
int main()
{
	int money = 0;
	int candy_price = 0;

	cout << "현재 가지고 있는 돈 : ";
	cin >> money;

	cout << "캔디의 가격 : ";
	cin >> candy_price;

	// 최대한 살 수 있는 사탕의 갯수
	int count_candy = money / candy_price;
	cout << "최대로 살 수 있는 캔디의 갯수 = " << count_candy << endl;

	// 사탕을 구입하고 남은 돈
	int over_money = money % candy_price;
	cout << "캔디 구입 후 남은 돈 = " << over_money << endl;
}
*/
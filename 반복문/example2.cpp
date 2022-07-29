/* while문 실습 2
* 무한 루프를 돌리면 빠져나가야 조건을 제시
*/

#include <iostream>

using namespace std;

/*
int main()
{
	int su = 0, cnt = 0, hap = 0;
	int con = 0;
	bool condition = true;

	while (condition)
	{
		cout << "어디까지의 합을 구할까요> : ";
		cin >> su;

		if (su < 0)
		{
			cout << "음의 정수는 불가능" << endl;
			cout << "프로그램을 다시 시작합니다." << endl;
			continue;
		}
		else
		{
			cnt = 1;				// 초기 설정

			// 반복문을 위한 조건 설정
			while (cnt <= su)
			{
				hap += cnt;
				cout << "회 반복 누적 합 : " << hap << endl;

				// 무한 루프 탈출 코드
				if (hap > 50)
				{
					cout << "누적 합계가 50을 초과. 프로그램 종료." << endl;
					break;
				}
				cnt++;
			}
		}
		cout << "계속 하시겠습니까? (1 : 계속, 0 : 중지) : ";
		cin >> condition;

		if (condition == 0)
		{
			cout << "프로그램 종료." << endl;
			break;								// 외부 무한루프 빠져나감
		}

		hap = 0;
	}
	return 0;
}
*/
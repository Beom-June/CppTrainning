/* 종합 실습 예제 3 (while)
*
*
*
*
*/

#include<iostream>
using namespace std;
/*
int main()
{
	bool flag = true;
	int speed = 0, keyCode;

	// 무한루프 시작
	while (flag)
	{
		cout << "==============================" << endl;
		cout << " 1. 증속  | 2. 감속  | 3. 중지" << endl;
		cout << "==============================" << endl;

		// 메뉴 입력

		cout << "선택 : ";
		cin >> keyCode;

		// 증속
		if (keyCode == 1)
		{
			speed++;
			cout << "현재 속도 : " << speed << endl;
		}
		else if (keyCode == 2)
		{
			speed--;
			// 속도는 음수 불가 0으로 계속 설정
			if (speed < 0)
			{
				cout << "속도는 음수 불가" << endl;
				speed = 0;
			}
			cout << "현재 속도 : " << speed << endl;
		}
		else if (keyCode == 3)
		{
			//break;
			flag = false;
		}
		else
		{
			cout << "잘못된 입력 값" << endl;
		}
	}
	cout << "프로그램 종료" << endl;
	return 0;
}
*/
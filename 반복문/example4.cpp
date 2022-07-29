/* do ~while 문 실습 2
*
* 사용자의 의중을 물어보고 학점을 출력
*/

#include <iostream>
using namespace std;
/*
int main()
{
	int jumsu = 0, cnt = 1;			// 점수를 입력 받을 변수. 반복 횟수 카운팅하는 변수
	char op = ' ';

	do
	{
		cout << " < " << cnt << " 회 실행 > " << endl;

		// 의중을 물어봄
		cout << "프로그램을 시작하시겠습니까? (Y / N) : ";
		cin >> op;

		// 탈출 코드
		if (op == 'N' || op == 'n')
		{
			cout << "총 " << cnt << " 회 수행 후 종료." << endl;
			break;
		}
		// 프로그램 시작
		else if (op == 'Y' || op == 'y')
		{
		re_jumsu:
			cout << "점수 입력 : ";
			cin >> jumsu;

			// 학점을 출력하기 위해, 중첩 if문을 작성
			if (jumsu < 100 && jumsu >= 90)
			{
				cout << "A 학점" << endl;
			}
			else if (jumsu < 90 && jumsu >= 80)
			{
				cout << "B 학점" << endl;
			}
			else if (jumsu < 80 && jumsu >= 70)
			{
				cout << "C 학점" << endl;
			}
			else if (jumsu < 70 && jumsu >= 60)
			{
				cout << "D 학점" << endl;
			}
			else if (jumsu < 60 && jumsu >= 0)
			{
				cout << "F 학점" << endl;
			}
			else
			{
				cout << "점수 " << jumsu << "는 허용 구간이 아님" << endl;
				cout << "점수 다시 입력" << endl;
				cnt++;
				goto re_jumsu;
			}
			cnt++;
		}
	} while (true);

}
*/
/* do ~ while 문을 이용하여 무한루프
*  중첩 for문을 이용하여 구구단을 2단에서 9단까지 출력
*  사용자의 의중을 물어보는 코드가 들어가야 함
* 프로그램 실행 카운트를 하여 출력
*
* 출력 결과
* 2 x 1 = 02 3 x 1 = 03....................................
* 2 x 2 = 04 3 x 2 = 06 .....................................
* ...................
* 프로그램을 다시 실행하시겠습니까? (Y / N) : K
* 입력한 알파켓 "k"는 허용하지 않습니다.
* 알파벳을 다시 입력하세요
* 프로그램을 다시 실행하시겠습니까? (Y / N) : Y
*
* < 2회 실행 >
* ..............................
* ....................
* 프로그램을 다시 실행하시겠습니까? (Y / N) : N
* 총 2회 실행후 프로그램을 종료합니다

*/

#include <iostream>
using namespace std;
/*
int main()
{
	int dan = 0, cnt = 0, recnt = 1, gob = 0;
	char yn = ' ';


	// 무한루프 시작
	do
	{
		cout << " < " << recnt << " 회 실행 > " << endl;

		// 중첩 for문으로 구구단 실행
		for (cnt = 1; cnt <= 9; cnt++)
		{
			for (dan = 2; dan <= 9; dan++)
			{
				gob = dan * cnt;

				cout << dan << " * " << cnt << " = " << gob << "\t";
			}
			cout << endl;
		}

	re:
		// 사용자 의중을 물어보는 코드
		cout << "프로그램을 다시 실행하시겠습니까? (Y / N) : ";
		cin >> yn;

		switch (yn)
		{
		case 'Y':
		case 'y':
			recnt++;
			continue;
			break;

		case 'N':
		case 'n':
			cout << "총 " << recnt << "회 실행 후 프로그램을 종료" << endl;
			return 0;
			break;

		default:
			cout << "입력하신 알파벳 : " << yn << "는(은) 허용하지 않음" << endl;
			cout << "알파벳을 다시 입력하세요" << endl;
			goto re;
			break;
		}

	} while (true);

	return 0;
}
*/
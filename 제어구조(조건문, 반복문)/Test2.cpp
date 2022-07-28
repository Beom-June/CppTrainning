/*예제 2
*
*  변수 3개를 선언 및 초기화 : int형 변수 2개, string 변수 1개 선언
*  키보드로 점수 입력 받음
*  입력한 점수의 유효 범위 (0 ~ 100) 안에 없는 값이 들어오면 예외 처리
*  입력한 점수에 대해 switch 문을 사용하여 등급을 출력
*
* ---------------------------------------------------------------------------
* 등급               점수 구간                              비고
* ---------------------------------------------------------------------------
* A+                 95점 이상 100점 이하            switch 문으로 A+ 등급 판별
* A0                 90점 이상 95점 이하             switch 문으로 A0 등급 판별
* B+                 85점 이상 90점 이하             switch 문으로 B+ 등급 판별
* B0                 80점 이상 85점 이하             switch 문으로 B0 등급 판별
* C+                 75점 이상 80점 이하             switch 문으로 C+ 등급 판별
* C0                 70점 이상 75점 이하             switch 문으로 C0 등급 판별
* D+                 65점 이상 70점 이하             switch 문으로 D+ 등급 판별
* D0                 60점 이상 65점 이하             switch 문으로 D0 등급 판별
* F                   0점 이상 60점 이하             switch 문으로 F  등급 판별
* ----------------------------------------------------------------------------
*
*  실행 결과
*  점수 입력 : 99
*  입력한 점수 : 99
*  점수 등급 : A+ 등급
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int score = 0, div_5 = 0;
	string grade = " ";

	cout << "점수 입력 : ";
	cin >> score;

	if (cin.fail())
	{
		cout << "입력한 점수 (0~100) : " << score << "허용 구간이 아님" << endl;
		cout << "프로그램을 종료" << endl;

		return 0;
	}

	// 5로 점수를 나누면 20구간이 생기나 60점 미만은 전부 F학점
	// 9 구간만 case문으로 작성하면 됨
	div_5 = score / 5;

	switch (div_5)
	{
	case 20:
	case 19:
		grade = "A+";
		break;
	case 18:
		grade = "A0";
		break;
	case 17:
		grade = "B+";
		break;
	case 16:
		grade = "B0";
		break;
	case 15:
		grade = "C+";
		break;
	case 14:
		grade = "C0";
		break;
	case 13:
		grade = "D+";
		break;
	case 12:
		grade = "D0";
		break;
	default:
		grade = "F";
		break;
	}

	cout << "입력한 점수 : " << score << " 입니다." << endl;
	cout << "점수 등급 : " << grade << " 입니다." << endl;
	return 0;
}
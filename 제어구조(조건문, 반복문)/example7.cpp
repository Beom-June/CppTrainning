// switch문 실습 2 (조건의 중요성)
// 조건은 정수형 상수, 문자형 상수 밖에 올 수가 없다

#include<iostream>

using namespace std;
/*
int main()
{
	int score = 0;
	char grade = ' ';

	// 안내 멘트

	cout << "A학점 : 90 이상 ~ 100점 이하" << endl;
	cout << "B학점 : 80 이상 ~ 90점 이하" << endl;
	cout << "C학점 : 70 이상 ~ 80점 이하" << endl;
	cout << "D학점 : 60 이상 ~ 70점 이하" << endl;
	cout << "F학점 : 0 이상 ~ 60점 미만" << endl;

	cout << "과목 점수 입력 : ";
	cin >> score;

	// 예외 처리

	if (cin.fail())
	{
		cout << "범위에서 넘어간 입력 값" << endl;
		cout << "프로그램 종료" << endl;

		return 0;
	}

	switch (score / 10)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}
	cout << "당신의 점수 : " << score << "입니다" << endl;
	cout << "당신의 학점 : " << grade << "입니다" << endl;

	return 0;
}
*/
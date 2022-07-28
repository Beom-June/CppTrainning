// 중첩(nested) if문 
// 학점 처리

#include<iostream>
#include<string>

using namespace std;
/*
int main()
{
	int score = 0;
	string grade = " ";

	cout << "과목 점수 입력 : ";
	cin >> score;

	if (cin.fail())
	{
		cout << "0~100사이의 값이 아님 " << score << endl;
		cout << "프로그램 종료 " << grade << endl;

		return 0;
	}

	// 중첩 if문을 사용하여 학점을 선정하는 코드
	if (score >= 90 && score <= 100)
	{
		// 내부 조건문
		if (score >= 95)
		{
			grade = "A+";
		}
		else
		{
			grade = "A-";
		}
	}
	else if (score >= 80 && score < 90)
	{
		if (score >= 85)
		{
			grade = "B+";
		}
		else
		{
			grade = "B-";
		}
	}
	else if (score >= 70 && score < 80)
	{
		if (score >= 75)
		{
			grade = "C+";
		}
		else
		{
			grade = "C-";
		}
	}
	else if (score >= 60 && score < 70)
	{
		if (score >= 65)
		{
			grade = "D+";
		}
		else
		{
			grade = "D-";
		}
	}
	else
	{
		grade = "F";
	}
	cout << "입력한 점수 : " << score << "입니다" << endl;
	cout << "학점 등급 : " << grade << "입니다" << endl;
	return 0;
}
*/
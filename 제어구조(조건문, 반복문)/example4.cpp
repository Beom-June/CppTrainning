// if ~ else if ~ else문의 실습과 한계점

#include<iostream>

using namespace std;
/*
int main()
{
	// 성적 처리 프로그램
	int score = 0;
	char grade = ' ';

	cout << "점수를 입력 : ";
	cin >> score;

	//// 한계점 해결 방법 1번째
	//if (score > 100 || score < 0)
	//{
	//	cout << "입력하신 값은 0 ~ 100이 아님" << endl;
	//	return 0;
	//}
	//else
	//{

	// fail은 cin객체의 메소드로써 선언한 타입과 일치하지 아니하면 true 리턴
	if (cin.fail())
	{
		cout << "0~100사이의 값이 아님 " << score << endl;
		cout << "프로그램 종료 " << grade << endl;

		return 0;
	}

	if (score >= 90 && score < 100)
	{
		grade = 'A';
	}
	else if (score >= 80 && score < 90)
	{
		grade = 'B';
	}
	else if (score >= 70 && score < 80)
	{
		grade = 'C';
	}
	else if (score >= 60 && score < 70)
	{
		grade = 'D';
	}
	else if (score < 60 && score >= 0)
	{
		grade = 'F';
	}
	//}
}
*/
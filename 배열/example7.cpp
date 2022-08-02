/* 2차원 배열 실습
* 사용자로부터 2명의 학생의 성명
* 그리고 학생 각각의 3개의 과목을 입력 받아서 총점과 평균을 구하는 프로그램 제작
*/

#include<iostream>
#include<string>
#define ROW 2
#define COL 3
using namespace std;

//int main()
//{
//	string name = " ";					// 이름
//	int row = 0, col = 0, total = 0, i = 0, num = 0, count = 0;
//	int students[ROW][COL] = { 0 };		// 학생 점수 저장
//	double avg = 0.0;
//
//	// 학생 2명에 대한 반복 수행. 외부 루프
//	for (int(&cnt)[COL] : students)
//	{
//		cout << " *** 학생 " << num + 1 << ". 의 성명과 3개의 과목을 입력" << endl;
//
//		// 학생 성명을 받는 코드
//		cout << num + 1 << " .성명 : ";
//		cin >> name;
//
//		// 내부 루프에서 3개의 과목을 입력 받는 코드
//		// 참조자를 통하여 2차원 배열 요소의 값을 변경
//		for (int& j : students[i++])
//		{
//			cout << "과목 " << ++count << "의 점수 : ";
//			cin >> j;
//		}
//
//		count = 0;
//		cout << endl;
//
//		// 총점
//		i = 0;
//		for (int j : students[i])
//		{
//			total += j;
//		}
//
//		// 평균
//		avg = (double)total / COL;
//
//		// 1명에 대한 성명, 총점, 평균 출력
//		cout << name << "의 성적 현황" << endl;
//		cout << "총점 : " << total << endl;
//
//		cout << fixed;
//		cout.precision(2);
//		cout << "평균 : " << avg << endl << endl;
//
//		// 누적 때문에 초기화
//		total = 0;
//		num++;
//	}
//	cout << "전체 " << ROW << "명의 성적 처리 후 프로그램 종료" << endl;
//
//
//	return 0;
//}
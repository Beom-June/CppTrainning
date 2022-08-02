/* 2차원 배열의 종합 실습 예제
*
* 아래와 같은 실행 결과가 나오도록 프로그램을 작성하시오
* int score[][] = {{88, 95, 100}, {85, 63, 20}, {34, 30, 30}, {40, 49, 70}, {15, 75, 98}};
*
* 위와 같이 score 2차원 배열을 선언과 동시에 초기화.
* 더블 루프를 이용하여 아래와 같이 출력 하시오 (단, C++ 스타일과 C 스타일을 혼용 가능)
*
* 실행 결과
*
* 번호 국어 영어 수학 총점 평균
* =============================
* 1    88   95  100  283 94.3
* 2    85   63   20  169 56.0
* 3    34   30   30   94 31.3
* 4    40   49   70  159 53.0
* 5    15   75   98  188 62.7
* =============================
* 총점 -> [국어] 262, [영어] 312, [수학] 318
*/


#include<iostream>
using namespace std;
#define ROW 5
#define COL 3

int main()
{
	int score[ROW][COL] = {
		{88, 95, 100},
		{85, 63, 20},
		{34, 30, 30},
		{40, 49, 70},
		{15, 75, 98}
	};
	// 배열 포인터. 2차원 배열의 주소 값을 저장함
	int(*ptr)[3] = score;

	int num = 0, korTotal = 0, engTotal = 0, mathTotal = 0, i = 0;

	cout << "번호\t국어\t영어\t수학\t총점\t평균" << endl;
	cout << "*********************************************" << endl;

	// 외부 루프
	for (int(&cnt)[COL] : score)
	{
		// 지역 변수
		int sum = 0;					// 개인별 총점을 저장할 변수
		double avg = 0.0;

		korTotal += score[i][0];
		engTotal += score[i][1];
		mathTotal += score[i][2];

		// 번호
		cout << ++i << "\t";

		for (int j : cnt)
		{
			sum += j;					// 개인별 총점 누적
			cout << j << "\t";
		}

		// 개인별 평균
		avg = (double)sum / COL;		// 강제 캐스팅

		cout << sum;
		cout << fixed;
		cout.precision(1);
		cout << "\t" << avg << endl;
	}
	cout << "*********************************************" << endl;

	// 총점
	cout << "총점 -> [국어] : " << korTotal << ", [영어] : " << engTotal << ", [수학] : " << mathTotal << endl;
	return 0;
}
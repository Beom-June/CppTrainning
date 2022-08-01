/* 배열의 대한 실습 4
*
* 배열과 for 문을 이용하여 사용자로부터 3개의 과목의 점수를 입력 받고
* 총점과 평균을 구하는 프록램 작성해보기
*/

//#include <iostream>
//#define LENGTH 3			// 기호 상수
//using namespace std;
//
//int main()
//{
//	// 정수형 배열 선언 및 초기화
//	int score[LENGTH] = { 0 };
//	int count = 0, sum = 0;
//	double avg = 0.0;
//
//	// 사용자로부터 3개의 과목 점수를 반복해서 입력을 받는 코드
//	//for (count = 0; count < LENGTH; count++)
//	//{
//	//	cout << count + 1 << "과목 : ";
//	//	cin >> score[count];
//
//	//}
//
//	// 참조자를 통한 3과목 입력 코드
//	for (int& i : score)
//	{
//		cout << count + 1 << "과목 : ";
//		cin >> score[count++];
//	}
//	//// 입력된 값 출력
//	//for (int i : score)
//	//{
//	//	// 배열의 값 자체를 가지고 배열의 인덱스로 처리하여 엉뚱한 결과 초래
//	//	//cout << score[i] << " ";
//	//	cout << i << " ";
//	//}
//	//cout << endl;
//
//	// 입력된 3개의 과목의 총점을 구하는 코드
//	for (int i : score)
//	{
//		sum += i;
//	}
//	cout << "총점 : " << sum << endl;
//
//	// 평균을 구하는 코드
//	avg = (double)sum / LENGTH;
//	cout << fixed;					// 소수점 고정
//	cout.precision(3);				// 소수점 자리 설정
//	cout << "평균 : " << avg << endl;
//
//	// 소수점 설정한 부분을 다시 해제
//	cout.unsetf(ios::fixed);
//}
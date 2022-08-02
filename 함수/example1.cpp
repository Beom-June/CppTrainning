/* 내장함수 (C++ 컴파일러에서 제공해주는 라이브러리 함수)
*
*/

//#include<iostream>
//#include<cstdlib>			// rand() 정의
//#include<ctime>				// srand() 정의
//#define LENGTH 6
//
//using namespace std;
//
//int main()
//{
//	int cnt = 0;
//
//	// 종자값이(seed)이 같으면, 계속 rand()함수의 값도 동일하게 출력
//	// srand(time(NULL)) 현재 프로그램 실행 시점의 시간은 항상 다르기에, rand()의 종자 값이 계속 다르므로 난수도 다르게 나옴
//	// 
//	srand((unsigned)time(NULL));
//	cout << time(NULL) << endl << endl;
//
//	cout << "1 ~ 45까지 숫자 6개만 출력." << endl;
//	cout << "rand()만 사용" << endl;
//
//	for (cnt = 0; cnt <= LENGTH; cnt++)
//	{
//		cout << rand() << " ";
//	}
//	cout << endl << endl;
//
//	// 범위를 조정을 하고 난수를 출력
//	cout << "rand() %% 45 : ";
//	for (cnt = 0; cnt < LENGTH; cnt++)
//	{
//		// 난수 범위 : 0 ~ 44 사이 값을 출력
//		cout << (rand() % 45) << " ";
//	}
//	cout << endl << endl;
//
//	// 시작 값과 끝 값을 설정하여 난수 생성
//	cout << "1 + rand() % 45 : ";
//	for (cnt = 0; cnt < LENGTH; cnt++)
//	{
//		// 난수 범위 : 1 ~ 45 사이 값을 출력
//		cout << 1 + (rand() % 45) << " ";
//	}
//	cout << endl << endl;
//}
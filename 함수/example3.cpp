///* 수학함수 실습 2 */
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int choice = 0;
//	double result = 0.0, num1 = 0.0, num2 = 0.0;
//
//	do
//	{
//		cout << "1. 제곱값 출력 프로그램" << endl;
//		cout << "2. 제곱근 출력 프로그램" << endl;
//		cout << "3. 프로그램 종료" << endl << endl;
//
//		cout << " 번호 선택 : ";
//		cin >> choice;
//
//		if (cin.fail())
//		{
//			cout << "번호 1, 2, 3 만 허용 합니다." << endl;
//			cout << "프로그램을 다시 시작하세요" << endl << endl;
//			return 0;
//		}
//
//		switch (choice)
//		{
//		case 1:
//			cout << "1. 제곱값 출력 프로그램 " << endl;
//			cout << "제곱 대상 실수 입력 : " << endl;
//			cin >> num1;
//
//			cout << "지수(승) 입력 : ";
//			cin >> num2;
//
//			// 제곱값을 계산
//			result = pow(num1, num2);
//			cout << num1 << "의 " << num2 << " 승의 결과 값 : " << result << endl << endl;
//			break;
//
//		case 2:
//			cout << "2. 제곱근 출력 프로그램 " << endl;
//			cout << "제곱을 구할 실수 입력 : " << endl;
//			cin >> num1;
//
//			// 제곱값을 계산
//			result = sqrt(num1);
//			cout << num1 << "의 " << " 제곱근 결과 값 : " << result << endl << endl;
//			break;
//
//		case 3:
//			cout << "프로그램을 종료." << endl << endl;
//			return 0;
//			break;
//
//		default:
//			cout << "선택 오류. 숫자 1, 2, 3 중에서 선택" << endl << endl;
//			continue;
//			break;
//		}
//	} while (true);
//	return 0;
//}
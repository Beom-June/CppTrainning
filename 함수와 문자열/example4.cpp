/* 유틸리티 함수에 대한 실습
* exit(int) : 함수를 종료를 하고 싶다면 return; 문을 사용.
* exit() 함수는 실행중인 프로세스를 강제로 종료할 떄 사용하는 함수
* 매개 변수가 0일 경우 오류가 없음을 의미, 1일 경우 오류가 발생 했음을 의미
*
*/

//#include<iostream>
//#include<cstdlib>					// exit() 함수가 정의되어 있음
//using namespace std;
//
//int main()
//{
//	int cnt = 0, hap = 0;
//
//	while (true)
//	{
//		hap += cnt;
//
//		if (hap >= 100)
//		{
//			cout << "합계가 100이상이 되었습니다" << endl;
//			cout << "프로그램 종료" << endl;
//
//			//exit(0);				// 실행 프로세스를 종료
//			//return 0;				// 함수의 종료
//			//break;
//		}
//		cnt++;
//	}
//
//	return 0;
//}
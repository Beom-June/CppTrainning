/* 유틸리티 함수 실습 3
* Sleep(int) : CPU의 일시정지 (timed waiting) 상태로 만든다.
* 단, 중요한 것은 매개 변수로 값이 들어가는 정수는 ms단위.
*/

#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	cout << "5초 뒤에 출력 " << endl << endl;
	Sleep(5000);				// 5초 뒤에 디렉토리 출력

	cout << "디렉토리 출력 " << endl;
	system("dir");

	return 0;
}
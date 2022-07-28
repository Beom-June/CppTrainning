// if ~ else 구문의 한계점

#include <iostream>

using namespace std;

/*
int main()
{
	char ch = ' ';

	cout << "알파벳 하나를 입력 : ";
	cin >> ch;

	// if ~ else문의 한계점 해결법
	// 사용자의 실수로 인한 입력을 방지 (예외 처리)
	if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z'))
	{
		cout << "입력한 값 " << ch << "알파벳이 아님";
		cout << "프로그램을 종료" << endl;

		// 리턴문을 만나면 자동 종료
		return 0;
	}

	// 대문자인지 판별
	if (ch >= 'A' && ch <= 'Z')
	{
		cout << " 입력한 알파벳 " << ch << "은 \'대문자\' 이다" << endl;
		cout << " 입력한 알파벳 " << ch << " \'아스키 코드\'값 은" << int(ch) << "이다" << endl;
	}
	else

	{
		cout << " 입력한 알파벳 " << ch << "은 \'소문자\' 이다" << endl;
	}
	return 0;
}
*/
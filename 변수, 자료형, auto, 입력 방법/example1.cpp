#include<iostream>
#include <string>

using namespace std;

int main()
{
	// 변수명 작성
	int age = 0;
	// 변수를 보편화 된 최고하 방법 (C++ 11)
	int i{ 100 };				// int i = 100;

	short b = 0;
	// 자료형의 크기 (sizeof(데이터 타입, 변수명))
	// to_string(정수) : 정수 값을 문자열 타입으로 변경시켜주는 string 헤더파일에 존재하는 메소드
	cout << "short형 자료형의 바이트 크기" + to_string(sizeof(short)) << endl;
	cout << "int형 자료형의 바이트 크기" + to_string(sizeof(int)) << endl;
	cout << "long  형 자료형의 바이트 크기" + to_string(sizeof(long)) << endl;
	cout << "long long형 자료형의 바이트 크기" + to_string(sizeof(long long)) << endl;
	cout << "bool형 자료형의 바이트 크기" + to_string(sizeof(bool)) << endl;
}
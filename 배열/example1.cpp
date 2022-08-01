/* 배열 실습
* 배열은 같은 데이터 타입의 많은 양의 데이터를 처리하기 위한 자료구조
* 배열은 연속된 메모리 공간 (STACK)을 할당 받는다
*
*  배열을 선언하는 구성요소 : 데이터 타입, 배열명 (주소), 크기 (0을 초과 하는 값)
*/

#include <iostream>
using namespace std;
/*
int main()
{
	// 문자형 배열
	char char_name[10] = { "ABCDEFGHI" };			// 1* 10 = 10 바이트

	// short 형 배열
	short short_name[10] = { 0,1,2,3,4,5,6,7,8,9 };			// 20 바이트

	// int형 배열
	int int_name[10] = { 0,1,2,3,4,5,6,7,8,9 };			// 40 바이트

	cout << "배열의 시작 주소 : " << &char_name << endl;

	//char_name[i] : 일반 벼눗와 동일
	// iostream(출력 스트림) 이용  시에는 c++는 문잫여 배열을 string타입으로 인식
	// string 타입 특성 상 문자열 끝을 알리는 '\0'가 들어오지 않는 문자열이 끝났다고 인식하지 않음
	for (int i = 0; i < 10; i++)
	{
		//cout << "char_name [ " << i << " ] " << char_name[i] << endl;
		cout << "char_name [ " << i << " ] " << reinterpret_cast<void*>(char_name[i]) << endl;
	}

	cout << "*****************************************" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "short_name [ " << i << " ] " << &short_name[i] << endl;
		//cout << "short_name [ " << i << " ] " << reinterpret_cast<void*>(short_name[i]) << endl;
	}

	cout << "*****************************************" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "int_name [ " << i << " ] " << &int_name[i] << endl;
		//cout << "int_name [ " << i << " ] " << reinterpret_cast<void*>(int_name[i]) << endl;
	}

	// 모든 변수, 배열, 객체 등은 초기화 하지 않으면 쓰레기 값으로 저장됨
	return 0;
}
*/
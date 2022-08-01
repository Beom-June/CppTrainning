/* 배열에 대한 실습
*
* 배열의 크기 (길이, Length)는 []안에 0을 초과하는 정수 값이 들어가야 한다.
* 정적 배열 : 지정해야 하다보니, 인덱스가 초과되면 오류남. 적게 들어오면 메모리의 낭비를 가져오게 됨
* [] 안에 음수, 실수, 문자 들어가면 에러
* 
*  주의 사항
*  배열의 인덱스는 항상 0부터 시작
*  배열명은 곧 주소
*  배열의 특정 인덱스만 값을 초기화하면 다른 나머지 방들은 전부 쓰레기 값으로 채워짐
*/

#include <iostream>
using namespace std;
#define LENGTH 11


//int main()
//{
//	int length = 5;
//
//	// 매크로 상수로 배열의 크기를 지정하면 에러 미발생
//	int score[LENGTH] = { 0 };
//
//	// [] 크기를 주지 않고 초기화를 하면 컴파일러가 알아서 크기를 잡아줌
//	int jumsu[] = { 10,20,30,40,50 };
//
//	//int arr[LENGTH] = { 10,20,30 };
//	// 특정 인덱스만 초기화 하면, 나머지 방의 값들은 쓰레기 값으로 채워짐
//	int min[LENGTH];
//	min[2] = 50;
//	for (int i : min)
//	{
//		cout << i << " ";
//	}
//
//	/*
//	for (int i = 0; i < LENGTH; i++)
//	{
//		cout << score[i] << " ";
//	}
//	cout << endl;
//
//	// 범위 기반 for 루프
//	for (int i : score)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//	*/
//
//	for (int i = 0; i < sizeof(jumsu) / sizeof(int); i++)
//	{
//		cout << jumsu[i] << " ";
//	}
//	cout << endl;
//
//	// 범위 기반 for 루프, jumsu라는 공간에서 1개씩 값을 int i 변수에 복사
//	for (int i : jumsu)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

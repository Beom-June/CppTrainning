// auto 키워드 : 자동 변수라는 의미 밖에 없었지만 C++ 11에서 auto의 의미가 바뀜
// 자료형을 생략할 때 사용할 수 있는 키워드로 auto. (자동 타입 추론)

#include <iostream>
#include <string>
using namespace std;

/*
auto add(int x, int y)
//auto add(int x, int y)					// 함수에서 매개변수로는 auto 사용 불가
{
	return x + y;
}

int main()
{
	double d = 1.0f;
	auto a = 2.0;
	auto result = 0;
	result = add(10, 20);

	cout << sizeof(a) << endl;

	cout << add(5, 6) << "바이트 크기" << sizeof(result) << endl;

	return 0;
}
*/
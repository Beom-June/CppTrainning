/* 1차원 배열의 종합 실습
*
* 정수형 배열 요소가 3개인 것을 선언 후, 초기화를 하도록 한다.
* 사용자로부터 배열 요소를 3개를 입력 받고, 배열에 저장 한다.
* 3개의 배열값 중에서 최댓값을 구하는 프로그램을 작성
*
* 출력결과
* 1번째 정수를 입력 : 10
* 2번째 정수를 입력 : 6
* 3번째 정수를 입력 : 115
* 가장 큰 수는 115 이다
*/

#include<iostream>
#define LENGTH 3
using namespace std;

//int main()
//{
//	int arr[LENGTH] = { 0 };
//	int max_value = 0;
//	int cnt = 0;
//	// 사용자로부터 입력 받는 코드
//	for (int& i : arr)
//	{
//		// 참조자를 이용한 입력 받는 방법
//		cout << cnt + 1 << "번째 정수를 입력해 주세요 : ";
//		cin >> arr[cnt];
//		cnt++;
//	}
//	//cout << endl;
//	//cnt = 0;
//	//for (int i : arr)
//	//{
//	//	cout << arr[cnt++] << " ";
//	//}
//
//	// 최대값을 구하는 코드
//	if (arr[0] > arr[1])
//	{
//		if (arr[0] > arr[2])
//		{
//			max_value = arr[0];
//		}
//		else
//		{
//			max_value = arr[2];
//		}
//	}
//	// arr[1]이 arr[0] 보다 크면
//	else
//	{
//		if (arr[1] > arr[2])
//		{
//			max_value = arr[1];
//		}
//		else
//		{
//			max_value = arr[2];
//		}
//	}
//
//	cout << "가장 큰 수는 " << max_value << " 이다" << endl << endl;
//	return 0;
//}
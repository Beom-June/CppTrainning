/* 1차원 배열의 종합 실습 2
*
* 정수형 배열 100개의 방을 가지는 배열은 선언하고 초기화
* 100개의 배열의 방을 0~99까지로 각각의 방의 값을 저장
* 정수형 배열 100개의 방을 가지는 배열을 통해서 2의 배수를 출력하는데 사용자로부터
* 어디까지 2의 배수를 출력할 것인지 입력 받고 그 입력 받은 수 까지 루프를 돌면서
*  2의 배수를 출력하는 프로그램을 작성
*  출력 결과
*  배열 arr[100] 개의 방이 0을 초기화가 다 이루어졌습니다
* 어디까지 2의 배수를 출력할까요? : 10
* 2
* 4
* 6
* 8
* 10
*/

//#include<iostream>
//#define LENGTH 100
//using namespace std;
//
//int main()
//{
//	int arr[LENGTH] = { 0 };
//	int num = 0;
//	int cnt = 0;
//
//	cout << "배열 arr[" << LENGTH << "] 개의 방이 0으로 초기화가 다 이루어졌습니다." << endl;
//
//	// 100개의 배열의 방을 0~99까지로 각각의 방의 값을 저장
//	for (int& i : arr)
//	{
//		arr[cnt] = cnt++;
//	}
//	//cnt = 0;
//	//for (int i : arr)
//	//{
//	//	cout << arr[cnt++] << " ";
//	//}
//
//	cout << "어디까지 2의 배수를 출력할까요? : ";
//	cin >> num;
//
//	// 2의 배수를 구하는 코드
//	cnt = 0;
//	for (int i = 0; i <= num; i++)
//	{
//		if (arr[i] == 0)
//		{
//			continue;
//		}
//		// 짝수이면서 2의 배수
//		if ((arr[i]) % 2 == 0)
//		{
//			cout.precision(2);
//			cout << arr[i] << endl;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}
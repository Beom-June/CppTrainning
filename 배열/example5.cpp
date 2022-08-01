/* 다차원 배열에 대한 실습 1
* 배열의 크기를 지정하는 부분[] 1개 > 1차원 배열
* 배열의 크기를 지정하는 부분[][] 2개 > 2차원 배열
* 배열의 크기를 지정하는 부분[][][] 3개 > 3차원 배열
* .....
*
*  arr4[i][j]는 정수형 상수 값을 대입하는데 문제 없음. 변수와 동일
* 2차원 배열에서는 차원 배열의 값은 주소이기 때문에 정수형 값을 대입 불가 > arr4[1] = 100; 불가.
*
*/

//#include<iostream>
//
//#define ROW 3				// 행의 크기
//#define COL 3				// 열의 크기
//
//using namespace std;
//
//int main()
//{
//	int i = 0, j = 0;
//
//	// 9개의 방을 일괄적으로 0으로 초기화함. 사용자로부터 입력을 받고자 할 때 사용
//	int arr1[ROW][COL] = { 0 };
//
//	// 가독성이 안좋음
//	int arr2[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
//
//	// 3번째 방법
//	int arr3[ROW][COL] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	// 4번째 방법
//	int arr4[ROW][COL] = {
//							{1,2,3},
//							{4,5,6},
//							{7,8,9}
//	};
//
//	// 2차원 배열을 출력하기 위해서는 반드시 더블루프가 필요
//	// 1. C 스타일 출력
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			cout << arr4[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "*******************************" << endl << endl;
//
//	// 2. 범위 기반 C++ 스타일 혼용 출력
//	for (i = 0; i < ROW; i++)
//	{
//		for (int j : arr4[i])
//		{
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//	cout << "*******************************" << endl << endl;
//
//	// 3. C++ 스타일
//	// 함수 포인터를 이용해 출력해야, C++ 스타일로 출력 가능
//	for (int(&ln)[3] : arr4)
//	{
//		for (int col : ln)
//		{
//			cout << col << " ";
//		}
//		cout << endl;
//	}
//	cout << "*******************************" << endl << endl;
//
//	// 2차원 배열의 주소 출력
//	cout << arr1 << endl;
//	cout << arr1[0] << endl;
//	cout << arr1[1] << endl;
//	cout << arr1[2] << endl;
//	cout << &arr1[0][0] << endl;
//	cout << &arr1[0][1] << endl;
//	cout << endl;
//
//	cout << "*******************************" << endl << endl;
//
//	// 2차원 배열의 크기 출력
//	cout << sizeof(arr1) << endl;
//	cout << sizeof(arr1[0]) << endl;
//	cout << sizeof(arr1[1]) << endl;
//	cout << sizeof(arr1[2]) << endl;
//	cout << sizeof(&arr1[0][0]) << endl;
//	cout << sizeof(&arr1[0][1]) << endl;
//	cout << endl;
//
//	return 0;
//}

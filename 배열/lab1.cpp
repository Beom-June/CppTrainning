/* 1���� �迭�� ���� �ǽ�
*
* ������ �迭 ��Ұ� 3���� ���� ���� ��, �ʱ�ȭ�� �ϵ��� �Ѵ�.
* ����ڷκ��� �迭 ��Ҹ� 3���� �Է� �ް�, �迭�� ���� �Ѵ�.
* 3���� �迭�� �߿��� �ִ��� ���ϴ� ���α׷��� �ۼ�
*
* ��°��
* 1��° ������ �Է� : 10
* 2��° ������ �Է� : 6
* 3��° ������ �Է� : 115
* ���� ū ���� 115 �̴�
*/

#include<iostream>
#define LENGTH 3
using namespace std;

//int main()
//{
//	int arr[LENGTH] = { 0 };
//	int max_value = 0;
//	int cnt = 0;
//	// ����ڷκ��� �Է� �޴� �ڵ�
//	for (int& i : arr)
//	{
//		// �����ڸ� �̿��� �Է� �޴� ���
//		cout << cnt + 1 << "��° ������ �Է��� �ּ��� : ";
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
//	// �ִ밪�� ���ϴ� �ڵ�
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
//	// arr[1]�� arr[0] ���� ũ��
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
//	cout << "���� ū ���� " << max_value << " �̴�" << endl << endl;
//	return 0;
//}
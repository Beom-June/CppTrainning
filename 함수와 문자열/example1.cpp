/* �����Լ� (C++ �����Ϸ����� �������ִ� ���̺귯�� �Լ�)
*
*/

//#include<iostream>
//#include<cstdlib>			// rand() ����
//#include<ctime>				// srand() ����
//#define LENGTH 6
//
//using namespace std;
//
//int main()
//{
//	int cnt = 0;
//
//	// ���ڰ���(seed)�� ������, ��� rand()�Լ��� ���� �����ϰ� ���
//	// srand(time(NULL)) ���� ���α׷� ���� ������ �ð��� �׻� �ٸ��⿡, rand()�� ���� ���� ��� �ٸ��Ƿ� ������ �ٸ��� ����
//	// 
//	srand((unsigned)time(NULL));
//	cout << time(NULL) << endl << endl;
//
//	cout << "1 ~ 45���� ���� 6���� ���." << endl;
//	cout << "rand()�� ���" << endl;
//
//	for (cnt = 0; cnt <= LENGTH; cnt++)
//	{
//		cout << rand() << " ";
//	}
//	cout << endl << endl;
//
//	// ������ ������ �ϰ� ������ ���
//	cout << "rand() %% 45 : ";
//	for (cnt = 0; cnt < LENGTH; cnt++)
//	{
//		// ���� ���� : 0 ~ 44 ���� ���� ���
//		cout << (rand() % 45) << " ";
//	}
//	cout << endl << endl;
//
//	// ���� ���� �� ���� �����Ͽ� ���� ����
//	cout << "1 + rand() % 45 : ";
//	for (cnt = 0; cnt < LENGTH; cnt++)
//	{
//		// ���� ���� : 1 ~ 45 ���� ���� ���
//		cout << 1 + (rand() % 45) << " ";
//	}
//	cout << endl << endl;
//}
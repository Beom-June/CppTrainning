/* �迭�� ���� �ǽ� 4
*
* �迭�� for ���� �̿��Ͽ� ����ڷκ��� 3���� ������ ������ �Է� �ް�
* ������ ����� ���ϴ� ���Ϸ� �ۼ��غ���
*/

//#include <iostream>
//#define LENGTH 3			// ��ȣ ���
//using namespace std;
//
//int main()
//{
//	// ������ �迭 ���� �� �ʱ�ȭ
//	int score[LENGTH] = { 0 };
//	int count = 0, sum = 0;
//	double avg = 0.0;
//
//	// ����ڷκ��� 3���� ���� ������ �ݺ��ؼ� �Է��� �޴� �ڵ�
//	//for (count = 0; count < LENGTH; count++)
//	//{
//	//	cout << count + 1 << "���� : ";
//	//	cin >> score[count];
//
//	//}
//
//	// �����ڸ� ���� 3���� �Է� �ڵ�
//	for (int& i : score)
//	{
//		cout << count + 1 << "���� : ";
//		cin >> score[count++];
//	}
//	//// �Էµ� �� ���
//	//for (int i : score)
//	//{
//	//	// �迭�� �� ��ü�� ������ �迭�� �ε����� ó���Ͽ� ������ ��� �ʷ�
//	//	//cout << score[i] << " ";
//	//	cout << i << " ";
//	//}
//	//cout << endl;
//
//	// �Էµ� 3���� ������ ������ ���ϴ� �ڵ�
//	for (int i : score)
//	{
//		sum += i;
//	}
//	cout << "���� : " << sum << endl;
//
//	// ����� ���ϴ� �ڵ�
//	avg = (double)sum / LENGTH;
//	cout << fixed;					// �Ҽ��� ����
//	cout.precision(3);				// �Ҽ��� �ڸ� ����
//	cout << "��� : " << avg << endl;
//
//	// �Ҽ��� ������ �κ��� �ٽ� ����
//	cout.unsetf(ios::fixed);
//}
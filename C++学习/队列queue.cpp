//#define _CRT_SECURE_NO_WARNINGS 1
//
///*����queue
//1.����
//2.���
//3.����
//4.���ʶ���
//5.���ʶ�β
//6.��ȡ����
//7.����
//*/
//
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main(void)
//{
//	//��1������
//	queue <int> q;
//
//	//��2�����
//	for (int i = 0; i < 10; i++)
//	{
//		q.push(i);
//	}
//	cout << "����Ԫ��Ϊ��" << q.front() << ';' << "��βԪ��Ϊ��" << q.back() << endl;
//
//	//��3������
//	q.pop();
//	cout << "����Ԫ��Ϊ��" << q.front() << ';' << "��βԪ��Ϊ��" << q.back() << endl;
//	
//	//��4�����ʶ���
//	q.push(11);
//	cout << "����Ԫ��Ϊ��" << q.front() << endl;
//	
//	//��5�����ʶ�β
//	cout << "��βԪ��Ϊ��" << q.back() << endl;
//	
//	//��6����ȡ����
//	cout << "���г���Ϊ��" << q.size();
//
//	//��7������
//	cout << "\n������" << endl;
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//
//	return 0;
//}
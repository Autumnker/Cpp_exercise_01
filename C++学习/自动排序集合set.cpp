//#define _CRT_SECURE_NO_WARNINGS 1
//
///*�Զ����򼯺� set
// 1.����
// 2.����
// 3.ɾ��
// 4.��ѯ
// 5.����
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
///*
//1.������set <int> a; a���治�ܴ����ţ������� vector ������ʼ�����߿��ٿռ䡾��Ϊ�������ɻ���Ԫ�ع��ɵġ�
//2.���룺a.inster(data); ����Ԫ�غ�set ���� a ���Զ���Ԫ������
//3.�������õ�����
//4.���ң�a.find(data); ����ֵ��һ��ָ��
//5.ɾ����a.eraser(data);
//*/
//
//int main(void)
//{
//	//��1����������
//	set <int> s;
//
//	//��2������Ԫ��
//	s.insert(1);
//	s.insert(2);
//	s.insert(3);
//	s.insert(3);
//
//	//��3����������
//	cout << "��������Ԫ��" << endl;
//	auto pbegin = s.begin();
//	auto pend = s.end();
//	auto head = pbegin;
//	for (; pbegin != pend; pbegin++)
//	{
//		cout << *pbegin << " ";
//	}
//	cout << endl;
//	pbegin = head;
//
//	//��4������Ԫ�أ�����ָ�룩
//	auto ptr_2 = s.find(2);
//	cout << "ͨ�� 2 ��ָ����ʣ�\n" << *ptr_2 << endl;
//
//	//��5��ɾ��Ԫ��
//	cout << "����Ԫ�� 3 �� 0 " << endl;
//	s.insert(3);//��������Ԫ�ز���ı伯�ϵ�����
//	s.insert(0);//����һ�� 0 
//
//	pbegin = s.begin();
//	pend = s.end();
//	head = pbegin;
//	for (; pbegin != pend; pbegin++)
//	{
//		cout << *pbegin << " ";
//	}
//	cout << endl;
//	pbegin = head;
//
//
//	//ɾ��Ԫ�� 0 
//	cout << "ɾ��Ԫ�� 0 " << endl;
//	s.erase(0);
//
//	pbegin = s.begin();
//	pend = s.end();
//	head = pbegin;
//	for (; pbegin != pend; pbegin++)
//	{
//		cout << *pbegin << " ";
//	}
//	cout << endl;
//	pbegin = head;
//
//	return 0;
//}

///*�����򼯺� unordered_set*/
//#include<unordered_set>
//#include<set>
//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	unordered_set <int> un_set;
//
//	un_set.insert(300);
//	un_set.insert(37);
//	un_set.insert(12);
//	un_set.insert(34);
//	un_set.insert(6);
//	un_set.insert(9);
//
//	cout << "unordered_set:" << endl;
//	for (auto p = un_set.begin(); p != un_set.end(); p++)
//	{
//		cout << *p << " ";
//	}
//	cout << endl;
//
//	set <int> s;
//	s.insert(300);
//	s.insert(37);
//	s.insert(12);
//	s.insert(34);
//	s.insert(6);
//	s.insert(9);
//
//	cout << "set:" << endl;
//	for (auto ptr = s.begin(); ptr != s.end(); ptr++)
//	{
//		cout << *ptr << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
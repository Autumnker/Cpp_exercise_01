//#define _CRT_SECURE_NO_WARNINGS 1
//
///*map���а���ASC����������ԣ�Ҳ�����Զ����������
//1.������ֵ��
//2.���
//3.����
//4.����
//5.��ȡ����
//6.ɾ��
//7.�Զ���������������ʽ��
//*/
//
//#include<iostream>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
//////�����������ɴ�С����
////bool cmp(int x, int y)
////{
////	if (x > y)
////	{
////		return true;
////	}
////	else
////		return false;
////}
//
//int main(void)
//{
//	//��1��������ֵ��
//	map <string, int> maper;
//	//��2�����
//	maper["one"] = 1;
//	maper["two"] = 2;
//	maper["three"] = 3;
//	maper["four"] = 4;
//	maper["five"] = 5;
//	//��3������
//	for (auto ptr = maper.begin(); ptr != maper.end(); ptr++)
//	{
//		cout << ptr -> first << " " << ptr -> second << endl;
//	}
//
//	//��4������
//	cout << maper["three"] << endl;
//
//	//��5����ȡ����
//	cout << maper.size() << endl;
//
//	//��6��ɾ����ֵ��{���ң�maper.find()����[������Ϊ��������ֵΪָ��] / ɾ����maper.erase()��������ָ�� }
//	maper.erase(maper.find("three"));
//	cout << maper.size() << endl;
//
//	//��7���Զ���������
//	//sort(&(maper.begin()->second), &(maper.end()->second), cmp);//�ַ����Ӵ�С����
//
//	//cout << "\n\n\n" << endl;
//	//for (auto ptr = maper.begin(); ptr != maper.end(); ptr++)
//	//{
//	//	cout << ptr->first << " " << ptr->second << endl;
//	//}
//
//	return 0;
//}
//
//
/////*�������ֵ� unordered_map*/
////#include<unordered_map>
////#include<iostream>
////using namespace std;
////
////int main(void)
////{
////	unordered_map <string,int> un_map;
////
////	un_map["abc"] = 123;
////	un_map["adef"] = 456;
////	un_map["aghi"] = 789;
////	un_map["jakl"] = 13;
////
////	for (auto p = un_map.begin(); p != un_map.end(); p++)
////	{
////		cout << p->first << " " << p->second << endl;
////	}
////
////	return 0;
////}
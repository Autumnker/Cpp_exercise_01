//#define _CRT_SECURE_NO_WARNINGS 1
//
///*���ڷ�Χ��forѭ��
//1.��ֵ
//2.����ַ
//3.auto �����������ѭ��
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//template<typename T>
//
////����Ԫ��( 0 Ϊ��ֵ��ʽ�� 1 Ϊ�����÷�ʽ)
//void show(T &a, int flag, int num)
//{
//	cout << endl;
//
//	if(flag == 0)
//	{
//		cout << "��ֵ," << "(num = " << num << "): ";
//
//		for (int i : a)//����� i �Ǵ�ֵ, i : a��������Java�еķ�Χѭ�������� i = a[i]�� 
//		{
//			cout << i + num << " ";
//			i += num;
//			//i++;
//		}
//	}
//	else if(flag == 1)
//	{
//		cout << "������," << "(num = " << num << "): ";
//
//		for (int& i : a)//ע������� i ǰ���� &����Ϊ������
//		{
//			cout << i + num << " ";
//			i += num;
//			//i++;����Ҫ������i ���Զ����� a �е�����Ԫ��
//		}
//	}
//	cout << endl;
//}
//
//int main(void)
//{
//	int a[] = { 1,2,3,4,5,6 };
//	//��1����ֵ
//	show(a, 0, 1);
//	show(a, 1, 0);
//	show(a, 0, 0);
//
//	//��1������ַ
//	show(a, 1, 1);
//	show(a, 0,0);
//	//��1��auto�����������ѭ��
//	vector<int> b(10,-1);
//	show(b, 0, 0);
//	show(b, 1, 0);
//	show(b, 1, 1);
//	show(b, 0, 0);
//	show(b, 1, 1);
//	show(b, 0, 0);
//
//	return 0;
//}
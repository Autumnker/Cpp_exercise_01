//#define _CRT_SECURE_NO_WARNINGS 1
//
///*���� vector���ɱ䳤���飩
//1.����������ʽ vector v; vector v(10); vector v(10,1);
//2.׷��Ԫ�� v.push_back(data);
//3.���·��䳤�� v.resize(length);
//4.��ȡ�������� v.size();
//5.������() v.begin(); v.end(); ���У���v.end();����ָĩβԪ�ص���һ����ַ
//*/
//
//#include<vector>
//#include<iostream>
//
////��Ԥ��������� "#" ��ȡ��������������
//#define GET_VECTOR_NAME(name) #name
////ʧ�ܣ���Ϊ name �޷���̬�任
//
//using namespace std;
//
////���������Ԫ�صĺ���
//void show(vector <int> a, string name)
//{
//	cout << name << ":";
//	for (auto p = a.begin(); p != a.end(); p++)//���� p ��ָ��
//	{
//		cout << *p << " ";
//	}
//	cout << endl;
//}
//
//int main(void)
//{
//	//��1������������ʽ���京��
//	vector <int> a;//��ʾ������һ���ռ��СΪ 0 �� int ������
//	vector <int> b(10);//��ʾ������һ���ռ��СΪ 0 �� int ������,������ÿ��Ԫ�ض���ʼ��Ϊ 0 
//	vector <int> c(10, 2);//��ʾ������һ���ռ��СΪ 0 �� int ������,������ÿ��Ԫ�ض���ʼ��Ϊ 2 
//
//	vector <string> name;
//	name.push_back("a");
//	name.push_back("b");
//	name.push_back("c");
//
//	//������������е�Ԫ��
//	show(a,name[0]);
//	cout << "a�ĳ���Ϊ��" << a.size() << endl;
//
//	show(b,name[1]);
//	cout << "b�ĳ���Ϊ��" << b.size() << endl;
//
//	show(c,name[2]);
//	cout << "c�ĳ���Ϊ��" << c.size() << endl;
//
//	//��2��׷��Ԫ�� v.push_back(data);
//	cout << "\n����������׷��һ��Ԫ�ء�123��\n" << endl;
//	a.push_back(123);
//	b.push_back(123);
//	c.push_back(123);
//	show(a,name[0]);
//	cout << "a���³���Ϊ��" << a.size() << endl;
//
//	show(b,name[1]);
//	cout << "b���³���Ϊ��" << b.size() << endl;
//
//	show(c,name[2]);
//	cout << "c���³���Ϊ��" << c.size() << endl;
//
//	//��3�����·��䳤�� v.resize(length);
//	cout << "\n�������������·����ڴ棬���ڴ泤��Ϊ15\n����a׷�ӵĿռ��ʼ��Ϊ 3 ��b Ϊ 5�� c��������ʾ�ĳ�ʼ��\n" << endl;
//
//	a.resize(15,3);//��a��׷�ӵ��ڴ��ʼ��Ϊ 3 
//	show(a,name[0]);
//	cout << "a�ĳ���Ϊ��" << a.size() << endl;
//
//	b.resize(15, 5);//ȷʵ����׷�ӵ��ڴ� ��ʼ��Ϊ 5 ,��ǰ���ڴ治��
//	show(b,name[1]);
//	cout << "b�ĳ���Ϊ��" << b.size() << endl;
//
//	c.resize(15);
//	show(c,name[2]);
//	cout << "c�ĳ���Ϊ��" << c.size() << endl;
//
//	//��4����ȡ�������� v.length();
//	/*�Ѿ�д��������׸��*/
//
//	//��5��������() v.begin(); v.end(); ���У���v.end(); ����ָĩβԪ�ص���һ����ַ
//	cout << "\n�������Ѿ�ʵ�ֹ������ǻ�����Ūһ�°�" << endl;
//	
//	auto pb = a.begin();//��ʾ���� a ���׸�Ԫ�صĵ�ַ
//	auto pe = a.end();//��ʾ���� a ��ĩβԪ�ص���һ����ַ
//	auto p = pb;//ʼ��ָ�� a ���׵�ַ
//
//	cout << "\n��� a �е�Ԫ��\n" << endl;
//	for (; pb != pe; pb++)
//	{
//		cout << *pb << " ";
//	}
//	cout << endl;
//
//	pb = p;//ָ���λ
//
//	cout << "���� a ʹ�� .clear() ����֮��" << endl;
//	a.clear();
//	if (a.begin() == a.end())//�ж������Ƿ���ճɹ�
//	{
//		cout << "\n�����Ѿ���գ�û�п����Ԫ��\n" << endl;
//	}
//	else
//	{
//		for (; pb != pe; pb++)
//		{
//			cout << *pb << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
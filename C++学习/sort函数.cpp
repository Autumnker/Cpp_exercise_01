//#define _CRT_SECURE_NO_WARNINGS 1
//
///*sort����,�Զ�������(Ĭ�ϴ�С��������)
//1.sort�������÷�
//2.sort�����е��Զ���cmp����
//*/
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class student {
//public:
//	int age;
//	string name;
//	student(int init_age, string init_name) 
//	{
//		this->age = init_age;
//		this->name = init_name;
//	}
//	student()
//	{
//		this->age = 0;
//		this->name = "\0";
//	}
//};
//
//void show(vector<int> m)
//{
//	cout << endl;
//	for (auto p = m.begin(); p != m.end(); p++)
//	{
//		cout << *p << " ";
//	}
//	cout << endl;
//}
//
//void show(student a[],int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i].name << ':' << a[i].age << endl;
//	}
//
//	/*cout << a[0].name << ':' << a[0].age << endl;
//	cout << a[1].name << ':' << a[1].age << endl;
//	cout << a[2].name << ':' << a[2].age << endl;*/
//
//}
//
//bool cmp(int x, int y)
//{
//	if (x != y)
//	{
//		return x > y;
//	}
//	return false;
//
//}
//
//bool cmpStudent(student a, student b)
//{
//	if (a.name != b.name)
//	{
//		if (a.age < b.age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//}
//
//int main(void)
//{
//	//��1��sort�����÷�
//	vector<int>m;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		m.insert(m.begin() + i, 10 - i);
//	}
//	show(m);
//
//	sort(m.begin(), m.end());
//
//	cout << "after sort:" << endl;
//	show(m);
//
//	/*��չ,�ṹ��������Ҫ����cmp����*/
//
//	//student* stu = new student[3]{
//	//	student(13,"ammy"),
//	//	student(14,"alex"),
//	//	student(18,"jone")
//	//};
//
//	cout << endl;
//	student* stu = new student[3];
//	for (i = 0; i < 3; i++)
//	{
//		cin >> stu[i].name >> stu[i].age;
//	}
//
//	show(stu,3);
//
//
//	//��2��sort�е��Զ���cmp����
//	sort(m.begin(), m.end(), cmp);
//	
//	cout << "after cmp:" << endl;
//	show(m);
//
//	sort(stu, stu + 3, cmpStudent);
//
//	cout << "\nafter sort(stu,stu+3),depends on age:" << endl;
//	show(stu,3);
//
//	return 0;
//}
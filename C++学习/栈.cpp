//#define _CRT_SECURE_NO_WARNINGS 1
//
///*ջ��û�е�������
//1.����ջ
//2.��ջ
//3.��ջ
//4.����ջ��
//5.��ȡջ�ĳ���
//6.����
//*/
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int main(void)
//{
//	//��1������ջ
//	stack <int> s;
//
//	//��2����ջ
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	s.push(5);
//	
//	cout << "����ջ��Ԫ�أ�" << s.top() << endl;
//
//	//��3����ջ
//	s.pop();
//	cout << "����ջ��Ԫ�أ�" << s.top() << endl;
//	
//	//��4������ջ��
//	s.pop();
//	cout << "����ջ��Ԫ�أ�" << s.top() << endl;
//	
//	//��5����ȡջ�ĳ���
//	cout << "��ȡջ�ĳ��ȣ�" << s.size() << endl;
//
//	//��6������
//
//	stack <int> s2;
//
//	cout << "\n����s" << endl;
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s2.push(s.top());
//		s.pop();
//	}
//	cout << endl;
//
//	cout << "\n����s2" << endl;
//	while (!s2.empty())
//	{
//		cout << s2.top() << " ";
//		s2.pop();
//	}
//	cout << endl;
//
//	return 0;
//}
//
/////*stack �е� swap ����*/
////#include <iostream>
////#include <stack>
////
//////#define DBUG
////
////using namespace std;
////
////int main() {
////    std::stack<int> s1, s2;
////
////    // �� s1 �����Ԫ��
////    s1.push(1);
////    s1.push(2);
////    s1.push(3);
////
////    // �� s2 �����Ԫ��
////    s2.push(4);
////    s2.push(5);
////
////#ifdef DBUG
////
////    // ��ӡԭʼ�� s1 �� s2 ����
////    std::cout << "Before swap:" << std::endl;
////    std::cout << "s1: ";
////    while (!s1.empty()) {
////        std::cout << s1.top() << " ";
////        s1.pop();
////    }
////    std::cout << std::endl;
////
////    std::cout << "s2: ";
////    while (!s2.empty()) {
////        std::cout << s2.top() << " ";
////        s2.pop();
////    }
////    std::cout << std::endl;
////
////#endif
////
////    // ���� s1 �� s2 ������
////    s1.swap(s2);
////
////    // ��ӡ������� s1 �� s2 ����
////    std::cout << "After swap:" << std::endl;
////    std::cout << "s1: ";
////    while (!s1.empty()) {
////        std::cout << s1.top() << " ";
////        s1.pop();
////    }
////    std::cout << std::endl;
////
////    std::cout << "s2: ";
////    while (!s2.empty()) {
////        std::cout << s2.top() << " ";
////        s2.pop();
////    }
////    std::cout << std::endl;
////
////    return 0;
////}
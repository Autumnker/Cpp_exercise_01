//#define _CRT_SECURE_NO_WARNINGS 1
//
///*bitsetλ���㣨�Ǵ洢�����������ַ����飬a[0]��Ӧ�������������λ��
//1.�����洢�����Ƶ��ַ����鲢��ʼ��Ϊ 0 
//2.�� unsigned int �����ݳ�ʼ���ַ�����
//3.�ö������ַ�����ʼ���ַ����飬�ַ���ƴ���ڶ������������λ
//4.��Щȫ�ǹ��� 1 �Ĳ��� b.any() ; b.none() ; b.count() ; b.test(i) ; b.set(i) ;
//5.��Щȫ�ǹ��� 0 �Ĳ��� b.reset() ; b.reset(i) ;
//6.��Щȫ��ȡ������ b.flip() ; b.flip(i) ;
//7.unsigned long a = b.to_ulong(); ��������ת��Ϊ unsigned long ���� ; b.size() ��ȡ����������λ��
//*/
//
//#include<bitset>
//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	//��1���� 5 ��������λ��ʼ��Ϊ 0 
//	bitset<5> b0;
//	cout << "initBitset:" << b0 << endl;
//
//	//��2���� unsinged int �͵����ݳ�ʼ������������
//	unsigned int a = 10;
//	bitset<5> b1(a);
//	cout << "unsigned int bitset:" << b1 << endl;
//
//	//��3�����ַ�����ʼ������������
//	string str = "10110";
//	bitset<10> b2(str);
//	cout << "str for sitset;" << b2 << endl;
//
//	cout << "\nָ����ʼ��������������ַ����ĳ��ȣ��ַ���Ϊ:11001010\n" << endl;
//	string str_half = "11001010";
//	bitset<5>bit_1(str_half, 0, 5);//��str�� 0 ��λ�ÿ�ʼ��ȡ����ַ����ڳ�ʼ�� bit_1
//	cout << "after bit_1(str_half,0,5):" << bit_1 << endl;
//	
//	//��4������ 1 �Ĳ���
//	cout << "\ncreat a bitset with only three 1s: 10101\n" << endl;
//	string str2 = "10101";
//	bitset<5>b3(str2);
//	cout << "b3.any() means that there at least one 1 in b3:" << b3.any() << endl;
//	cout << "b3.none() means there is no 1 in b3:" << b3.none() << endl;
//	cout << "b3.count() means how many 1s in b3:" << b3.count() << endl;
//	cout << "b3.test(i),i = 2 means if there is 1 when i = 2:" << b3.test(2) << endl;
//	b3.set(1);//����� 1 �ǴӶ����Ƶ�λ����λ�����
//	cout << "b3.set(i),i = 1 means turn it to 1 when i = 1:" << b3 << endl;
//	
//	//��5������ 0 �Ĳ���
//	cout << "\ncreat a bitset with two 1s: 01001\n" << endl;
//	bitset<5>b4("01001");
//	cout << "b4:" << b4 << endl;
//	b4.reset(0);
//	cout << "after b4.reset(0):" << b4 << endl;
//	b4.reset();
//	cout << "b4 was .reset():" << b4 << endl;
//
//	//��6��ȡ������
//	cout << "\ncreat a bitset: 10101011\n" << endl;
//	bitset<8>b5("10101011");
//	cout << "b5:" << b5 << endl;
//	b5.flip();
//	cout << "after b5.flip():" << b5 << endl;
//	b5.flip(0);
//	b5.flip(1);
//	cout << "after b5.flip(0),b5.flip(1):" << b5 << endl;
//
//	//��7����������ת���ͻ�ȡ���ȵĲ���
//	cout << "\ncreat a bitset:11011101\n" << endl;
//	bitset<8>b6("11011101");
//	cout << "b6:" << b6 << endl;
//	unsigned long ulong_num = b6.to_ulong();
//	string string_num = b6.to_string();
//	cout << "after b6.to_ulong()����ǽ�������ת��Ϊ�޷���ʮ����:" << ulong_num << endl;
//	cout << "after b6.to_string():" << string_num << endl;
//
//	int xy = -4;//��ѭ������һ������Сǰ�������
//	bitset<5> b7(xy);
//	cout << "\n�� -4 ������г�ʼ�����������൱��ѭ������\nb7:" << b7 << endl;
//
//	return 0;
//}
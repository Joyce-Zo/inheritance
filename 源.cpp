#include<iostream>
using namespace std;

// �̳еķ�ʽ

//class A // ����
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};

//class B :public A // �����̳�
//{
//public:
//	void func()
//	{
//		a = 1;// �����й���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ�޳�Ա
//		b = 2;// �����б���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ�޳�Ա
//		//c = 3;// ������˽��Ȩ�޳�Ա�����ɷ���
//	}
//};
//void test01()
//{
//	B b;
//	b.a = 3;
//	b.b = 4;// ����Ȩ�޳�Ա�����ⲻ�ɷ���
//	b.c = 4;// ˽��Ȩ�޳�Ա�����ⲻ�ɷ���
//}

//class B :protected A // �����̳�
//{
//public:
//	void func()
//	{
//		a = 1;// �����й���Ȩ�޳�Ա���������б���Ǳ���Ȩ�޳�Ա
//		b = 2;// �����б���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ�޳�Ա
//		//c = 3;// ������˽��Ȩ�޳�Ա�����ɷ���
//	}
//};
//void test02()
//{
//	B b;
//	b.a = 3;
//	b.b = 3;
//	b.c = 3;
//}

//class B :private A // ˽�м̳�
//{
//public:
//	void func()
//	{
//		a = 1;// �����й���Ȩ�޳�Ա���������б����˽��Ȩ�޳�Ա
//		b = 2;// �����б���Ȩ�޳�Ա������������Ȼ��˽��Ȩ�޳�Ա
//		//c = 3;// ������˽��Ȩ�޳�Ա�����ɷ���
//	}
//};
//
//
//void test03()
//{
//	B b;
//	b.a = 3;
//	b.b = 3;
//	b.c = 3;
//}

//class B :public A // B�����̳�A
//{
//public:
//	int a;
//protected:
//	int b;
// ���ɷ���
//	int c;
//};
//
//class B :protected A// B�����̳�A
//{
//protected:
//	int a;
//	int b;
// ���ɷ���
//	int c;
//};
//class B :private A // B˽�м̳�A
//{
//private:
//	int a;
//	int b;
// ���ɷ���
//	int c;
//};

//class Base // ����
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//class Son :public Base
//{
//public:
//	int d;
//};
//void test01()
//{
//	cout << sizeof(Son) << endl;
//}
//int main()
//{
//	test01();
//
//	return 0;
//}

// �̳��еĹ��������˳��


//class Base // ����
//{
//public:
//	Base()
//	{
//		cout << "���๹�캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "������������" << endl;
//	}
//};
//class Son :public Base // ����
//{
//public:
//	Son()
//	{
//		cout << "���๹�캯��" << endl;
//	}
//	~Son()
//	{
//		cout << "������������" << endl;
//	}
//};
//void test01()
//{
//	//Base b;
//	Son s;
//}
//int main()
//{
//	test01();
//	return 0;
//}

// �̳��е�ͬ����Ա����

//class Base
//{
//public:
//	Base()
//	{
//		m_A = 50; 
//	}
//	void func()
//	{
//		cout << "Base_func" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base_fun(int a)" << endl;
//	}
//	int m_A;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 100;
//	}	
//	void func()
//	{
//		cout << "Son_func" << endl;
//	}
//
//	int m_A;
//};
//void test01()
//{
//	Son s;
//	cout << s.m_A << endl; // �����Ա���
//	cout << s.Base::m_A << endl;//�����Ա���
//}
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func(100);
//	s.Base::func();
//}
//int main()
//{
//	test02();
//	return 0;
//}

// �̳���ͬ����̬��Ա�Ĵ���ʽ

//class Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Base�ľ�̬��Ա����" << endl;
//	}
//};
//int Base::m_a = 10;
//class Son :public Base
//{
//public:
//
//	static int m_a;
//	static void func()
//	{
//		cout << "Son�ľ�̬��Ա����" << endl;
//	}
//};
//int Son::m_a = 5;
//void test01()
//{
//	// ͨ���������
//	Son s;
//	cout << s.m_a << endl;
//	cout << s.Base::m_a << endl;
//
//	// ͨ����������
//	cout << Son::m_a << endl;
//	cout << Base::m_a << endl;
//	cout << Son::Base::m_a << endl;
//}
//void test02()
//{
//	// ͨ���������
//	Son s;
//	s.func();
//	s.Base::func();
//
//	// ͨ����������
//	Son::func();
//	Base::func();
//	Son::Base::func();
//}
//int main()
//{
//	test02();
//	return 0;
//}

// ��̳�

//class Base1 // ����1
//{
//public:
//	Base1()
//	{
//		m_a = 100;
//	}
//	int m_a;
//};
//class Base2 // ����2
//{
//public:
//	Base2()
//	{
//		m_a = 200;
//	}
//	int m_a;
//};
////class ����: �̳з�ʽ ����1,�̳з�ʽ ���� 2......
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_c = 300;
//		m_d = 400;
//	}
//	int m_c;
//	int m_d;
//};
//void test01()
//{
//	Son s;
//	cout << s.Base1::m_a << endl;
//	cout << s.Base2::m_a << endl;
//	//cout << sizeof(s) << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

// ���μ̳�


class car // ���� ���� // ����Ϊ�����
{
public:
	int price;
};
	//				��publicǰ����virtua����Ϊ��̳�
class pure_gasoline_car:virtual public car // ����������
{};
class pure_electric_vehicle:virtual public car // ���綯����
{};
class hybrid_electric_vehicle :public pure_gasoline_car, public pure_electric_vehicle //��϶�������
{};
void test01()
{
	hybrid_electric_vehicle c;
	c.pure_gasoline_car::price = 10;
	c.pure_electric_vehicle::price = 20;

	cout << c.pure_gasoline_car::price << endl;
	cout << c.pure_electric_vehicle::price << endl;
	cout << c.price << endl;
}


int main()
{
	test01();
	return 0;
}
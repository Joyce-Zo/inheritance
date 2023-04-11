#include<iostream>
using namespace std;

// 继承的方式

//class A // 父类
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};

//class B :public A // 公共继承
//{
//public:
//	void func()
//	{
//		a = 1;// 父类中公共权限成员，到子类中仍然是公共权限成员
//		b = 2;// 父类中保护权限成员，到子类中仍然是保护权限成员
//		//c = 3;// 父类中私有权限成员，不可访问
//	}
//};
//void test01()
//{
//	B b;
//	b.a = 3;
//	b.b = 4;// 保护权限成员，类外不可访问
//	b.c = 4;// 私有权限成员，类外不可访问
//}

//class B :protected A // 保护继承
//{
//public:
//	void func()
//	{
//		a = 1;// 父类中公共权限成员，到子类中变成是保护权限成员
//		b = 2;// 父类中保护权限成员，到子类中仍然是保护权限成员
//		//c = 3;// 父类中私有权限成员，不可访问
//	}
//};
//void test02()
//{
//	B b;
//	b.a = 3;
//	b.b = 3;
//	b.c = 3;
//}

//class B :private A // 私有继承
//{
//public:
//	void func()
//	{
//		a = 1;// 父类中公共权限成员，到子类中变成是私有权限成员
//		b = 2;// 父类中保护权限成员，到子类中仍然是私有权限成员
//		//c = 3;// 父类中私有权限成员，不可访问
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

//class B :public A // B公共继承A
//{
//public:
//	int a;
//protected:
//	int b;
// 不可访问
//	int c;
//};
//
//class B :protected A// B保护继承A
//{
//protected:
//	int a;
//	int b;
// 不可访问
//	int c;
//};
//class B :private A // B私有继承A
//{
//private:
//	int a;
//	int b;
// 不可访问
//	int c;
//};

//class Base // 父类
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

// 继承中的构造和析构顺序


//class Base // 父类
//{
//public:
//	Base()
//	{
//		cout << "父类构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "父类析构函数" << endl;
//	}
//};
//class Son :public Base // 子类
//{
//public:
//	Son()
//	{
//		cout << "子类构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "子类析构函数" << endl;
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

// 继承中的同名成员处理

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
//	cout << s.m_A << endl; // 子类成员输出
//	cout << s.Base::m_A << endl;//父类成员输出
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

// 继承中同名静态成员的处理方式

//class Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Base的静态成员函数" << endl;
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
//		cout << "Son的静态成员函数" << endl;
//	}
//};
//int Son::m_a = 5;
//void test01()
//{
//	// 通过对象访问
//	Son s;
//	cout << s.m_a << endl;
//	cout << s.Base::m_a << endl;
//
//	// 通过类名访问
//	cout << Son::m_a << endl;
//	cout << Base::m_a << endl;
//	cout << Son::Base::m_a << endl;
//}
//void test02()
//{
//	// 通过对象访问
//	Son s;
//	s.func();
//	s.Base::func();
//
//	// 通过类名访问
//	Son::func();
//	Base::func();
//	Son::Base::func();
//}
//int main()
//{
//	test02();
//	return 0;
//}

// 多继承

//class Base1 // 父类1
//{
//public:
//	Base1()
//	{
//		m_a = 100;
//	}
//	int m_a;
//};
//class Base2 // 父类2
//{
//public:
//	Base2()
//	{
//		m_a = 200;
//	}
//	int m_a;
//};
////class 子类: 继承方式 父类1,继承方式 父类 2......
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

// 菱形继承


class car // 父类 车类 // 被称为虚基类
{
public:
	int price;
};
	//				在public前加上virtua，变为虚继承
class pure_gasoline_car:virtual public car // 纯汽油汽车
{};
class pure_electric_vehicle:virtual public car // 纯电动汽车
{};
class hybrid_electric_vehicle :public pure_gasoline_car, public pure_electric_vehicle //混合动力汽车
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
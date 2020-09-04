//#include<iostream>
//
//using namespace std;
//
//class A {
//public:
//	A() { g(); }
//	~A() { cout << "~A::A()"; }
//	void f() { cout << "A::f()"; }
//	virtual void g() { cout << "A::g()"; }
//};
//class B :public A{
//public:
//	B() { g(); }
//	~B() { cout << "~B::B()"; }
//	void f() { cout << "B::f()"; }
//	void g() { cout << "B::g()"; }
//};
//
//int main()
//{
//	A *p = new B;
//	p->f();
//	p->g();
//	delete p;
//}
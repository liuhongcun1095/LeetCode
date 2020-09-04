//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
//class Grand
//{
//public:
//	void Show()
//	{
//		cout << "Ground Show()" << endl;
//	}
//	virtual void fShow()
//	{
//		cout << "Ground fShow()" << endl;
//		Show();
//	}
//};
//
//class Father :public Grand
//{
//public:
//	virtual void Show()
//	{
//		cout << "Father Show()" << endl;
//	}
//	void fShow()
//	{
//		cout << "Father fShow()" << endl;
//		Grand::fShow();
//	}
//};
//
//class Son :public Father
//{
//public:
//	virtual void Show()
//	{
//		cout << "Son Show()" << endl;
//	}
//};
//
//int main()
//{
//	Father father;
//	Son son;
//	Grand* p1 = &father;
//	Father& p2 = son;
//	Father* p3 = &son;
//
//	p1->Show();
//	p3->Show();
//
//	p1->fShow();
//
//	return 0;
//}
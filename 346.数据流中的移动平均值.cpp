////数据流中的移动平均值
////给定一个整数数据流和一个窗口大小，根据该滑动窗口的大小，计算其所有整数的移动平均值
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//class  MovingAverage 
//{
//private:
//	queue<int> q;
//	int size;
//	double sum;
//
//public:
//	//初始化
//	MovingAverage(int size)
//	{
//		this->size = size;
//		sum = 0;
//	}
//	//计算经过滑动后的数值
//	double next(int val)
//	{
//		if (q.size() >= size)
//		{
//			sum -= q.front();
//			q.pop();
//		}
//		q.push(val);
//		sum += val;
//		return sum / q.size();
//	}
//
//};
//
//int main()
//{
//	MovingAverage m = MovingAverage(3);
//	cout << m.next(1) << endl;
//	cout << m.next(10) << endl;
//	cout << m.next(3) << endl;
//	cout << m.next(5) << endl;
//	return 0;
//}
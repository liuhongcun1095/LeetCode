////两个栈实现最小栈，用一个栈存元素，一个栈存最小值
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//class MinStack
//{
//private:
//	stack<int> s,min_s;
//
//public:
//	MinStack()
//	{
//		while (!s.empty())
//		{
//			s.pop();
//		}
//		while (!min_s.empty())
//		{
//			min_s.pop();
//		}
//	}
//	void push(int x)
//	{
//		if (s.empty())
//		{
//			s.push(x);
//			min_s.push(x);
//		}
//		else
//		{
//			s.push(x);
//			if (x > min_s.top())
//			{
//				min_s.emplace(min_s.top());
//			}
//			else
//			{
//				min_s.emplace(x);
//			}
//		}
//	}
//	bool pop()
//	{
//		if (s.empty())
//		{
//			while (!min_s.empty())
//			{
//				min_s.pop();
//			}
//			return false;
//		}
//		else
//		{
//			s.pop();
//			min_s.pop();
//			return true;
//		}
//	}
//	int top()
//	{
//		return s.top();
//	}
//	int getMin()
//	{
//		return min_s.top();
//	}
//};
//
//int mian()
//{
//	MinStack* obj = new MinStack();
//	obj->push(5);
//	obj->pop();
//	int param_3 = obj->top();
//	int param_4 = obj->getMin();
//	return 0;
//}
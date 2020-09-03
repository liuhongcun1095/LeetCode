////用vector创建队列类，实现一个队列
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class MyQueue 
//{
//private:
//	vector<int> data;
//	int p_start;
//public:
//	//初始化
//	MyQueue() { p_start = 0; }
//	//入队
//	bool enQueue(int x)
//	{
//		data.push_back(x);
//		return true;
//	}
//	//出队
//	bool deQueue()
//	{
//		if (isEmpty())
//			return false;
//		else
//		{
//			p_start++;
//			return true;
//		}
//	}
//	//获得元素
//	int Front()
//	{
//		return data[p_start];
//	}
//	//判断是否为空
//	bool isEmpty() {
//		return p_start >= data.size();
//	}
//	
//};
//
//int main() {
//	MyQueue q;
//	q.enQueue(5);
//	q.enQueue(3);
//	if (!q.isEmpty()) {
//		cout << q.Front() << endl;
//	}
//	q.deQueue();
//	if (!q.isEmpty()) {
//		cout << q.Front() << endl;
//	}
//	q.deQueue();
//	if (!q.isEmpty()) {
//		cout << q.Front() << endl;
//	}
//}
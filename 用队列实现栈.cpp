////用队列实现栈（1个队列 或 2个队列）
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//////单队列实现栈
////class MyStack {
////private:
////    queue<int> q;
////public:
////    /** Initialize your data structure here. */
////    MyStack() {
////        while (!q.empty())
////            q.pop();
////    }
////
////    /** Push element x onto stack. */
////    void push(int x) {
////        q.push(x);
////        int sz = q.size()-1;
////        while (sz--)
////        {
////            q.emplace(q.front());
////            q.pop();
////        }
////    }
////
////    /** Removes the element on top of the stack and returns that element. */
////    int pop() {
////        if (!this->empty())
////        {
////            int top_temp = q.front();
////            q.pop();
////            return top_temp;
////        }
////        return -1;
////    }
////
////    /** Get the top element. */
////    int top() {
////        if (!this->empty())
////           return q.front();
////        return -1;
////    }
////
////    /** Returns whether the stack is empty. */
////    bool empty() {
////        return q.empty();
////    }
////};
//
////两个队列实现栈
//class MyStack {
//private:
//    queue<int> q_in, q_out;
//public:
//    /** Initialize your data structure here. */
//    MyStack() {
//        while (!q_in.empty())
//            q_in.pop();
//        while (!q_out.empty())
//            q_out.pop();
//    }
//
//    /** Push element x onto stack. */
//    void push(int x) {
//        q_in.emplace(x);
//    }
//
//    /** Removes the element on top of the stack and returns that element. */
//    int pop() {
//        if (!this->empty())
//        {
//            int size = q_in.size()-1;
//            while (size--)
//            {
//                q_out.emplace(q_in.front());
//                q_in.pop();
//            }
//            int ret = q_in.front();
//            q_in = q_out;
//            while (!q_out.empty())
//            {
//                q_out.pop();
//            }
//            return ret;
//        }
//        return -1;
//    }
//
//    /** Get the top element. */
//    int top() {
//        if (!this->empty())
//        {
//            int ret = this->pop();
//            q_in.emplace(ret);
//            return ret;
//        }
//        return -1;
//    }
//
//    /** Returns whether the stack is empty. */
//    bool empty() {
//        return q_in.empty();
//    }
//};
//
//
//int main()
//{
//    MyStack* obj = new MyStack();
//    obj->push(5);
//    int param_2 = obj->pop();
//    int param_3 = obj->top();
//    bool param_4 = obj->empty();
//    return 0;
//}

////�������� ˫ָ�� || ��ϣ��
////����һ�������ж��������Ƿ��л���
//#include<iostream>
//#include<unordered_map>
//
//using namespace std;
//
//struct ListNode
//{
//    int val;
//    ListNode* next;
//    ListNode(int x) :val(x), next(nullptr) {}
//};
//
//////ʹ��˫ָ�루ע���ж�fast->next��
////class Solution {
////public:
////    bool hasCycle(ListNode* head) {
////        ListNode* slow=head, * fast=head;
////        if (head == nullptr) return false;
////        while (fast->next)
////        {
////            if (slow->next)
////                slow = slow->next;
////            else 
////                return false;
////            if (fast->next->next)
////                fast = fast->next->next;
////            else
////                return false;
////            if (slow == fast)
////                return true;
////        }
////        return false;
////    }
////};
//
////��ϣ��ⷨ
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        unordered_map<ListNode*, bool> mp;
//        if (head == nullptr) return false;
//        while (head->next)
//        {
//            if (mp.find(head) != mp.end())
//                return true;
//            mp[head] = true;
//            head = head->next;
//        }
//        return false;
//    }
//};
//
//int main()
//{
//
//	return 0;
//}
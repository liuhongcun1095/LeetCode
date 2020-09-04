////设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有
////两个属性：val 和 next。val 是当前节点的值，next 是指向下一个节点的指针
//// 引用。如果要使用双向链表，则还需要一个属性 prev 以指示链表中的上一个节点。
////假设链表中的所有节点都是 0 - index 的。
////在链表类中实现这些功能：
////get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回 - 1。
////addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
////addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
////addAtIndex(index, val)：在链表中的第 index 个节点之前添加值为 val  的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
////deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。
//
//#include<iostream>
//
//using namespace std;
//
//class MyLinkedList {
//public:
//    //定义链表结点结构体
//    struct LinkedNode
//    {
//        int val;
//        LinkedNode* next;
//        LinkedNode(int x) :val(x), next(nullptr) {}
//    };
//    /** Initialize your data structure here. */
//    MyLinkedList() {
//        size = 0;
//        p = nullptr;
//    }
//
//    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
//    int get(int index) {
//        if (index < size && index>=0)
//        {
//            LinkedNode* q = p;
//            while (index--)
//            {
//                q = q->next;
//            }
//            return q->val;
//        }
//        return -1;
//    }
//
//    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
//    void addAtHead(int val) {
//        LinkedNode* q = new LinkedNode(val);
//        q->next = p;
//        p = q;
//        size++;
//        return;
//    }
//
//    /** Append a node of value val to the last element of the linked list. */
//    void addAtTail(int val) {
//        if (p != nullptr)
//        {
//            LinkedNode* q = p;
//            while (q->next)
//            {
//                q = q->next;
//            }
//            LinkedNode* new_node = new LinkedNode(val);
//            q->next = new_node;
//            size++;
//        }
//        return;
//    }
//
//    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
//    void addAtIndex(int index, int val) {
//        if (index == 0)
//        {
//            addAtHead(val);
//        }
//        else if (index == size)
//        {
//            addAtTail(val);
//        }
//        else if (index > 0 && index < size)
//        {
//            LinkedNode* q = p;
//            index--;
//            while (index--)
//            {
//                q = q->next;
//            }
//            LinkedNode *prev = q;
//            LinkedNode *next = q->next;
//            LinkedNode *cur = new LinkedNode(val);
//            prev->next = cur;
//            cur->next = next;   
//            size++;
//        }
//        return;
//    }
//
//    /** Delete the index-th node in the linked list, if the index is valid. */
//    void deleteAtIndex(int index) {
//        if (index == 0)
//        {
//            p = p->next;
//            size--;
//        }
//        else if (index > 0 && index < size)
//        {
//            index--;
//            LinkedNode* q = p;
//            while (index--)
//            {
//                q=q->next ;
//            }
//            q->next = q->next->next;
//            size--;
//        }
//        return;
//    }
//private:
//    int size;
//    LinkedNode* p;
//};
//
//int main()
//{
//    MyLinkedList* obj = new MyLinkedList();
//    obj->addAtIndex(0, 10);
//    obj->addAtIndex(0, 20);
//    obj->addAtIndex(1, 30);
//    cout<<obj->get(0);
//	return 0;
//}
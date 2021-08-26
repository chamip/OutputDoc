#include <iostream>
#include <vector>
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x,ListNode* next) :val(x), next(next) {};
};

class reverseLinkedList {
public:
    reverseLinkedList();
    ~reverseLinkedList();
    ListNode* getHead();
    void addNode(int val);
    void printLinkedList();
    ListNode* reverseList(ListNode* pHead);
private:
    ListNode* _dummyHead;
    int _size; 
};

reverseLinkedList::reverseLinkedList()
{
    _dummyHead = new ListNode();
    _size = 0;
}

reverseLinkedList::~reverseLinkedList()
{
}

ListNode* reverseLinkedList::getHead() {
    return _dummyHead->next;
}

void reverseLinkedList::addNode(int val) {
    ListNode* tmp = new ListNode(val);
    ListNode* cur = _dummyHead;
    while(cur->next != nullptr) {
        cur = cur->next;
    }
    cur->next = tmp;
    _size++;
    return ;
}

void reverseLinkedList::printLinkedList()  {
    using namespace std;
    ListNode* cur = _dummyHead;
    while(cur->next != nullptr) {
        cout << cur->next->val << " ";
        cur = cur->next;
    }
    cout << endl;
    return ;
}

ListNode* reverseLinkedList::reverseList(ListNode* pHead) {
    if(pHead == nullptr) {
            return nullptr;
        }
        ListNode* cur = pHead;
        ListNode* pre;
        pre = nullptr;
        ListNode* nextNode;
        while(cur != nullptr) {
            nextNode = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nextNode;
        }
        _dummyHead->next = pre;
        return pre;
    // return nullptr;
}

int main()
{
    using namespace std;
    reverseLinkedList obj;
    vector<int> arr = {1, 2, 3, 4, 5};
    for(int i = 0; i < arr.size(); i++) {
        obj.addNode(arr[i]);
    }
    obj.printLinkedList();
    cout << "*******************************" << endl;
    ListNode* pre = obj.getHead();
    ListNode* head = obj.reverseList(pre);
    obj.printLinkedList();
    return 0;
}
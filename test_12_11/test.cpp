#include <iostream>
using namespace std;

struct node {
    int data;
    node* next; 
};

node* CreateList() {
    node* s; // 新节点的指针
    node* p = nullptr; // 用于遍历的指针
    node* head = nullptr; // 头指针

    while (true) {
        s = new node; // 创建一个新节点
        cin >> s->data; // 输入数据
        if (s->data == 0) { // 如果输入为 0，结束输入
            delete s; // 释放当前节点的内存
            break;
        }

        // 设置下一个指针
        s->next = nullptr; // 初始化新节点的 next 指针为 nullptr

        if (head == nullptr) {
            head = s; // 第一个节点
        }
        else {
            p->next = s; // 将上一个节点的 next 指向当前节点
        }
        p = s; // 移动 p 到当前节点
    }

    return head; // 返回链表的头指针
}

void PrintList(node* head) {
    node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void DeleteList(node* head) {
    while (head != nullptr) {
        node* temp = head; // 存储当前节点
        head = head->next; // 移动到下一个节点
        delete temp; // 释放当前节点
    }
}

int main() {
    cout << "请输入节点数据，以0结束输入：" << endl;
    node* head = CreateList(); // 创建链表
    cout << "链表中的数据是：";
    PrintList(head); // 打印链表数据
    DeleteList(head); // 释放链表内存
    return 0;
}

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next; 
};

node* CreateList() {
    node* s; // �½ڵ��ָ��
    node* p = nullptr; // ���ڱ�����ָ��
    node* head = nullptr; // ͷָ��

    while (true) {
        s = new node; // ����һ���½ڵ�
        cin >> s->data; // ��������
        if (s->data == 0) { // �������Ϊ 0����������
            delete s; // �ͷŵ�ǰ�ڵ���ڴ�
            break;
        }

        // ������һ��ָ��
        s->next = nullptr; // ��ʼ���½ڵ�� next ָ��Ϊ nullptr

        if (head == nullptr) {
            head = s; // ��һ���ڵ�
        }
        else {
            p->next = s; // ����һ���ڵ�� next ָ��ǰ�ڵ�
        }
        p = s; // �ƶ� p ����ǰ�ڵ�
    }

    return head; // ���������ͷָ��
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
        node* temp = head; // �洢��ǰ�ڵ�
        head = head->next; // �ƶ�����һ���ڵ�
        delete temp; // �ͷŵ�ǰ�ڵ�
    }
}

int main() {
    cout << "������ڵ����ݣ���0�������룺" << endl;
    node* head = CreateList(); // ��������
    cout << "�����е������ǣ�";
    PrintList(head); // ��ӡ��������
    DeleteList(head); // �ͷ������ڴ�
    return 0;
}

#include <bits/stdc++.H>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }

return NULL;
}

int main(){
Node* head = new Node(10);
Node* tail = head;

insertAtHead(head, 7);
insertAtHead(head, 13);
insertAtHead(head, 5);
insertAtHead(head, 1);
//1-5-13-7-10
tail->next = head;
// print(head);

if(floydDetectLoop(head)){
    cout<<"Cycle Detected"<<endl;
}
else{
    cout<<"Not Detected"<<endl;
}


 return 0;
}

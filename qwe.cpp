#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
};

int main(){

    int n,del;
    cin>>n;
    int a[n];
  for(int i=0;i<n;++i){
      cin>>a[i];
  } 
  cin>>del;
    int len = sizeof(a) / sizeof(int);

    node tail;
    tail.val = a[len - 1];
    tail.next = NULL;

    node * temp = &tail;

    for(int i = len - 2; i >=0; --i){
        node * n = new node();
        n->val = a[i];
        n->next = temp;
        temp = n; 
    }

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0; 
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <queue>

#define ll long long
#define uint unsigned int
#define ull unsigned ll


using namespace std;
const ll MAXN = 2e9+2;
const ll SIZE = 2e5+10;
int a[SIZE];
vector<bool> used(SIZE,false);

struct node{
 int val;
 node * next;
 node * prev;
 node(int s){
  val = s;
  next = NULL;
  prev = NULL;
 }
 node(){
  next = NULL;
  prev = NULL;
 }
};

class deq{
 private:
  node * head;
  node * tail;
 public:
  deq(){
   head = NULL;
   tail = NULL;
  }
  void add_front(int s){
   node * temp = new node(s);
   if(head != NULL){
    head->prev = new node(s);
    head->prev->next = head;
    head = head->prev;
   }else{
    head = temp;
    tail = temp;
   }
  }
  void add_back(int s){
   node * temp = new node(s);
   if(tail != NULL){
    tail->next = new node(s);
    tail->next->prev = tail;
    tail = tail->next;
   }else{
    tail = temp;
    head = temp;
   }
  }
  void erase_front(){
   head = head->next;
   if(head != NULL){
    head->prev = NULL;
   }else{
    tail = NULL;
   }
  }
  void erase_back(){
   tail = tail->prev;
   if(tail != NULL){
    tail->next = NULL;
   }else{
    head = NULL;
   }
  }
  void del(int x){
   node * temp = head;
   while(temp->val != x && temp != NULL){
    temp=temp->next;
   }
   if(temp == NULL) return;
   else if(temp == head) erase_front();
   else if(temp == tail) erase_back();
   else{
     temp->next->prev = temp->prev;
     temp->prev->next = temp->next;
   }
  }
  void print(){
   node * temp = head;
   while(temp != NULL){
    cout << temp->val << " ";
    temp = temp->next;
   }
   cout << endl;
  }
  void getNth(int x){
   int it = 0;
   node * temp = head;
   while(temp != NULL){
    if(it == x){
     cout << temp->val << endl;
     return;
    }
    it++;
    temp = temp->next;
   }
  }
  void cont(int x){
   int cnt = 0;
   node * temp = head;
   while(temp != NULL){
    int y = temp->val;
    if(y == x){
     cnt++;
    }
    temp = temp->next;
   }
   cout << cnt << endl;;
  }
};



int main(){  
 deq d = deq();
 int n; cin >> n;
 for(int i = 1; i <= n; i++){
  string s; cin >> s;
  if(s == "insertFirst"){
   int x; cin >> x;
   d.add_front(x);
  }else if(s == "insertLast"){
   int x; cin >> x;
   d.add_back(x);
  }else if(s == "cnt"){
   int x; cin >> x;
   d.cont(x);
  }else if(s == "getNth"){
   int x; cin >> x;
   d.getNth(x);
  }else if(s == "deleteLast"){
   d.erase_back();
  }else if(s == "deleteFirst"){
   d.erase_front();
  }else if(s == "delete"){
   int x; cin >> x;
   d.del(x);
  }
 }
 d.print();
 return 0;
}
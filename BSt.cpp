#include <iostream>
using namespace std;

struct node{
    int val;
    node * left;
    node * right;
    node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

node * add(node * root, int x){
    if(root == NULL) return new node(x);
    if(root->val < x){
        root->right = add(root->right, x);
    }else if(root->val > x){
        root->left = add(root->left, x);
    }
    return root;
}

node * find(node * root, int x){
    if(root == NULL) return NULL;
    if(root->val == x) return root;
    if(root->val > x) return find(root->left, x);
    return find(root->right, x);
}

void print(node * root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}

int main(){

    node * root = NULL;
  int qw,we;
  cin>>qw>>we;
    int a[10000];
    int b[1000][1000];
for (int i=0;i<qw;++i){
    cin>>a[i];
}for(int i=0;i<2;++i){
for(int j=0;j<we;++j){
    cin>>b[i][j];
}
}
    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i < n; ++i){
        root = add(root, a[i]);
    }

    print(root);

    int m = sizeof(b) / sizeof(int);

    cout << endl;

    for(int i = 0; i < m; ++i){
        for(int j=0;j<m;++j){
        if(find(root, b[i][j]) == NULL){
            cout  << b[i][j] << endl;
        }else{
            cout  << b[i][j]<< endl;
        }}
    }

    return 0;
}

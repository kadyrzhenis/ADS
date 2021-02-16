#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	int cnt;
	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
		cnt = 1;
	} 
};

int count;

Node* getMin(Node* root) {
	while (root->left != NULL) {
		root = root->left;
	}
	return root;
}

Node* add(Node* root, int data) {
	if (root == NULL) {
		return new Node(data);
	} else if (root->data > data) {
		if (root->left == NULL) {
			root->left = new Node(data);
		} else {
			root->left = add(root->left, data);
		}
	} else if (root->data < data) {
		if (root->right == NULL) {
			root->right = new Node(data);
		} else {
			root->right = add(root->right, data);
		}
	} else{
		root->cnt++;
	}
	return root;
}

Node* deleteNode(Node* root, int data) {
	if (root == NULL) {
		return NULL;
	} else if (root->data > data) {
		root->left = deleteNode(root->left, data);
		return root;
	} else if (root->data < data) {
		root->right = deleteNode(root->right, data);
		return root;
	} else if(root->cnt==1){
		if (root->left == NULL && root->right == NULL) {
			delete root;
			return NULL;
		} else if (root->right == NULL) {
			Node* temp = root->left;
			delete root;
			return temp;
		} else if (root->left == NULL) {
			Node* temp = root->right;
			delete root;
			return temp;
		} else {
			Node* temp = getMin(root->right);
			root->data = temp->data;
			root->right = deleteNode(root->right, temp->data);
			return root;
		}
	} else{
		root->cnt--;
		return root;
	}
}

Node* find(Node* root, int x) {
	if (root == NULL) {
		return NULL;
	} else if (root->data == x) {
		return root;
	} else if (root->data < x) {
		return find(root->right, x);
	} else {
		return find(root->left, x);
	}
}

void cntt(Node *root, int k){
	if (root==NULL)
	{
		return;
	}
	if (root->data == k)
	{
		count++;
		cntt(root->left, k);
	}
	if (root->data > k)
	{
		cntt(root->left, k);
	}else{
		cntt(root->right, k);
	}
}

void cnttt(Node *root, int k){

}

int main(int argc, char const *argv[])
{
	int n;
	Node *root = NULL;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;
		if (s=="insert")
		{
			int q;
			cin>>q;
			root = add(root, q);
		}
		if (s=="cnt")
		{
			int q;
			cin>>q;
			Node *nn = find(root, q);
			if (nn==NULL)
			{
				cout<<0<<endl;
			} else{
				cout<<nn->cnt<<endl;
			}
		}
		if (s=="delete")
		{
			int q;
			cin>>q;
			root = deleteNode(root, q);
		}
	}
	return 0;
}
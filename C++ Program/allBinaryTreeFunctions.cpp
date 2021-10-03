#include<iostream>
#include<queue>
using namespace std;

// tree : 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1 


// --------- Tree Node Class ------ //
class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

// --------- Pre Order Build Tree -------- //

Node * preOrderBuild(){
	int data;
	cin>>data;

	Node * root = new Node(data);
	if(data == -1){
		return NULL;
	}
	root->left = preOrderBuild();
	root->right = preOrderBuild();

	return root;
}

// ---------- level Order Build ------- //

Node * levelOrderBuild(){
	queue<Node*> q;
	int data;
	cin>>data;

	Node * root = new Node(data);
	q.push(root);

	while(!q.empty()){
		Node * current = q.front();
		q.pop();
		int c1,c2;
		cin>>c1>>c2;

		if(c1 != -1){
			current->left = new Node(c1);
			q.push(current->left);
		}
		if(c2 != -1){
			current->right = new Node(c2);
			q.push(current->right);
		}
	}  
	return root;
}

// -------- Inorder Print -------- //

void inorderPrint(Node * root){
	if(root == NULL){
		return;
	}

	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}

// ------- Preorder Print -------- //

void preorderPrint(Node * root){
	if(root == NULL){
		return;
	}

	cout<<root->data<<" ";
	preorderPrint(root->left);
	preorderPrint(root->right);
}

// ---------- Postorder print -------- //

void postorderPrint(Node*root){
	if(root == NULL){
		return;
	}
	postorderPrint(root->left);
	preorderPrint(root->right);
	cout<<root->data<<" ";
}

// --------- level order print ------- //

void levelOrderPrint(Node * root){
	queue<Node *> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		Node * temp = q.front();
        if(temp == NULL){
        	cout<<endl;
        	q.pop();

        	if(!q.empty()){
        		q.push(NULL);
        	}
		}
		else{
			cout<<temp->data<<" ";
			q.pop();

			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

// ----------  height of binary tree function ------- //

int height(Node * root){
	if(root == NULL){
		return 0;
	}

	int h1 = height(root->left);
	int h2 = height(root->right);

	return 1+max(h1,h2); 
}


// ---------- daimeter ------

int diameter(Node * root){
	if(root == NULL){
		return 0;
	}

	int D1 = height(root->left)+height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1,max(D2,D3));

}

// --------- diameter optimized --------- //

class HDpair{
public:
	int height;
	int diameter;
};

HDpair optDiameter(Node * root){
	HDpair p;
	if(root == NULL){
		p.height = p.diameter = 0;
		return p;
	}

	//otherwise
	HDpair Left = optDiameter(root->left);
	HDpair Right = optDiameter(root->right);

	p.height = max(Left.height,Right.height) + 1;

	int D1 = Left.height + Right.height;
	int D2 = Left.diameter;
	int D3 = Right.diameter;

	p.diameter = max(D1,max(D2,D3));
	return p;
}

int main(){

	Node * root = preOrderBuild();
	preorderPrint(root);
	cout<<endl;
	inorderPrint(root);
	cout<<endl;
	postorderPrint(root);
	cout<<endl;
	levelOrderPrint(root);	
	cout<<"height of tree is : "<<height(root);
	cout<<endl;
	cout<<"Diameter of tree is : "<<diameter(root);
	cout<<endl;
	cout<<"Diameter of tree is : ";
	cout<<optDiameter(root).diameter;
	return 0;
}
#include <iostream>
#include<queue>

using namespace std;

struct tree {   
int x; // Node's ID 
struct tree *l; // pointer to the left subtree 
struct tree *r; // pointer to the right subtree 


public:
    tree (int data) {
        this->x=data;
        this->l = nullptr;
        this->r = nullptr;
    }
};

tree* insertion (tree* root) {

    cout<<"Enter node data:"<<endl;
    int data;
    cin>>data;

    root = new tree(data);

    if(data == -1){
        return nullptr;
    }

    cout<<"Enter data for left child of "<<data<<endl;
    root->l = insertion(root->l);
    cout<<"Enter data for right child of "<<data<<endl;
    root->r = insertion(root->r);

    return root;

}

void levelOrderTraversal(tree * root){
    queue<tree*> q;
    q.push(root);
    q.push(NULL);   // separator after root

    while(!q.empty()){

        tree* temp = q.front();
        q.pop();

        if(temp==NULL){     // last level completely traversed
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);   // separator after each level
            }
        }

        else{
            cout<<temp->x<<" ";
            if(temp->l)
                q.push(temp->l);
            if(temp->r)
                q.push(temp->r);
        }
    }
}


void inorder(tree* root){   // inorder traversal --- LNR
    if(root==NULL){
        return;
    }

    inorder(root->l);
    cout<<root->x<< " ";
    inorder(root->r);
}


void preorder(tree* root){  // preorder traversal --- NLR
    if(root==NULL){
        return;
    }

    cout<<root->x<< " ";
    preorder(root->l);
    preorder(root->r);
}


void postorder(tree* root){ // postorder traversal --- LRN
    if(root==NULL){
        return;
    }

    postorder(root->l);
    postorder(root->r);
    cout<<root->x<< " ";
} 




int main()
{
    tree * root = nullptr;
    root = insertion(root);
    
    //1 2 -1 3 -1 -1 4 5 -1 -1 -1

    cout<<endl<<"Level order traversal is: ";
    levelOrderTraversal(root);


    cout<<endl<<"Inorder traversal is: ";
    inorder(root);

    cout<<endl<<"Preorder traversal is: ";
    preorder(root);

    cout<<endl<<"postorder traversal is: ";
    postorder(root);

    
}

#include<iostream>
using namespace std;

struct node
{
    int key;
    struct node* left;
    struct node* right;

};

struct node* insert(struct node* N, int key) // (NULL,10)

{

if (N==NULL) // tree is empty or at leaf.
{
struct node* tmp= new node;
tmp->key=key;
tmp->left=NULL;
tmp->right=NULL;

return tmp; // A2
}

else if (key < N->key)
{
  N->left=insert(N->left,key); // (NULL,10)
  
    /* code */
}

else if (key > N->key)
{

N->right=insert(N->right,key);

}

return N;
}







int main()
{ struct node* root= NULL; // 50,30,20,40,70,60,80
  root=insert(root,50);
  insert(root,20);




   return 0; 
}
/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
/* Computes the height of binary tree with given root.  */
void h_utility(Node * node,int level,int &height){
    if(node==NULL){
        return ;
    }
    if(node->left==NULL&&node->right==NULL){
            height=max(height,level);
        return ;
    }
    
    h_utility(node->left,level+1,height);
    h_utility(node->right,level+1,height);
    
}


int height(Node* node)
{
   // Your code here
   int height=0;
   h_utility(node,1,height);
   return height;
   
   
}

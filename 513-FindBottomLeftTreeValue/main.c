#include <stdio.h>


//Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
void find(struct TreeNode* root,int* maxdepth,int* leftval,int depth){
    if(root==NULL){
        return ;
    }

    find(root->left,maxdepth,leftval,depth+1);
    find(root->right,maxdepth,leftval,depth+1);

    if((depth)>(*maxdepth)){
        (*maxdepth)=(depth);
        (*leftval)=root->val;
    }
}
int findBottomLeftValue(struct TreeNode* root) {
    int maxdepth=0;
    int leftval=root->val;
    find(root,&maxdepth,&leftval,0);
    return leftval;

}
int main() {
    printf("Hello, World!\n");
    return 0;
}
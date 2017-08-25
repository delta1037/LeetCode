#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q);

int main() {
    //无测试数据
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(!p&&!q){
        return true;
    }
    else if((p&&q)&&p->val==q->val){
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
    else{
        return false;
    }
}
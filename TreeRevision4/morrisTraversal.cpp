#include<iostream>
using namespace std;
vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        TreeNode*curr=root;
        while(curr){
            if(curr->left!=NULL){
                TreeNode*pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }
                else{
                    pred->right=NULL;
                    v.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{
                v.push_back(curr->val);
                curr=curr->right;
            }
        }
        return v;
    }
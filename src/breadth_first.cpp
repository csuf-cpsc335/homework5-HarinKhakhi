#include "tree_algorithms.h"

void _breadth_first(TreeNode* root, vector<int>& answer){
    if(root == nullptr) return;
    
    // current level
    vector<TreeNode*> level;
    level.push_back(root);

    // iterate until we have exhausted all nodes
    while(level.size()!=0){
        // to store next level nodes that will be
        // traversed in next iteration
        vector<TreeNode*> newLevel;

        // for each node in current level, add all its 
        // non-null child to nextLevel
        for(TreeNode* node: level){

            // add current node data to answer
            answer.push_back(node -> data);

            // add if non-null
            if(node->left)
            newLevel.push_back(node->left);

            // add if non-null
            if(node->right)
            newLevel.push_back(node->right);
        }

        // building next level
        level.clear();
        for(TreeNode* node: newLevel)
        level.push_back(node);
    }
}

vector<int> breadth_first(TreeNode* node){
    vector<int> answer;
    _breadth_first(node, answer);

    return answer;
}
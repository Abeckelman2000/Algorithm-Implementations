2) Binary Tree Level Order Traversal
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
-----------------------------------------------------------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    	TreeNode* temp;
    	// contains a list for each level containing nodes at each level
    	vector<vector<int>> results;
    	vector<int> level;
    	queue<TreeNode*> q;
    	int len  = 0;

    	if(!root){
    		return results;
    	}

    	// BFS
    	q.emplace(root);
    	while(!q.empty()){
    		len = q.size();
    		level.clear();
    		for(int i = 0; i < len; i++){
    			temp = q.front();
    			q.pop();
    			//add node to this level's list
    			level.push_back(temp->val);

    			if(temp->left){
    			   q.emplace(temp->left);
    			}
    			if(temp->right){
    			   q.emplace(temp->right);
    			}
    		}
    		// add the completed level to the list
    		results.push_back(level);

    	}
    	return results;
    }
};

# Using BFS to find the depth of a Binary Search Tree in Python and C++

# Definition for a binary tree node.
 class TreeNode(object):
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
         
class Solution(object):
    def maxDepth(self, root):
        #if the tree is empty
        if not root:
            return 0
        
        q = deque()
        
        q.append(root)
        depth = 0
        while q:
            for _ in range(len(q)):
                node = q.popleft()
                if node.left:
                    q.append(node.left)
            
                if node.right:
                    q.append(node.right)
            
            depth += 1
        return depth

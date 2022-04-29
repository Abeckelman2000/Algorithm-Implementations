# Binary Tree Level Order Traversal
#Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

class Solution(object):
    def levelOrder(self, root):
        # contains a list for each level containing nodes at each level
        results = []

        if not root:
            return results
        # BFS
        q = deque()
        q.append(root)
        while q:
            level = []
            # for each node on this level
            for i in range(len(q)):
                node = q.popleft()
                if node.left:
                    q.append(node.left)

                if node.right:
                    q.append(node.right)
                # add node to this level's list
                level.append(node.val)
            # add the completed level to the list
            results.append(level)
        return results

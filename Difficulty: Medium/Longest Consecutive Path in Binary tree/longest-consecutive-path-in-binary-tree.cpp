/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
   int ans = 1;

    void dfs(Node* node, Node* parent, int len) {
        if (!node) return;

        if (parent && node->data == parent->data + 1)
            len++;
        else
            len = 1;

        ans = max(ans, len);

        dfs(node->left, node, len);
        dfs(node->right, node, len);
    }
    int longestConsecutive(Node* root) {
        // code here
        if (!root) return -1;

        dfs(root, nullptr, 1);

        return (ans == 1) ? -1 : ans;
    }
};
#include <vector>

using namespace std;

 //Definition for a binary tree node, used in the examples below.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

/*
The following are all examples of the different methods of binary tree traversal. 
They are also examples of recursion!

These examples work on a struct, TreeNode, defined above, whose left and right nodes are other TreeNodes. 
When traversing the tree, you can call these example functions on those nodes, which will add their integer 
to a class-specific result vector. You can see how the order is changed from Pre to In to Post order 
traversals simply by changing the time when the result is fed back outward.

NOTE: I am curious how this works behind the scenes however, because intuitively, it seems like you would be returning the result vector repeatedly.

Given an example, the sorting methods below show how different results can be obtained:

Input: [1,null,2,3]
           1
            \
             2
            /
           3

*/

class Solution {
public:
    vector<int> result;


    /*
    This is an example of "Pre-Order Traversal", where the data is read from the root BEFORE traversing to the next node.
    The root is visited first, then the left tree, then the right tree.

    In such a situation, give the above tree structure, the result will be [1, 2, 3].
    */
    vector<int> preorderTraversal(TreeNode* root) {
        if (root != NULL)
        {
            result.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return result;
    }
    /* 
    This is an example of "In-Order Traversal", where the crawler moves all the way to the left-most-possible node, and then begins 
    pushing data into the array as it moves rightward. 
    
    The left tree is visited first, then the root, then the right tree.

    The produced result will be [1, 3, 2].
     */
    vector<int> inorderTraversal(TreeNode* root) {
        if (root != NULL) {
            inorderTraversal(root->left);
            result.push_back(root->val);
            inorderTraversal(root->right);
        }
        
        return result;
    }

    /*
    This is an example of "Post-Order Traversal", where the left subtree is read first, then the right subtree, and then the root.

    
    It's worth noting that when you delete a directory, It's deleted in post-order (that is, the child TreeNodes are deleted before the Root node.)
    Post-Order is also widely used in mathematical expression.

    The produced result will be [3, 2, 1].
     */

    vector<int> postorderTraversal(TreeNode* root) {
        if (root != NULL) {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            result.push_back(root->val);
        }
        
        return result;
    }
};
/*

180. Create & Insert Duplicate Node: For a given a Binary Tree of type integer, duplicate every node of the tree and attach it to the left of itself.
The root will remain the same. So you just need to insert nodes in the given Binary Tree.

*/

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    insertDuplicateNode(root->left);

    BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(root->data);
    newNode->left = root->left;
    root->left = newNode;

    insertDuplicateNode(root->right);
}
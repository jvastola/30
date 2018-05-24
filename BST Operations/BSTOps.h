#ifndef BSTOps_h
#define BSTOps_h

#include <iostream>

int occurrences ( Node *root, int target)
//returns the # of occurrences of target in the BST rooted at root.
{
	if (! root )
		return 0;
	if (root->data == target)
		return 1 + occurrences(root->right, target) + occurrences (root->left, target);
	else if (target< root->data)
		return occurrences(root->left, target);
	else
		return occurrences (root->right, target);
}
#endif

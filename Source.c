int findIndex(TreeNode* root, int N, int* storage) {
	if (root == NULL) return 0;


	//*storage += 1;

	findIndex(root->left, N, storage);
	printf("%d, ", root->element);
	findIndex(root->right, N, storage);


	return findIndex(root->right, N, storage) + 1;
}
int findIndexNFromLast(BST* bst, int N) {
	int store;
	return findIndex(bst->root, N, &store);
	//return store;
	int store = 0;
	findIndex(bst->root, N, &store);
	return store;
}

int MAX(int i, int j) {






















	//printTreeInorder(&tree);
		//printf("\n");
	print_ascii_tree(tree.root);
	//findIndexNFromLast(&tree, 6);
	findIndexNFromLast(&tree, 3);
	//printf("\nThe Nth value id: %d\n", findIndexNFromLast(&tree, 6));
	sameHeightLeaves(&tree);
	//sameHeightLeaves(&tree);
	destroyTree(&tree);
	return 0;
}




























//		return findIndex2(root->left, N - i + 1, storage);
//	}
//}
int findIndex(TreeNode* root, int N, int* storage) {
	int getHeight(TreeNode * root) {
		if (root == NULL) return 0;

		else
			return MAX(getHeight(root->right), getHeight(root->left)) + 1;
	}

	if (N == 0) printf("NNNN: %d", root->element);
	int findIndex(TreeNode * root, int N, int* storage) {
		if (root == NULL) return 0;

		findIndex(root->left, N, storage);
		//printf("%d, ", root->element);
		findIndex(root->right, N, storage);


		return findIndex(root->right, N, storage) + 1;
	}
	int findIndexNFromLast(BST * bst, int N) {
		int store;
		return findIndex(bst->root, N, &store);
		//return store;
	}
}

int MAX(int i, int j) {
	if (i > j) return i;
	else if (j > i) return j;
	else if (j == i) return i;
}
int isLeaf(TreeNode* root) {
	if (root->left == NULL && root->right == NULL) return 1;
	else return 0;
}
void sameH(TreeNode* root, int* check) {
	if (root == NULL) return;

	if (getHeight(root->left) != getHeight(root->right)) {
		*check = 0;
		return;
	}

	sameH(root->left, check);
	sameH(root->right, check);
}
int sameHeightLeaves(BST* bst) {
	int check = 1;
	sameH(bst->root, &check);
	return check;
}

//printf("%d", check);
//printf("%d", getHeight(bst->root));



int testVector[y] = { 99,91,84,83,17,11 };
int test2[y] = { 59,81,27,83,14,31 };
int test3[y + 2] = { 5,2,8,1,4,9,10,11 };
int test6[y + 1] = { 7, 5, 9, 4, 6, 8, 10 };

initBST(&tree);

@@ - 20, 8 + 21, 9 @@ int main() {
	//printTreeInorder(&tree);
	//printf("\n");
	print_ascii_tree(tree.root);
	printf("\nThe Nth value id: %d\n", findIndexNFromLast(&tree, 6));

	//findIndexNFromLast(&tree, 6);
	//printf("\nThe Nth value id: %d\n", findIndexNFromLast(&tree, 6));
	sameHeightLeaves(&tree);
	destroyTree(&tree);
	return 0;
}

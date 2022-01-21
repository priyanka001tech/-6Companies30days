int countSubtreesWithSumXUtil(Node* root, int& count, int x)
{
    
	if (!root)
	return 0;
	
	//finding sum of nodes in the left and right subtrees recursively.
	int ls = countSubtreesWithSumXUtil(root->left, count, x);
	int rs = countSubtreesWithSumXUtil(root->right, count, x);
	int sum = ls + rs + root->data;
	
	//if sum of ls, rs and current node data is equal to x,
	//we increment the counter.
	if (sum == x)
	count++;
	
	//returning the sum.
	return sum;
}

//Function to count number of subtrees having sum equal to given sum.
int countSubtreesWithSumX(Node* root, int x)
{ 
	if (!root)
	return 0;
	int count = 0;
	
	//finding sum of nodes in the left subtrees.
	int ls = countSubtreesWithSumXUtil(root->left, count, x);
	
	//finding sum of nodes in the right subtrees. 
	int rs = countSubtreesWithSumXUtil(root->right, count, x);
	
	//if sum of ls,rs and current node data is equal to x,
	//we increment the counter.
	if ((ls + rs + root->data) == x)
	count++;
	
	//returning the count.
	return count;
}

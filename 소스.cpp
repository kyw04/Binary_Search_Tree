#include <iostream>
#define MAX 100
using namespace std;

void push(int tree[], int key, int i)
{
	if (tree[i] == 0)
		tree[i] = key;
	else
	{
		if (tree[i] < key)
			push(tree, key, i * 2 + 2);
		else
			push(tree, key, i * 2 + 1);
	}
}
int binary_seach_tree(int tree[], int key, int i)
{
	if (tree[i] == key)
		return i;
	if (tree[i] == 0)
		return -1;
	if (tree[i] < key)
		binary_seach_tree(tree, key, i * 2 + 2);
	else
		binary_seach_tree(tree, key, i * 2 + 1);
}
int main()
{
	int bt[MAX] = {};
	int key;
	cin >> key;

	push(bt, 5, 0);
	push(bt, 3, 0);
	push(bt, 7, 0);
	push(bt, 2, 0);
	push(bt, 4, 0);
	push(bt, 6, 0);
	push(bt, 8, 0);
	/*
		        5
			3       7
		  2   4   6   8 
	*/

	cout << binary_seach_tree(bt, key, 0);
}
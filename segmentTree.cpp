//Segment Tree for minimum in a given range

#include<bits/stdc++.h>
using namespace std;

//Creating the Segment Tree
void createTree(int arr[], int segTree[], int start, int end, int pos) {
	if (start == end) {
		segTree[pos] = arr[start];
		return ;
	}

	//Recursive case
	int mid = (start + end) / 2;
	createTree(arr, segTree, start, mid, (2 * pos));
	createTree(arr, segTree, mid + 1, end, (2 * pos) + 1);

	segTree[pos] = min(segTree[(2 * pos)], segTree[(2 * pos) + 1]);
	return ;
}

//Query
int rangeQueryMinimum(int segTree[], int rstart, int rend, int qstart, int qend, int pos) {
	//3 possible cases

	//1. Total overlap
	if (qstart >= rstart and qend <= rend)    return segTree[pos];

	//2. No overlap
	if (qend < rstart || qstart > rend)    return INT_MAX;

	//3. Partial overlap - Look in subtrees
	int mid = (rstart + rend) / 2;
	int leftTree = rangeQueryMinimum(segTree, rstart, mid, qstart, qend, (2 * pos));
	int rightTree = rangeQueryMinimum(segTree, mid + 1, rend, qstart, qend, (2 * pos) + 1);

	return min(leftTree, rightTree);
}

void printSegmentTree(int segTree[], int size) {
	for (int i = 0; i < size; i++)    cout << segTree[i] << " ";
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	int arr[n];
	int segTree[4 * n  + 1];
	for (int i = 0; i < n; i++)    cin >> arr[i];

	createTree(arr, segTree, 0, n - 1, 1);

	int l, r;
	cin >> l >> r;

	cout << rangeQueryMinimum(segTree, 0, n - 1, l, r, 1) << endl;
	printSegmentTree(segTree, 4 * n + 1);
	return 0;
}
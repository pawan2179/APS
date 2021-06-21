#include<bits/stdc++.h>
using namespace std;

int findParent(int u, vector<int>parent) {
	if (u == parent[u])    return u;
	return findParent(parent[u], parent);
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank) {
	u = findParent(u, parent);
	v = findParent(v, parent);

	if (rank[u] < rank[v]) {
		parent[u] = v;
	}
	else if (rank[v] < rank[u]) {
		parent[v] = u;
	}
	else {
		parent[v] = u;
		rank[u]++;
	}

	return ;
}

int main() {
	int n;
	int e;

	cin >> n >> e;

	vector<int>parent(n);
	vector<int>rank(n);

	for (int i = 0; i < n; i++) {
		parent[i] = i;
		rank[i] = 0;
	}

	int u, v;

	for (int i = 0; i < e; i++) {
		cin >> u >> v;
		unionn(u, v, parent, rank);
	}
	int q;
	cin >> q;

	while (q--) {
		cin >> u >> v;
		if (findParent[u] == findParent[v])    cout << "Connected\n";
		else cout << "Not Connected\n";
	}
	return 0;
}
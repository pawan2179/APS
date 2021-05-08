#include<bits/stdc++.h>
using namespace std;

int get_set_bits_count(int n) {
	int mask = 1;
	int count = 0;

	while (n) {
		if (n & mask)    count++;
		n >>= 1;
	}
	return count;
}

int set_bit(int num, int pos) {
	int mask = 1;
	mask <<= (pos - 1);

	return (num | mask);
}

int unset_bit(int num, int pos) {
	int mask = 1;
	mask <<= (pos - 1);
	mask = ~mask;

	return (num & mask);
}

bool check_bit_set(int num, int pos) {
	int mask = 1;
	mask <<= (pos - 1);

	return mask & num;
}

int main() {
	int num;
	cin >> num;

	cout << "Number of set bits = " << get_set_bits_count(num) << endl;

	int pos;
	cin >> pos;
	cout << "Original Number = " << num << endl;
	cout << "Number after setting the bit at position " << pos << " = " << set_bit(num, pos) << endl;

	cout << "Bit at pos " << pos << " in " << num << " set? ";
	if (check_bit_set(num, pos))    cout << "YES\n";
	else                           cout << "NO\n";

	cout << "Number after unsetting the bit at pos " << pos << " in " << num << " = " << unset_bit(num, pos) << endl;

	return 0;
}
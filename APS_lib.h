//Library for APS

//1. Get number of set bits in given number
int get_setbit_count(int num) {
	int mask = 1;
	int count = 0;

	while (num) {
		if (num & mask)    count++;
		num >>= 1;
	}
	return count;
}

//2. Check if the bit at a given position is set or not
bool check_bit_set(int num, int pos) {
	int mask = 1;
	mask <<= (pos - 1);

	return mask & num;
}

//3. Set the bit of a number at given position
int set_bit(int num, int pos) {
	int mask = 1;
	mask <<= (pos - 1);

	return (num | mask);
}

//4. Unset the bit of a number at given position
int unset_bit(int num, int pos) {
	int mask = 1;
	mask <<= (pos - 1);
	mask = ~mask;

	return (num & mask);
}
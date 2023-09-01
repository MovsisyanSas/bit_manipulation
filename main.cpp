#include <iostream>,
#include <vector>

bool tenth_bit_check(int a) {
	return a & 512;
}

int find_unique(std::vector<int>& vec) {
	int result = vec[0];
	for (int i = 1; i < vec.size(); i++)
	{
		result = result ^ vec[i];
	}

	return result;
}

int lower_2s_degree(int a) {
	int lg = 0;
	int temp = a;
	while (temp > 0) {
		temp >>= 1;
		lg++;
	}
	return lg;
}

int bits_comparation(int a) {
	int ones = 0;
	int zeros = 0;
	while (a > 0) {
		if (a & 1) {
			ones++;
		}
		else {
			zeros++;
		}
		a >>= 1; 
	}

	if (zeros == ones) {
		return -1;
	}
	return (zeros < ones) ? 1 : 0;
}

int main() {
	std::vector<int> vec {2, 3, 5, 4, 5, 3, 4 };
	std::cout << tenth_bit_check(1098) << std::endl;
	std::cout << find_unique(vec) << std::endl;
	std::cout << bits_comparation(11) << std::endl;

}
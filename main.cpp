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

int main() {
	std::vector<int> vec {2, 3, 5, 4, 5, 3, 4 };
	std::cout << tenth_bit_check(1098) << std::endl;
	std::cout << find_unique(vec) << std::endl;
}
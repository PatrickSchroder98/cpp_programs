#include <iostream>
#include <vector>

std::vector<int> indexes(std::vector<float> v, float n) {
	// returns the list of indexs where the element was found
	int count = 0;
	std::vector<int> list;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == n) {
			list.push_back(i);
		}
	}
	return list;
}


int main() {
	std::vector<float> v = { 2.0, 5.0, 9.0, 10.0, 3.0, 1.0, 5.0};
	std::vector<int> result = indexes(v, 5.0);
	for (int i : result) {
		std::cout << i << std::endl;
	}
}
	
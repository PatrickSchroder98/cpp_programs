#include <iostream>
#include <vector>

int counter(std::vector<float> v, float n) {
	// returns how many times the element was found in vector
	int count = 0;
	for (float i : v) {
		if (i == n) {
			count++;
		}
	}
	return count;
}



int main() {
	std::vector<float> v = { 2.0, 5.0, 9.0, 10.0, 3.0, 1.0, 5.0};
	std::cout << counter(v, 5.0);

}
	
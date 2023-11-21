#include <iostream>
#include <vector>

bool if_exists(std::vector<float> v, float n) {
	// returns true if a number is in vector, else false
	for (float i : v) {
		if (i == n) {
			return true;
		}
	}
	return false;
}



int main() {
	std::vector<float> v = { 2.0, 5.0, 9.0, 10.0, 3.0, 1.0 };
	std::cout << if_exists(v, 9.0);

}
	
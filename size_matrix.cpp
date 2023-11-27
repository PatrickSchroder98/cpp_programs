#include <iostream>
#include <vector>



std::vector<int> size_matrix(std::vector<std::vector<int>> vect) {
    // returns vector with sizes of given matrix, best used after integrity check
    std::vector<int> sizes = {int(vect.size()), int(vect[0].size())};
    return sizes;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    std::vector<int> s = size_matrix(vect);
    for (int i = 0; i < s.size(); i++)
        std::cout << s[i] << " ";

    return 0;
}
	
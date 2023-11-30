#include <iostream>
#include <vector>


bool rectangular_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is a rectangular matrix
    if (vect.size() == vect[0].size()) { return false; }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    
    std::cout << rectangular_matrix_check(vect) << " ";

    return 0;
}
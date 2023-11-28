#include <iostream>
#include <vector>


bool row_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is a row matrix
    if (vect.size() != 1) { return false; }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    
    std::cout << row_matrix_check << " ";

    return 0;
}
	
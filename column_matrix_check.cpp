#include <iostream>
#include <vector>


bool column_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is a column matrix
    for (std::vector<int> i : vect) {
        if (i.size() != 1) { return false; }
    }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    
    std::cout << column_matrix_check(vect) << " ";

    return 0;
}
	
#include <iostream>
#include <vector>


bool binary_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is a binary matrix
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (vect[i][j] != 0 && vect[i][j] != 1) {
                return false;
            }
        }
    }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 0, 0},
       {0, 0, 0},
       {0, 0, 1}
    };
    
    std::cout << binary_matrix_check(vect) << " ";

    return 0;
}
	
#include <iostream>
#include <vector>


bool upper_triangular_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is an upper triangular matrix
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (i <= j) {
                if (vect[i][j] == 0) {
                    return false;
                }
            }
            else
            { 
                if (vect[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 1, 1},
       {0, 1, 1},
       {0, 0, 1}
    };
    
    std::cout << upper_triangular_matrix_check(vect) << " ";

    return 0;
}
	
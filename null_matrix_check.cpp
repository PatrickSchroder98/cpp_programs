#include <iostream>
#include <vector>


bool null_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is a null matrix
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (vect[i][j] != 0) {
                return false;
            }
        }
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
    
    std::cout << null_matrix_check(vect) << " ";

    return 0;
}
	
#include <iostream>
#include <vector>


bool identity_matrix_check(std::vector<std::vector<int>> vect) {
    // returns true if given matrix is a identity matrix
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (vect[i][i] != 1) {
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
       {0, 1, 0},
       {0, 0, 1}
    };
    
    std::cout << identity_matrix_check(vect) << " ";

    return 0;
}
	
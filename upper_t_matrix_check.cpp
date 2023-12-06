#include <iostream>
#include <vector>


bool upper_lower_triangular_matrix_check(std::vector<std::vector<int>> vect, bool lower) {
    // returns true if given matrix is an upper or lower triangular matrix - depending on boolean argument
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (lower) {
                if (i < j) { // lower triangular matrix check

                    if (vect[i][j] != 0) {
                        return false;
                    }
                }
            }
            else {
                if (i > j) { // upper triangular matrix check

                    if (vect[i][j] != 0) {
                        return false;
                    }
                }
            }
            

        }
        
    }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 0, 1},
       {0, 1, 0},
       {0, 0, 1}
    };
    
    std::cout << upper_lower_triangular_matrix_check(vect, false) << " ";

    return 0;
}
	
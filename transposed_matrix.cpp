#include <iostream>
#include <vector>

void view(std::vector<std::vector<int>> vect) {
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            std::cout << vect[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


std::vector<std::vector<int>> transpose_matrix(std::vector<std::vector<int>> vect) {
    // returns a transposed matrix
    std::vector<std::vector<int>> v;
    std::vector<int> v_tmp;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
             v_tmp.push_back(vect[j][i]);
        }
        v.push_back(v_tmp);
        v_tmp.clear();
    }
    return v;
}


int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    
    vect = transpose_matrix(vect);
    view(vect);
    
    return 0;
}
	
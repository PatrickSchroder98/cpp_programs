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


std::vector<std::vector<int>> minor_matrix(std::vector<std::vector<int>> vect, int n, int m) {
    // returns a minor cut from matrix with given indexes
    std::vector<std::vector<int>> v;
    std::vector<int> v_m;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (i != n && j != m) {
                v_m.push_back(vect[i][j]);
            }
        }
        if (v_m.size() > 0) { v.push_back(v_m); }
        v_m.clear();

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
    
    
    vect = minor_matrix(vect, 1, 0);
    view(vect);

    return 0;
}
	
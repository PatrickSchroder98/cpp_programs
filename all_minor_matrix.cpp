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

std::vector<std::vector<std::vector<int>>> all_minor_matrix(std::vector<std::vector<int>> vect) {
    // returns vector with all minor matrixes cut from given marix
    std::vector<std::vector<std::vector<int>>> all_minors_vect;
    for (int n = 0; n < vect.size(); n++) 
    {
        for (int m = 0; m < vect[0].size(); m++)
        {
            all_minors_vect.push_back(minor_matrix(vect, n, m));
        }
    }
    return all_minors_vect;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    std::vector<std::vector<std::vector<int>>> vect2;
    
    vect2 = all_minor_matrix(vect);
    for (int i = 0; i < vect2.size(); i++)
    {
        view(vect2[i]);
        std::cout << std::endl;
    }
    return 0;
}
	
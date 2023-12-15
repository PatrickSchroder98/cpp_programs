#include <iostream>
#include <vector>


bool equality_check(std::vector<std::vector<int>> vect1, std::vector<std::vector<int>> vect2) {
    // returns true if two matrixes are equal
    if (vect1.size() != vect2.size()) { return false; }

    for (int i = 0; i < vect1.size(); i++)
    {
        if (vect1[i].size() != vect2[i].size()) { return false; }
        for (int j = 0; j < vect1[i].size(); j++)
        {
            if (vect1[i][j] != vect2[i][j]) { return false; }
        }
    }

    return true;
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


bool symetric_check(std::vector<std::vector<int>> vect1) {
	// returns true if given matrix is symetric
    std::vector<std::vector<int>> vect2;
    vect2 = transpose_matrix(vect1);
    return equality_check(vect1, vect2);

}


int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 7, 3},
       {7, 4, 5},
       {3, 5, 2}
    };

    std::cout << symetric_check(vect) << std::endl;

    return 0;
}
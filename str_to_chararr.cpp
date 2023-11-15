#include <string> 
#include <iostream> 

char* str_to_chararr(std::string str) {
    // returns the char array
    const int length = str.length();
    char* char_array = new char[length + 1];
    strcpy_s(char_array, length + 1, str.c_str());
    return char_array;
}


int main()
{
    std::cout << str_to_chararr("Example str");

    return 0;
}

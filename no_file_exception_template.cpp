#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	ifstream myfile("nofile.txt");

	if (myfile) {
		cout << "The file exists";
	}
	else {
		cout << "No file exception";
	}
	

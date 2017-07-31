#include <fstream>
#include <iostream>
#include <string>
#include "asciiHandler.h"

using namespace std;


void asciiImg::printImg(string path) {
	string line;
	ifstream asciiFile;
	asciiFile.open(path);
	if (asciiFile.is_open()) {
		while (getline(asciiFile, line)) {
			cout << line << endl;
		}
	}
	else {
		cout << "couldnt find file" << endl;
	}
}

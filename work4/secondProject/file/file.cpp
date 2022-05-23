#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
	string line;
	int count = 0;
	string path = "taskFile.txt";

	ofstream fout(path);
	ifstream fin(path);

	if (fout.is_open()) {
		fout << 134567899;
		fout.close();
	}

	if (fin.is_open()) {
		while (getline(fin, line)) {
			for (int i = 0; i < strlen(line.data()); i++) {
				count += line.data()[i] - '0';
			}
		}
		fin.close();
	}

	cout << count;

}
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

//int main()
//{
//    string path = "taskFile.txt";
//    ofstream fout;
//
//    int Number;
//
//    fout.open(path);
//
//
//    if (!fout.is_open()) {
//        cout << "Error";
//    }
//
//    else {
//        fout << 5545454 << "frgreg" << 666 << endl;
//    }
//
//    ifstream file(path);
//
//
//    do {
//        if (file >> Number) {
//            cout << Number << endl;
//        }
//        else {
//            file.clear();
//            file.ignore(1, ' ');
//        }
//    } 
//    while (!file.eof());
//    fout.close();
//}

int main() {

    string path = "taskFile.txt";

    string buffer;

    ifstream inFile(path);


    while (inFile) {
        getline(inFile, buffer);

        for (auto elem : buffer) {
            if (elem >= 48 && elem <= 57) {
                cout << elem << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}

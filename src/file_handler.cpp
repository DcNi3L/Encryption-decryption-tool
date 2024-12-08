#include "file_handler.h"
#include <fstream>
using namespace std;

bool saveToFile(const string& filename, const string& content) {
    ofstream file(filename);
    if (!file) return false;
    file << content;
    return true;
}

string loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) return "";
    string content((istreambuf_iterator<char>(file)),
                        istreambuf_iterator<char>());
    return content;
}

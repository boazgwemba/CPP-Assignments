
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

// Function to reverse the statement
string Reverse(string fileData) {
    reverse(fileData.begin(), fileData.end());
    return fileData;
}

int main() {

    string fileData;

    // Open and read the text file
    ifstream myFile("input.txt");

    if (!myFile) {
        cout << "File could not be opened!";
        return 1;
    }

    getline(myFile, fileData);
    myFile.close();

    // Count vowels
    int vowels = 0;

    for (int i = 0; i < fileData.length(); i++) {
        char ch = tolower(fileData[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    // Count words
    int words = 0;
    string word;
    stringstream ss(fileData);

    while (ss >> word) {
        words++;
    }

    cout << "Number of words: " << words << endl;

    // Reverse the statement
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    // Capitalize the second letter of each word
    for (int i = 0; i < fileData.length(); i++) {

        if (i > 0 && fileData[i - 1] == ' ') {
            if (isalpha(fileData[i])) {
                fileData[i] = toupper(fileData[i]);
            }
        }
    }

    cout << "Capitalized statement: " << fileData << endl;

    return 0;
}

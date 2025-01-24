#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string& sentence) {
    int wordCount = 0;
    istringstream stream(sentence);
    string word;

    while (stream >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    setlocale(LC_ALL, "russian");
    string input;

    cout << "Введите строку: ";
    getline(cin, input);
    int numberOfWords = countWords(input);

    cout << "Количество слов в строке: " << numberOfWords <<endl;

    return 0;
}

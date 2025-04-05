#include <iostream>
using namespace std;
void printFirstCharacters(const std::string& str) {
    bool isWord = false;

    for (char ch : str) {
        if (isWord) {
            if (ch == ' ') {
                isWord = false;
                continue;
            }
        }
        else {
            if (ch != ' ') {
                isWord = true;
                std::cout << ch << " ";
            }
        }
    }

    std::cout << std::endl;
}

int main() {
string inputString = "Hello, World! How are you today?";

    cout << "The first characters of the words in the string are: ";
    printFirstCharacters(inputString);

    return 0;
}

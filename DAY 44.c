#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else
            special++;
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char &ch : str) {
        if (ch == ' ')
            ch = '-';
    }

    cout << "String after replacement: " << str << endl;

    return 0;
}

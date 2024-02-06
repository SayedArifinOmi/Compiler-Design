#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter the input: ";
    cin >> input;
    cout << "Operators in the input: ";

    for (char ch : input) {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << ch << " ";
        }
    }

    cout << endl;

    return 0;
}


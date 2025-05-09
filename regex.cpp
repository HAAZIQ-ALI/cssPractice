#include <iostream>
#include <regex>
using namespace std;

int main() {
    string email;
    cout << "Enter your email!" << endl;
    cin >> email;

    // Correct regex pattern and placement
    regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9._]+\.[a-zA-Z]{2,})");

    if (regex_match(email, pattern)) {
        cout << "Valid email!" << endl;
    } else {
        cout << "Invalid email!" << endl;
    }

    return 0;
}
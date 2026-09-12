#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;


// Task_1

/*int main() {
    string password;
    cin >> password;

    int len = 0;
    for (char c : password) ++len;

    if (len < 8 || len > 14) {
        cout << "NO\n";
        return 0;
    }

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool other = false;

    for (char c : password) {
        if (c < 33 || c > 126) {
            cout << "NO\n";
            return 0;
        }
        if (c >= 'A' && c <= 'Z') {
            upper = true;
        } else if (c >= 'a' && c <= 'z') {
            lower = true;
        } else if (c >= '0' && c <= '9') {
            digit = true;
        } else {
            other = true;
        }
    }

    int classes = upper + lower + digit + other;
    cout << (classes >= 3 ? "YES\n" : "NO\n");
}*/


//Task_2

int main() {
    string word;
    cin >> word;

    string res;
    res += word[0];

    char last = 0;

    for (size_t i = 1; i < word.size(); ++i) {
        char c = word[i];

        if (c == 'a' || c == 'e' || c == 'h' || c == 'i' || c == 'o' || c == 'u' || c == 'w' || c == 'y')
        continue;

        char d = 0;
        if (c == 'b' || c == 'f' || c == 'p' || c == 'v') d == '1';
        else if (c == 'c' || c == 'g' || c == 'j' || c == 'k' || c == 'q' || c == 's' || c == 'x' || c == 'z') d = '2';
        else if (c == 'd' || c == 't') d = '3';
        else if (c == '1') d = '4';
        else if (c == 'm' || c == 'n') d ='5';
        else if (c == 'r') d = '6';

        if (d != 0 && d != last) {
            res += d;
            last = d;
        }
    }
    
    if (res.size() > 4) res.resize(4);
    while (res.size() < 4) res += '0';

    cout << res << "\n";
    return 0;
}
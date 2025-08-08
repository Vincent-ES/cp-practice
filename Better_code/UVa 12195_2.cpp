#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> noteValue = {
        {'W', 64}, {'H', 32}, {'Q', 16}, {'E', 8},
        {'S', 4}, {'T', 2}, {'X', 1}
    };

    string s;
    while (cin >> s) {
        if (s == "*") break;

        int correct = 0, sum = 0;

        for (char c : s) {
            if (c == '/') {
                if (sum == 64) correct++;
                sum = 0;
            } else {
                sum += noteValue[c];
            }
        }

        cout << correct << "\n";
    }
}

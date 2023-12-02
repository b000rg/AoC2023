#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    int sum;
    ifstream f;
    
    // open file ./input
    f.open("input");

    // make sure the file exists first
    if (!f.fail()) {
        string s;

        // getline() should return false at EOF
        while (getline(f, s)) {
            int first, last;
            first = -1;

            for (int i = 0; i < s.length(); i++) {
                if (isdigit(s[i])) {
                    // 
                    if (first == -1) {
                        first = int(s[i]) - 48;
                    }
                    last = int(s[i]) - 48;
                }
            }
            sum += (first * 10) + last;
        }
    }
    else {
        cout << "Couldn't find input file." << endl;
    }

    cout << sum << endl;

    return 0;
}
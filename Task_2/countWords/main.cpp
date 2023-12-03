#include <iostream>

using namespace std;

int main()
{
string s;

getline(cin, s);

    int Counter = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            if (i == 0 || s[i - 1] == ' ' ||s[i - 1] == '.' ||s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == ',') {
                Counter++;
            }
        }
    }

cout << Counter;

    return 0;


    return 0;
}

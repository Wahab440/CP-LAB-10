#include <iostream>
using namespace std;
int main() 
{
    string str;
    char ch;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Enter the specific character to delete: " ;
    cin >> ch;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ch) {
            for (int j = i; j < str.size(); j++) {
                str[j] = str[j + 1];
            }
            str.resize(str.size() - 1);
            i--;
        }
    }
    cout << "Modified string after deletion: " << str ;

    return 0;
}
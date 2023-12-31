#include <iostream>
using namespace std;
int main() {
    string str;
    char ch;

    cout << "Enter the string" << endl;
    cin >> str;

    cout << "Enter the specific character to delete" << endl;
    cin >> ch;

    // Iterate through the string to remove the specific character
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ch) {
            // Shift all characters to the left starting from the position where the character is found
            for (int j = i; j < str.size() ; j++) {
                str[j] = str[j + 1];
            }
            str.resize(str.size() - 1); // Resize the string to remove the last character
            i--; // Decrement i to recheck the current index after removal
        }
    }

    // Print the modified string after deletion
    cout << "Modified string after deletion: " << str << endl;

    return 0;
}

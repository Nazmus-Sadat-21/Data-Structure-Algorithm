#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int total = 0;
    int length = s.length();

    for (int i = 0; i < length; i++) {
        // Get the value of the current Roman numeral character
        int currentValue;
        switch (s[i]) {
            case 'I': currentValue = 1; break;
            case 'V': currentValue = 5; break;
            case 'X': currentValue = 10; break;
            case 'L': currentValue = 50; break;
            case 'C': currentValue = 100; break;
            case 'D': currentValue = 500; break;
            case 'M': currentValue = 1000; break;
            default: currentValue = 0;
        }

        // Check if the current numeral should be subtracted
        if (i + 1 < length) {
            int nextValue;
            switch (s[i + 1]) {
                case 'I': nextValue = 1; break;
                case 'V': nextValue = 5; break;
                case 'X': nextValue = 10; break;
                case 'L': nextValue = 50; break;
                case 'C': nextValue = 100; break;
                case 'D': nextValue = 500; break;
                case 'M': nextValue = 1000; break;
                default: nextValue = 0;
            }

            // If the current numeral is less than the next, subtract it
            if (currentValue < nextValue) {
                total -= currentValue;
            } else {
                total += currentValue;
            }
        } 
        else {
            // Add the last numeral in the string
            total += currentValue;
        }
    }

    return total;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "The integer value is: " << result << endl;

    return 0;
}

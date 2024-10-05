#include <iostream>
#include <string>
using namespace std;

#define d 256 


void rabinKarp(const string& text, const string& pattern, int q) {
    int n = text.size();
    int m = pattern.size();
    int i, j;
    int p = 0;
    int t = 0;
    int h = 1;

 
    for (i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    for (i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

  
    for (i = 0; i <= n - m; i++) {
       
        if (p == t) {

            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    break;
                }
            }
            if (j == m) {
                cout << "Pattern found at index " << i << endl;
            }
        }

       
        if (i < n - m) {
            t = (d * (t - text[i] * h) + text[i + m]) % q;
            if (t < 0) {
                t = (t + q);
            }
        }
    }
}

int main() {
    string text, pattern;
    int q = 101; 

 
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

  
    rabinKarp(text, pattern, q);

    return 0;
}


// Time complexity: O(n + m) where n is the length of the text and m is the length of the pattern

// Space complexity: O(1)

// Sample Input: Enter the text: abcabcabcabc
// Enter the pattern to search: abc

// Sample Output: Pattern found at index 0
// Pattern found at index 3
// Pattern found at index 6
// Pattern found at index 9


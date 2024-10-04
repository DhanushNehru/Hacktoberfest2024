#include <iostream>
#include <string>
using namespace std;


int createHash(const string& str, int end, int prime) {
    int hashValue = 0;
    for (int i = 0; i <= end; i++) {
        hashValue += str[i] * pow(prime, i);
    }
    return hashValue;
}


int recalculateHash(const string& str, int oldIndex, int newIndex, int oldHash, int patternLength, int prime) {
    int newHash = oldHash - str[oldIndex];
    newHash /= prime;
    newHash += str[newIndex] * pow(prime, patternLength - 1);
    return newHash;
}


bool checkEqual(const string& text, const string& pattern, int start) {
    for (int i = 0; i < pattern.length(); i++) {
        if (text[start + i] != pattern[i]) {
            return false;
        }
    }
    return true;
}

void rabinKarp(const string& text, const string& pattern) {
    int prime = 101; 
    int patternLength = pattern.length();
    int textLength = text.length();

    int patternHash = createHash(pattern, patternLength - 1, prime);
    int textHash = createHash(text, patternLength - 1, prime);

    for (int i = 0; i <= textLength - patternLength; i++) {
      
        if (patternHash == textHash && checkEqual(text, pattern, i)) {
            cout << "Pattern found at index: " << i << endl;
        }
        
        if (i < textLength - patternLength) {
            textHash = recalculateHash(text, i, i + patternLength, textHash, patternLength, prime);
        }
    }
}

int main() {
    string text = "ababcabcabababd";
    string pattern = "ababd";

    rabinKarp(text, pattern);

    return 0;
}


// Sample Input
// Text:    "ababcabcabababd"
// Pattern: "ababd"


// Sample Output
// Pattern found at index: 10

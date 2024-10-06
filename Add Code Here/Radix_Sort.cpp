#include <bits/stdc++.h>
using namespace std;

int getMax(const vector<int>& v){
    int m = v[0];
    for (int i = 1; i < v.size(); i++){
        if (v[i] > m){
            m = v[i];
        }
    }
    return m;
}

void countSort(vector<int>& v, int exp){
    vector<int> output(v.size());
    int i, count[10] = { 0 };

    // Store count of occurrences
    for (i = 0; i < v.size(); i++) {
        count[(v[i] / exp) % 10]++;
    }

    // Change count[i] so that it contains the actual position of this digit in the output
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output vector
    for (i = v.size() - 1; i >= 0; i--) {
        output[count[(v[i] / exp) % 10] - 1] = v[i];
        count[(v[i] / exp) % 10]--;
    }

    // Copy the output vector to v
    for (i = 0; i < v.size(); i++){
        v[i] = output[i];
    }
}

void RadixSort(vector<int>& v){
    int m = getMax(v);

    // Apply counting sort to sort elements based on each digit
    for (int exp = 1; m / exp > 0; exp *= 10){
        countSort(v, exp);
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    RadixSort(v);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

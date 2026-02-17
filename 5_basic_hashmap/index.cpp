#include <iostream>
#include <vector>

using namespace std;

// 1. Find frequency of each element in an array using HashMap
void numberFrequency() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int max_val = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    vector<int> frequency(max_val + 1, 0);

    for (int i = 0; i < n; i++) {
        frequency[arr[i]] += 1;
    }

    int q;
    cout << "Enter query: ";
    cin >> q;

    if (q >= 0 && q <= max_val) {
        cout << "Frequency: " << frequency[q] << endl;
    } else {
        cout << "Frequency: 0" << endl;
    }
}

// 2. Find frequency of each character in a string using HashMap
void characterFrequency() {
    string str;
    cin >> str;

    vector<int> frequency(256, 0);

    for (char c : str) {
        frequency[c] += 1;
    }

    char q;
    cout << "Enter query: ";

    cin >> q;
    cout << "Frequency: " << frequency[q] << endl;
}

int main() {
    numberFrequency();
    characterFrequency();

    return 0;
}

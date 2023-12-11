#include <iostream>
#include <vector>
#include <map>
using namespace std;


void countFrequencyBruteForce (const vector<int>& numbers) { // Votre code

        for (int i = 0; i < numbers.size(); i++) {
            bool shouldSkip = false;
            for (int j = 0; j < i; j++) {
                if (numbers[i] == numbers[j]) {
                    shouldSkip = true;
                    break;
                }
            }
            if (shouldSkip) continue;
            int frequency = 1;
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] == numbers[j]) frequency++;
            }
            cout << numbers[i] << ": " << frequency << " times" << endl;
        }
}

i

map<int, int> countFrequencyOptimal (const vector<int>& numbers) { // Votre code
}
int main () {
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};
// Test count Frequency Brute Force
        cout << "Frequency (Brute-Force):" << endl;
        countFrequencyBruteForce (numbers);
// Test count Frequency Optimal
    cout << "\nFrequency (Optimal):" << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal (numbers);
    for (const auto& entry : frequencyMapOptimal) { cout << entry. first << ":" << entry.second << "-times" << endl;
    }

    return 0;
}



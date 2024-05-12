#include <iostream>

using namespace std;

long long countValidSequences(int n) {

    long long endingWithOne = 1; // number of valid sequences ending with 1
    long long endingWithZero = 1; // number of valid sequences ending with 0

    // Calculate for each length up to n
    for (int i = 2; i <= n; ++i) {
        // New sequence ending with 1 can be formed by adding either 1 or 0 to any previous sequence ending with 1
        long long newEndingWithOne = endingWithOne + endingWithZero;

        // New sequence ending with 0 can only be formed by adding 1 to sequences ending with 1
        long long newEndingWithZero = endingWithOne;

        // Update counts for next iteration
        endingWithOne = newEndingWithOne;
        endingWithZero = newEndingWithZero;
    }

    // The total count is the sum of sequences ending with 1 and 0
    return endingWithOne + endingWithZero;
}

int main() {
    int n;
    cin >> n;

    // Total possible sequences for length n
    long long totalSequences = 1LL << n;

    // Calculate the number of sequences with three consecutive zeros
    long long threeConsecutiveZeros = (n >= 3) ? (n - 2) : 0;

    // Calculate the number of desirable sequences
    long long desirableSequences = totalSequences - threeConsecutiveZeros;

    cout << desirableSequences << endl;

    return 0;
}

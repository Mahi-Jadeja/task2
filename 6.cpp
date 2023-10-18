#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int lower_limit;
    cin >> lower_limit;
    int upper_limit;
    cin >> upper_limit;
    int count = 0;

    for (int i = lower_limit; i <= upper_limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
            if (count == 5) {
                break;
            }
        }
    }

    return 0;
}


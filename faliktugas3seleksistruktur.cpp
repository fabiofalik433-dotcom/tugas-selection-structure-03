#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int sum = 0;

    cout << "===== BILANGAN PRIMA ANTARA 1 SAMPAI 50 =====" << endl;
    cout << "\nBilangan prima: ";

    for (int i = 1; i <= 50; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
            sum += i;
        }
    }

    cout << "\n\nJumlah bilangan prima: " << count << endl;
    cout << "Total penjumlahan bilangan prima: " << sum << endl;

    return 0;
}
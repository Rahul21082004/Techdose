#include <iostream>
#include <vector>
#include <cmath>

void simpleSieve(int limit, std::vector<int>& primes) {
    std::vector<bool> isPrime(limit + 1, true);
    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p <= limit; p++) {
        if (isPrime[p])
            primes.push_back(p);
    }
}

void segmentedSieve(int n) {
    int limit = floor(sqrt(n)) + 1;
    std::vector<int> primes;
    simpleSieve(limit, primes);

    int low = limit, high = 2 * limit;
    while (low < n) {
        if (high >= n)
            high = n;

        std::vector<bool> mark(limit + 1, true);

        for (int i = 0; i < primes.size(); i++) {
            int lowLim = floor(low / primes[i]) * primes[i];
            if (lowLim < low)
                lowLim += primes[i];

            for (int j = lowLim; j < high; j += primes[i])
                mark[j - low] = false;
        }

        for (int i = low; i < high; i++)
            if (mark[i - low])
                std::cout << i << " ";

        low = low + limit;
        high = high + limit;
    }
}

int main() {
    int n = 100;
    std::cout << "Primes up to " << n << ": ";
    segmentedSieve(n);
    return 0;
}

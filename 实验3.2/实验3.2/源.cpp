#include <iostream>
#include <cmath>
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void find_primes(int count) {
    int count_primes = 0;
    int num = 2;
    while (count_primes < count) {
        if (is_prime(num)) {
            std::cout << num << " ";
            ++count_primes;
        }
        ++num;
        if (count_primes % 10 == 0) {
            std::cout << std::endl;
        }
    }
}
int main() {
    find_primes(200);
    return 0;
}
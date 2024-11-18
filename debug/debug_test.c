#include <stdio.h>
#include <assert.h>

int calculateSumOfEvenThreeDigitNumbers() {
    int sum = 0;
    for (int i = 100; i < 999; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int expectedSum = 247500; // The expected sum of all even three-digit numbers
    int actualSum = calculateSumOfEvenThreeDigitNumbers();

    assert(expectedSum == actualSum); // This will check if the function is correct

    printf("三位数全部偶数和为：%d", actualSum);
    return 0;
}
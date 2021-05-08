#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define int_l long long

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int_l n;
    scanf("%lld", &n);

    int_l temp;
    int_l second_largest = LLONG_MIN;
    int_l largest = LLONG_MIN;

    for (int_l i = 0; i < n; i++) {
        scanf("%lld", &temp);

        if (temp > largest) {
            second_largest = largest;
            largest = temp;
        }
        else if (temp < largest && temp > second_largest) {
            second_largest = temp;
        }
    }
    if (second_largest == LLONG_MIN)    second_largest = -1;
    printf("%lld", second_largest);

    return 0;
}
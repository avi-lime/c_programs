#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char numbers[9][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    for (int i = a; i <= b; i++)
        printf("%s\n", i <= 9 ? numbers[i - 1] : i % 2 == 0 ? "even"
                                                            : "odd");
    return 0;
}

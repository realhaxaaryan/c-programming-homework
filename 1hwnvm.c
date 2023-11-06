//home work
//count the numbers between 1 to 100 which are not divisible by 2,3and 5
#include <stdio.h>

int main() {
    int count = 0;

    for (int num = 1; num <= 100; num++) {
        if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0) 
        {
            count++;
        }
    }

    printf("Count of numbers between 1 and 100 not divisible by 2, 3, and 5: %d\n", count);

    return 0;
}



/*

wap to print the following pattern 
*
**
***
****
*****


*/
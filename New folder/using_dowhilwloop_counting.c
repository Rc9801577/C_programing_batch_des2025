//#include <stdio.h>
//
//int main() {
//    int num, count = 0;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    // do-while executes at least once
//    do {
//        count++;
//        num = num / 10;
//    } while (num != 0);
//
//    printf("Number of digits = %d\n", count);
//
//    return 0;
//}

//****** sum of digits ******************
#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        rem = num % 10;     // last digit
        sum = sum + rem;   // add digit
        num = num / 10;    // remove last digit
    } while (num != 0);

    printf("Sum of digits = %d\n", sum);

    return 0;
}



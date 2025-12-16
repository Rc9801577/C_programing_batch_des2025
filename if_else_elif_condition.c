#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 35 && marks <= 50) {
        printf("C Grade");
    }
    else if(marks > 50 && marks < 70) {
        printf("B Grade");
    }
    else if(marks >= 70 && marks <= 100) {
        printf("A Grade");
    }
    else {
        printf("You are Fail");
    }

    return 0;
}


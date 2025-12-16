//// if else condition 
//#include<stdio.h>
//int main(){
//    int amount;
//    printf("enter your food order amount: ");
//    scanf("%d", &amount); 
//
//    if(amount > 500){
//        printf("congratulation you get free delivery");
//    }
//    else{
//        printf("delivery charges apply");
//    }
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int balance, withdraw;

    printf("Enter your account balance: ");
    scanf("%d", &balance);

    printf("Enter withdraw amount : ");
    scanf("%d", &withdraw);

    if (withdraw > balance) {
        printf("Not sufficient balance\n");
    } else {
        balance = balance - withdraw;
        printf("Withdrawal successful\n");
        printf("Remaining balance = %d\n", balance);
    }

    return 0;
}


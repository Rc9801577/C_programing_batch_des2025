//loops concept for loop 
#include<stdio.h>
int main(){
	int i,j,sum=0;
	//print number 1 to 10
	for(i=1;i<=10;i++){
		printf("%d\n",i);
	}
	//multipication of 5
	for(i=1;i<=10;i++){
		printf("5 x %d = %d\n",i,5*i);
	}
		for(i=10;i>=0;i--){
		printf("%d\n",i);
	}
	// skipping number 0 to 20
	 for (i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
     for (i = 1, j = 5; i <= 5 && j >= 1; i++, j--) {
        printf("i = %d  j = %d\n", i, j);
    }
    //sum of 5 numbers
      for (i = 1; i <= 5; i++) {
        sum = sum + i;
    }

    printf("Sum of 1 to 5 = %d", sum);
	return 0;
}


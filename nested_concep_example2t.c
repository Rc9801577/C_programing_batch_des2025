#include<stdio.h>
int main(){
	int hotelopen,food,money;
	printf("hotel open or close (1-yes , 0-no):");
	scanf("%d",&hotelopen);
	if(hotelopen==1){
		printf("is your food avialable (1-yes , 0-no):");
		scanf("%d",&food);
		if(food==1){
			printf("money successfully (1-yes , 0-no):");
			scanf("%d",&money);
			if(money==1){
				printf("order confirmed");
			}else{
				printf("payment failed");
			}
			
		}else{
			printf("food not avilable");
		}
	}else{
		printf("hotel is closed");
	}
	
}

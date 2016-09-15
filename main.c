#include <stdio.h>
#include <unistd.h>

#define TIME 1

int main(){
	system("clear");

	sleep (10);
	calloc(1024000000);
	int i, workTime, breakTime, nextBreak, nextWork;
	printf("Welcome to Arie's Timer Program!");
	printf("\nHow long would you like work timer to go for? (enter whole minutes) ");
	scanf("%d",&workTime);
	printf("How long would you like break timer to go for? (enter whole minutes) ");
	scanf("%d",&breakTime);
	printf("Press ENTER to begin work");
	char waste;
	putchar(33);
	scanf("%c ",&waste);
	while(1){
		printf("Work time!");
		for(i = workTime; i>=0; i--){
			printf("\n%d minutes of work remaining", i);
			sleep(TIME);			
		}
		printf("\nBreak time!");
		for(i = breakTime; i>=0; i--){
			printf("\n%d minutes of break remaining", i);
			sleep(TIME);
		}
		printf("\n");
	}
	return 0;
}

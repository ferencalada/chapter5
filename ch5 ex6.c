#include <stdio.h>
char minsline [100]; //input for minutes
int mins; //the problem specifies it must be registered as an integer

int extramins (int mins){
	int extramins=mins%60; //modulus to find minutes without counting the hours
	printf("and %d minutes",extramins);
	return extramins;
}

int hours (int mins){
	int hours=mins/60; //it's important that it is an integer, it wouldn't work otherwise
	printf("this is equivalent to %d hours ",hours);
	return hours;
} 

int main(void){
	printf("insert the total amount of minutes ");
	fgets(minsline, sizeof(minsline), stdin);
	sscanf(minsline, "%d", &mins); //registering mins as an int
	
	hours(mins);
	extramins(mins);
	return 0;
}





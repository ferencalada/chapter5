#include <stdio.h>
//converting hours and minutes to minutes
#include <stdio.h>
char hoursline[100]; //input line for hours
char minsline[100]; //input line for minutes NOT INCLUDING HOURS
int hours; //input hours as int
int mins; //input minutes as int

int main(void){
	printf("insert the number of hours ");
	fgets(hoursline, sizeof(hoursline), stdin);
	sscanf(hoursline, "%d", &hours);
	
	
	printf("insert the number of minutes without counting the hours ");
	fgets(minsline, sizeof(minsline), stdin);
	sscanf(minsline, "%d", &mins);
	
	printf("The total amount of minutes is %d",hours*60+mins);
	return 0;
}

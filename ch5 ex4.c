//converting km per hour to miles per hour
#include <stdio.h>
char measureline[100]; //input line
float measure; //input as float
int main(void){
	printf("insert the speed in kilometers per hour");
	fgets(measureline, sizeof(measureline), stdin);
	sscanf(measureline, "%f", &measure);
	
	printf("The measure in miles per hour is %.3f",measure*0.6213712);
	return 0;
}

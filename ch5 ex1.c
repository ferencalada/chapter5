//converting centigrate to farenheit
#include <stdio.h>
char templine[100]; //input line
float temp; //input as float
int main(void){
	printf("insert the temperature in Centigrate degrees");
	fgets(templine, sizeof(templine), stdin);
	sscanf(templine, "%f", &temp);
	
	printf("The temperature in Farenheit degrees is %.2f",(9./5.)*temp+32);
	return 0;
}

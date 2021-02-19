#include <stdio.h>
//calculating the volume of a sphere
#include <stdio.h>
char radiusline[100]; //input line
float radius; //input as float
const float PI=3.1416;
int main(void){
	printf("insert the radius in cm");
	fgets(radiusline, sizeof(radiusline), stdin);
	sscanf(radiusline, "%f", &radius);
	
	printf("The volume of the sphere is %.2f cm",(4./3.)*PI*radius*radius*radius);
	return 0;
}

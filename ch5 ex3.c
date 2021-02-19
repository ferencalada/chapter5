#include <stdio.h>
//calculating the perimeter of a rectangle
#include <stdio.h>
char widthline[100]; //input line for width
char heightline[100]; //input line for height
float width; //input width as float
float height; //input height as float

int main(void){
	printf("insert the width in cm");
	fgets(widthline, sizeof(widthline), stdin);
	sscanf(widthline, "%f", &width);
	
	
	printf("insert the height in cm");
	fgets(heightline, sizeof(heightline), stdin);
	sscanf(heightline, "%f", &height);
	
	printf("The perimeter of the rectangle is %.2f cm",2*(width+height));
	return 0;
}

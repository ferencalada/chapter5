/* sacar la hipotenusa de un triangulo rectangulo pidiendo al usuario los 2 catetos */
#include<stdio.h>
#include<math.h>

int main (void){
	float hipotenusa, cateto1, cateto2;
	
	printf("escribe el valor de los 2 catetos: ");
		scanf("%f %f", &cateto1, &cateto2); //quer'ia probar c'omo funcionaba el scanf
	
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	printf("la hipotenusa mide: %.2f",hipotenusa);
	
	
	
	return 0;
}


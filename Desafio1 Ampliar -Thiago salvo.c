#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
  float raio;
  float area; 
  float perimetro;

  
  printf("Insira a medida do raio no circulo: ");
  scanf("%f", &raio);

  
  area = M_PI * raio * raio;

  
  perimetro = 2 * M_PI * raio;

  
  printf("Área: %.2f\n", area);
  printf("Perímetro: %.2f\n", perimetro);
	
	system ("pause");
	
	return 0;
}

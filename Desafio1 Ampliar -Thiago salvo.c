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

  
  printf("�rea: %.2f\n", area);
  printf("Per�metro: %.2f\n", perimetro);
	
	system ("pause");
	
	return 0;
}

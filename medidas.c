#include <stdio.h>
#include <math.h>
#define my_pe 0.3048
#define my_palmos 0.2032
#define my_polegada 0.0254

double medidas (int palmo, int pe, int passo, int toesa, int covado, int vara, int braco, int polegada)
{
	return ((palmo*my_palmos) + (pe*my_pe) + (passo*(5*my_pe)) + (toesa*(6*my_pe)) + (covado*(3*my_palmos)) + (vara*(5*my_palmos)) + (braco*(10*my_palmos)) + (polegada*my_polegada));
}

void test_medidas(void)
{
	int palmo;
	int pe;
	int passo;
	int toesa;
	int covado;
	int vara;
	int braco;
	int polegada;
	scanf("%d%d%d%d%d%d%d%d", &palmo, &pe, &passo, &toesa, &covado, &vara, &braco, &polegada);
	double z = medidas(palmo,pe,passo,toesa,covado,vara,braco,polegada);
	printf("%.4f\n", z);
}

int main(void)
{
	test_medidas();
	return 0;
}
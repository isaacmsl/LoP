#include <stdio.h>
#define MIN 2
#define MAX 1000

int somaDivisores(int x, int y, int soma) {
	if (y == 0) return soma; 
	if (x % y == 0) soma += y;
	return somaDivisores(x, y - 1, soma);
}

int isPerfeito(int x) {
	return somaDivisores(x, x - 1, 0) == x;
}

int marcarPerfeitos(int x[]) {
	for (int i = MIN; i <= MAX; i++) {
		x[i] = isPerfeito(i);
	}
}

int main() {
	int perfeitos[MAX];
	int perfeitosXY[MAX] = {};
	int x, y;
	marcarPerfeitos(perfeitos);
	
	scanf("%d %d", &x, &y);
	
	if (x < MIN || y > MAX) {
		printf("valor de entrada invalido!\n");
		return 1;
	}	

	int qntPerfeitos = 0;
	for (int i = x; i <= y; i++) {
		if (perfeitos[i]) {
			perfeitosXY[qntPerfeitos] = i;
			qntPerfeitos++;
		}
	}
	
	if (qntPerfeitos > 0) {
		printf("[%d", perfeitosXY[0]);
		for (int i = 1; i < qntPerfeitos; i++) {
			printf(", %d", perfeitosXY[i]);
		}
		printf("]\n");
	} else {
		printf("nao ha numeros perfeitos no intervalo escolhido!\n");
	}

	return 0;
}

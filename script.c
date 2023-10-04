#include <stdio.h>
#include <string.h>


int main () {
	char resposta[4];
	char alvo[100];
	int porta;
	printf("Digite o alvo: ");
	scanf("%s", &alvo);

	printf("Digite a porta: ");
	scanf("%i", &porta);

	printf("Voce realmente deseja iniciar o ataque no alvo: %s\n", alvo);
	scanf("%s", resposta);
	if (strcmp(resposta, "sim") == 0) {
		printf("Iniciando ataque no alvo %s, na porta %i ", alvo, porta);
} else {
		printf("Cancelando ataque no alvo %s", alvo);

}


	return 0;
}

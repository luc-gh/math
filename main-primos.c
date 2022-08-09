#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Digite um numero natural: "); //pede-se o n�mero
	scanf("%d", &n);
	getchar();
	
	if(primo(n) == 1){
		printf("\n\nO numero %d eh primo.\n\n", n);
	}
	else{
		printf("\n\nO numero %d nao eh primo.\n\n", n);
	}
	
	return 0;
}

int primo(int n){ //fun��o que verifica se n � primo
	
	int cond, i;
	
	if(n == 2){   //exce��o ao valor par 2
		cond = 1;
	}
	
	for(i = 2; i < n; i++){
		if(n % i == 0){
			cond = 0;
			break;    //se na divis�o de n pelos antecessores o resto for 0 uma �nica vez, o loop � quebrado
		}
		else{
			cond = 1;
		}
	}
	
	return cond;
}

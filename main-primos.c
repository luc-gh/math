#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Digite um numero natural: "); //pede-se o número
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

int primo(int n){ //função que verifica se n é primo
	
	int cond, i;
	
	if(n == 2){   //exceção ao valor par 2
		cond = 1;
	}
	
	for(i = 2; i < n; i++){
		if(n % i == 0){
			cond = 0;
			break;    //se na divisão de n pelos antecessores o resto for 0 uma única vez, o loop é quebrado
		}
		else{
			cond = 1;
		}
	}
	
	return cond;
}

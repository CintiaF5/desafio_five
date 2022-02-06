/*
>> Começando com qualquer número inteiro positivo, substitua o número pela soma dos quadrados de seus dígitos.
>> Repita o processo até que o número seja igual a 1 (onde ficará), ou faça um loop infinito em um ciclo que não inclua 1.
>> Aqueles números para os quais esse processo termina em 1 são felizes.

Entrada: n = 19
Saída: true
Explicação:
1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1

*/

#include <stdio.h>

#define MAX 731

int squareSum(int num);

int main(){
	
	int i, num, memo[MAX];
	
	for(i = 0; i < MAX; i++){
 		memo[i] = 0;
	}

	scanf("%i", &num);

	while(memo[num] == 0){
		memo[num] = 1;
		num = squareSum(num);
	}
	
	if (memo[1] == 1){
		printf("true\n");
	} else {
		printf("false\n");
	}

	return 0;
}

int squareSum(int num){

	int sum = 0;

	while(num != 0){
		sum += (num % 10) * (num % 10);
		num /= 10; 
	}

	return sum;
}



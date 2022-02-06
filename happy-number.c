/*
>> Come�ando com qualquer n�mero inteiro positivo, substitua o n�mero pela soma dos quadrados de seus d�gitos.
>> Repita o processo at� que o n�mero seja igual a 1 (onde ficar�), ou fa�a um loop infinito em um ciclo que n�o inclua 1.
>> Aqueles n�meros para os quais esse processo termina em 1 s�o felizes.

Entrada: n = 19
Sa�da: true
Explica��o:
1� + 9� = 82
8� + 2� = 68
6� + 8� = 100
1� + 0� + 0� = 1

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



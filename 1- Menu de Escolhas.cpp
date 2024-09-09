#include<stdio.h>
int main() {
int opcao, valor;

do {
printf("MENU\n");
printf("1 - Adicionar um valor\n");
printf("2 - Somar Pares\n");
printf("3 - Verificar primos\n");
printf("4 - Imprimir numeros de 1 a 5 decrescentemente\n");
printf("5 - Calcular media de 5 numeros digitados\n");
printf("6 - Identificar numeros pares e impares ate 20\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

switch(opcao){
case 1:
printf("Digite um valor: ");
scanf("%d", &valor);
if (valor > 0) {
printf("O valor e positivo: %d\n", valor);
} else {
printf("O valor e negativo ou igual a 0: %d\n", valor);
}



bghggjf,y


kgjgkjgk,

9787743

break;


case 2:
{
int soma = 0;
for (int i = 1; i <= 10; i++) {
if (i % 2 == 0) {
soma += i;
}
}
printf("Soma dos pares de 1 a 10: %d\n", soma);
break;
}

case 3:
{
int num, primo = 1;
printf("Digite um numero: ");
scanf("%d", &num);

for (int i = 2; i <= num / 2; i++) {
if (num % i == 0) {
primo = 0;
break;
}
}
if (primo == 1 && num > 1) {
printf("%d e um numero primo\n", num);
} else {
printf("%d nao e um n�mero primo\n", num);
}
break;

} case 4:
{
for (int i = 5; i >= 1; i--) {
printf("%d ", i);
}
printf("\n");
break;

} case 5: {
int num, soma = 0;

printf("Digite 5 numeros: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &num);
soma += num;
}
printf("Media: %.2f\n", (float)soma / 5);
break;

} case 6: {
int pares = 0, impares = 0;

for (int i = 1; i <= 20; i++) {
if (i % 2 == 0) {
pares++;
} else {
impares++;
}
}
printf("Quantidade de pares: %d e quantidade de impares: %d\n", pares, impares);
}
break;

default:
printf("opcao invalida");
}
}while(opcao!=0);

return 0;
}

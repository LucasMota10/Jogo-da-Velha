#include <stdio.h>
#include <string.h>
void imprima_matriz(char velha[3][3]){
printf(" 0 | 1 | 2 \n");
printf("0 %c | %c | %c\n", velha[0][0], velha[0][1], velha[0][2]);
printf(" ----------\n");
printf("1 %c | %c | %c\n", velha[1][0], velha[1][1], velha[1][2]);
printf(" ----------\n");
printf("2 %c | %c | %c\n", velha[2][0], velha[2][1], velha[2][2]);
}
int main(){
char jogador1[20];
char jogador2[20];
printf("***J O G O D A V E L H A***\n*******************************\n");
printf("Insira o Nome do Jogador1:\n");
scanf(" %s",jogador1);
printf("Insira o Nome do Jogador2:\n");
scanf(" %s",jogador2);
printf("*******************************\n");
printf("Nome do Jogador 1: %s\nNome do Jogador 2: %s\nBoa sorte jogadores %s e %s\
n*******************************\n",jogador1,jogador2,jogador1,jogador2);
printf(" 0 1 2\n");
printf("0 | | \n");
printf("1 | | \n");
printf("2 | | \n");
char velha[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int l = 0,c = 0;
for(int i = 2; i<11;i++){
if(i%2 == 0){
printf("%s digite a coordenada onde deseja jogar (x): \n",jogador1);
}else{
printf("%s digite a coordenada onde deseja jogar (0): \n",jogador2);
}
scanf("%d %d",&l,&c);
while(velha[l][c] != ' ' || l > 2 || l < 0 || c > 2 || c < 0){
printf("COORDENADA INVALIDA, INSIRA OUTRA\n");
scanf("%d %d",&l,&c);
}
printf("*******************************\n");
if(i%2 == 0){
velha[l][c] = 'X';
}else{
velha[l][c] = '0';
}
imprima_matriz(velha);
if(velha[0][0] == 'X' && velha[0][1] == 'X' && velha[0][2] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if((velha[0][0] == '0' && velha[0][1] == '0' && velha[0][2] == '0')){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[1][0] == 'X' && velha[1][1] == 'X' && velha[1][2] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[1][0] == '0' && velha[1][1] == '0' && velha[1][2] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[2][0] == 'X' && velha[2][1] == 'X' && velha[2][2] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[2][0] == '0' && velha[2][1] == '0' && velha[2][2] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[0][0] == 'X' && velha[1][0] == 'X' && velha[2][0] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[0][0] == '0' && velha[1][0] == '0' && velha[2][0] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[0][1] == 'X' && velha[1][1] == 'X' && velha[2][1] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[0][1] == '0' && velha[1][1] == '0' && velha[2][1] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[0][2] == 'X' && velha[1][2] == 'X' && velha[2][2] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[0][2] == '0' && velha[1][2] == '0' && velha[2][2] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[0][0] == 'X' && velha[1][1] == 'X' && velha[2][2] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[0][0] == '0' && velha[1][1] == '0' && velha[2][2] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(velha[0][2] == 'X' && velha[1][1] == 'X' && velha[2][0] == 'X'){
printf("%s Ganhou!",jogador1);
break;
}
if(velha[0][2] == '0' && velha[1][1] == '0' && velha[2][0] == '0'){
printf("%s Ganhou!",jogador2);
break;
}
if(i == 10){
printf("Deu Velha!");
}
}
}

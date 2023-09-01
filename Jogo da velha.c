#include <stdio.h>
#include <string.h>

int main(){
char jogador1[20];
char jogador2[20];

printf("***J O G O D A V E L H A***\n*******************************\n");
printf("Insira o Nome do Jogador1\n");
scanf("%s",jogador1);
printf("Insira o Nome do Jogador2\n");
scanf("%s",jogador2);

printf("Nome do Jogador 1: %s\nNome do Jogador 2: %s\nBoa sorte jogadores %s e %s\n*******************************\n",jogador1,jogador2,jogador1,jogador2);

printf("   0   1   2\n");
printf("0    |   |   \n");
printf("1    |   |   \n");
printf("2    |   |   \n");

char velha[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int l = 0,c = 0;
    for(int i = 2; i<11;i++){
         if(i%2 == 0){
            printf("%s digite a coordenada onde deseja jogar (x): \n",jogador1);
         }else{
            printf("%s digite a coordenada onde deseja jogar (0): \n",jogador2);

         }
         scanf("%d %d",&l,&c);
         if(i%2 == 0){
            velha[l][c] = 'X';
         }else{
            velha[l][c] = '0';
         }
        for(int a = 0;a<3;a++){
            for(int b=0;b<3;b++){
                printf(" %c|",velha[a][b]);
            }
            printf("\n");
        }
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

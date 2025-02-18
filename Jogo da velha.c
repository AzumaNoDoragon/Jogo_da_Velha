#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int turno = 0;
char mat[3][3];

void init();
void show();
void play();
void cls();
bool checkWin();

int main(){
	setlocale(LC_ALL, "Portuguese");
	bool check;
	init();
	
	do{
		play();
		check = checkWin();
		if(check == true){
			show();
			printf("Jogador %c venceu!\n,", (turno - 1) % 2 == 0 ? 'X' : 'O');
			break;
		}
		if(turno == 9){
			show();
			printf("Empate!\n");
			break;
		}
	}while(true);
	
	return 0;
}

void init(){
	printf("Vamos jogar o Jogo da Velha, procure um amigo para jogar.");
	printf("\nBasta cada jogador em sua vez passar a posição que deseja.");
	printf("\nO primeiro jogador possui X.\n\n");
	
	int i, j, count = 0;
	for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] = '0' + count;
            count++;
        }
    }
	show();
	
	Sleep(7000);
	cls();
}

void show(){
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("  %c  ", mat[i][j]);
			if(j < 2){
				printf("|");
			}
		}
		printf("\n");
		if(i < 2){
			printf("----------------\n");
		}
	}
	printf("\n");
}

void play(){
	int jogada;
	char jogador = (turno % 2 == 0) ? 'X' : 'O';
	
	show();
	
	printf("Jogador %c, escolha uma posição (0-8): ", jogador);
	
	while(1){
		scanf("%d", &jogada);
		if(jogada < 0 || jogada > 8 || mat[jogada / 3][jogada % 3] == 'X' || mat[jogada / 3][jogada % 3] == 'O'){
			printf("Posição Inválida! Escolha novamente: ");
		} else {
			break;
		}
	}
	
	mat[jogada / 3] [jogada % 3] = jogador;
	turno++;
	cls();
}

bool checkWin(){
	int i;
	
	for(i = 0; i < 3; i++){
		if(mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2]) return true;
		if(mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i]) return true;
	}
	
	if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) return true;
	if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]) return true;
	
	return false;
}

void cls(){
	system("cls");
}
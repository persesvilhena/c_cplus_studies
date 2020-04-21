
struct registro_carro{
	int codigo;
	char marca[20];
	char modelo[50];
	char cor[15];
	char combustivel[20];
	float valor;
};

void gotoxy(int x, int y){
     COORD coord;
     coord.X=(short)x;
     coord.Y=(short)y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void center(int LINHA, char *MENSAGEM){
     int COLUNA;
     COLUNA = ((80-strlen(MENSAGEM))/2);
     gotoxy(COLUNA,LINHA);
     printf(MENSAGEM);
     return;
}



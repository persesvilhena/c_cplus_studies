/*
if ((fp=fopen("dados.txt", "r+")) == NULL) {   
    fp=fopen("dados.txt", "w+");
    printf("arquivo não pode ser aberto\n");  
}
fwrite(&d1, sizeof(double), 1, fp);
fwrite(&i1, sizeof(int), 1, fp);
fwrite(&l1, sizeof(long), 1, fp);
printf("foi");


*/
if ((fp=fopen("dados.txt", "r+")) == NULL) {   
	    if((fp=fopen("dados.txt", "w+")) == NULL){
	    	printf("deu nao");
		} 
    } 
    
for(rel_cont = 1; rel_cont < pos; rel_cont++){
    fseek(arq_cd, (long)sizeof(struct registro_cd)*rel_cont, SEEK_SET );
    fread(&cdx, sizeof(registro_cdx), 1, arq_cd);
    strcpy(c[1], "|||||||||||||||||||||| ");
    itoa(rel_cont,aux, 10);
    strcat(c[1], aux);
	strcat(c[1], " |||||||||||||||||||||\0");
    strcpy(c[2], "\n|CODIGO: ");
    itoa(cdx.codigo,aux, 10);
    strcat(c[2], aux);
    strcat(c[2], "  \0");
    strcpy(c[3], "\n|ARTISTA: ");
    strcat(c[3], cdx.artista);
    //strcat(c[3], "  \0");
    strcpy(c[4], "|NOME: ");
    strcat(c[4], cdx.nome);
    //strcat(c[4], "  \0");
    strcpy(c[5], "|ANO: ");
    itoa(cdx.ano,aux, 10);
    strcat(c[5], aux);
    strcat(c[5], "  \0");
    strcpy(c[6], "\n|FAIXAS: ");
    itoa(cdx.faixas,aux, 10);
    strcat(c[6], aux);
    strcat(c[6], "  \0");
    strcpy(c[7], "\n|VALOR: ");
    itoa(cdx.valor,aux, 10);
    strcat(c[7], aux);
    strcat(c[7], "  \n\0");
    
    
    for(x=0;x<7;x++){
    	y = x+1;
    	z = strlen(c[y]);
    	fwrite(&c[y], sizeof(char[z]), 1, fp);
	}
	
}
	/*
    fwrite(&c[1], sizeof(strlen(c[1])), 1, fp);
    fwrite(&c[2], sizeof(strlen(c[2])), 1, fp);
    fwrite(&c[3], sizeof(strlen(c[3])), 1, fp);
    fwrite(&c[4], sizeof(strlen(c[4])), 1, fp);
    fwrite(&c[5], sizeof(strlen(c[5])), 1, fp);
    fwrite(&c[6], sizeof(strlen(c[6])), 1, fp);
    fwrite(&c[7], sizeof(strlen(c[7])), 1, fp);*/
    fclose(fp);

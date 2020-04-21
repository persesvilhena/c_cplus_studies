strcpy(rel_nome, "Relatorio");
itoa(pos_rel,aux, 10);
strcat(rel_nome, aux);
strcat(rel_nome, ".txt\0");
if ((fp=fopen(rel_nome, "r+")) == NULL) {   
	    if((fp=fopen(rel_nome, "w+")) == NULL){
	    	printf("deu nao");
	    	printf("\n\n%s", rel_nome);
		} 
    } 
    
for(rel_cont = 1; rel_cont < pos; rel_cont++){
    fseek(arq_cd, (long)sizeof(struct registro_cd)*rel_cont, SEEK_SET );
    fread(&cdx, sizeof(registro_cdx), 1, arq_cd);
    strcpy(c[1], "|||||||||||||||||||||||||||| ");
    itoa(rel_cont,aux, 10);
    strcat(c[1], aux);
	strcat(c[1], " |||||||||||||||||||||||||||\0");
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
    strcpy(c[8], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\0");
    
    
    for(x=0;x<8;x++){
    	y = x+1;
    	z = strlen(c[y]);
    	fwrite(&c[y], sizeof(char[z]), 1, fp);
	}
	
}

    fclose(fp);
    printf("Relatorio gerado com sucesso!\n");
    cdx.codigo = pos;
	cdx.ano = pos_rel+1;
	fseek(arq_cd, (long)sizeof(struct registro_cd)*0, SEEK_SET );
	fwrite(&cdx, sizeof(registro_cdx), 1, arq_cd);	

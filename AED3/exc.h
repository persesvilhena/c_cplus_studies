printf("Posicao do registro a ser apagado:");
scanf("%d", &num);
if(num <= 0){
	printf("Posicao restrita do sistema!");
}else{
	if(num >= pos){
		printf("Nao ha registros nesta posicao!");
	}else{
		fflush(stdin);
		fseek(arq_cd, (long)sizeof(struct registro_cd)*num, SEEK_SET );
		fread(&cdx, sizeof(registro_cdx), 1, arq_cd);
		
		printf("\nCodigo: %d\nArtista: %s\nNome: %s\nAno: %d\nFaixas: %d\nValor: %f\n", cdx.codigo, cdx.artista, cdx.nome, cdx.ano, cdx.faixas, cdx.valor);
		fflush(stdin);
		printf("\nDeseja realmente apagar o registro? y/n");
		scanf("%c", &exc);
		fflush(stdin);
		if(exc == 'y'){
			while(num < pos){
				fseek(arq_cd, (long)sizeof(struct registro_cd)*(num+1), SEEK_SET );
				fread(&cdx, sizeof(registro_cdx), 1, arq_cd);
				fseek(arq_cd, (long)sizeof(struct registro_cd)*num, SEEK_SET );
				fwrite(&cdx, sizeof(registro_cdx), 1, arq_cd);
				num++;
			}
			cdx.codigo = pos - 1;
			cdx.ano = pos_rel;
			fseek(arq_cd, (long)sizeof(struct registro_cd)*0, SEEK_SET );
			fwrite(&cdx, sizeof(registro_cdx), 1, arq_cd);
			printf("Registro apagado com sucesso!");
		}else{
			printf("O registro nao foi apagado!");
		}
	}
}

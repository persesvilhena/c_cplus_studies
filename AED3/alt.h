printf("Posicao do registro a ser alterado:");
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
		printf("\nDeseja realmente alterar o registro o registro? y/n");
		scanf("%c", &exc);
		fflush(stdin);
		if(exc == 'y'){
			printf("Entre com os dados: ");
			printf("\nPosicao: %d", num);
			printf("\nCodigo: ");
			scanf("%d", &cdx.codigo);
			printf("\nArtista: ");
			fflush(stdin);fgets(cdx.artista, 20,stdin);
			printf("\nNome: ");
			fflush(stdin);fgets(cdx.nome, 50,stdin);
			printf("\nAno: ");
			scanf("%d", &cdx.ano);
			printf("\nFaixas: ");
			scanf("%d", &cdx.faixas);
			printf("\nValor: ");
			scanf("%f", &cdx.valor);
			fseek(arq_cd, (long)sizeof(struct registro_cd)*num, SEEK_SET );
			fwrite(&cdx, sizeof(registro_cdx), 1, arq_cd);
			printf("Registro apagado com sucesso!");
		}else{
			printf("O registro nao foi alterado!");
		}
	}
}

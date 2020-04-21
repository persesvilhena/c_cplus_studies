printf("Registro a ser consultado:");
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
	}
}

--SELECT * FROM itens_vendas;

INSERT INTO itens_vendas (
	produto_id,
	vendas_id,
	item_valor,
	item_quantidade,
	item_total,
	data_criacao,
	data_atualizacao
)
	VALUES
		('1', '1', '10', '2', '20', '01/01/2023', '01/01/2023'),
		('1', '2', '7', '3', '21', '01/01/2023', '01/01/2023');
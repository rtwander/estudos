CREATE OR REPLACE FUNCTION
	calc_comissao(data_ini TIMESTAMP, data_fim TIMESTAMP) RETURN VOID AS
	$$
	DECLARE
	/* declaração das variáveis que vamos utilizar.
	Já na declaração elas recebem o valor zero.
	Pois assim garanto que elas estarão zeradas
	quando for utilizá-las. */

	total_comissao real := 0;
	porc_comissao real := 0;

	/* declarando uma variável para armazenar
	os registros dos loops */

	reg record;

	--cursor para buscar a % de comissão do funcionário

	cr_porce CURSOR (func_id int) IS
		SELECT rt_valor_comissao (func_id);

		BEGIN

		--realiza um loop e busca todas as vendas

		FOR reg IN(
		SELECT vendas.id ID,
				funcionario_id,
				vendas_total
		FROM vendas
		WHERE data_criacao >= data_ini
		AND data_criacao <= data_fim
		AND venda_situacao = 'A') LOOP

		--abertura, utilização e fechamento do cursor

		OPEN cr_porce(reg.funcionario_id);
		FETCH cr_porce int porc_comissao;
		CLOSE cr_porce;

		total_comissao := (reg.venda_total * porc_comissao)/100;

		/* insere na tabela de comissões o valor
		que o funcionário irá receber de comissão
		daquela venda */

		INSERT INTO comissoes(
			funcionario_id,
			comissao_valor,
			comissao_situacao,
			data_criacao
			data_atualizacao)
		VALUES (reg.funcionario_id,
			  total_comissao,
			  'A',now(),
			  now());

		/* update na situacao da venda
		para que ela não seja mais comissionada */

		UPDATE vendas SET venda_situacao = 'C'
		WHERE ID = reg.id;

		-- devemos zerar as variáveis para reutilizá-las

		total comissao := 0;
		porc_comissao := 0;

		--termini do loop

		END LOOP;
END
$$ LANGUAGE PLPGSQL;
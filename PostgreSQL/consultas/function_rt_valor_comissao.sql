CREATE OR REPLACE FUNCTION
	rt_valor_comissao(func_id INT)
	RETURNS REAL AS
	$$
	DECLARE
		valor_comissao REAL;
	
	BEGIN
		SELECT funcionario_comissao
			INTO valor_comissao
			FROM funcionarios
		WHERE id = func_id;
		RETURN valor_comissao;
	END
	$$
	LANGUAGE PLPGSQL;
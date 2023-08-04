CREATE OR REPLACE FUNCTION retorna_nome_funcionario(func_id int)RETURNS text AS $$
DECLARE
	nome text;
	situacao text;
	
BEGIN
	SELECT
		funcionario_nome,
		funcionario_situacao
	INTO nome, situacao
	FROM funcionarios
	WHERE ID = func_id;
		IF situacao = 'A' THEN
			RETURN nome || 'Usuário Ativo';
		ELSE
			RETURN nome || 'Usuário Inativo';
		END IF;

END
$$ LANGUAGE PLPGSQL;
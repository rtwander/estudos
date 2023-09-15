# script para listar arquivo mais recente e mais antigo de uma pasta com base em seu nome
# os arquivos no diretório devem ter o nome iniciado pela data no formato yyyy-mm-dd

import os

caminho = r"C:\Users" #caminho ficticio, substitua-o pelo diretório que precisa

ls_arq = os.listdir(caminho)


ls_arq_nome_desc = sorted(ls_arq, reverse = True)
ls_arq_nome_asc = sorted(ls_arq, reverse = False)

#para acessar o arquivo mais recente use o índice 0

arq_mais_recente = ls_arq_nome_desc[0]
arq_mais_antigo = ls_arq_nome_asc[0]

#exibe o arquivo com a data mais atual e mais antiga
print(arq_mais_recente)
print(arq_mais_antigo)

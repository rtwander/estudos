import psycopg2

#Solicita as informações de conexão ao usuário
db_host = input("Informe o host do banco de dados: ")
db_database = input("Informe o nome do banco de dados: ")
db_port = input("Informe a porta de conexão: ")
db_user = input("Informe o usuário com acesso ao banco: ")
db_password_user = input("Informe a senha do usuário: ")

conexao = psycopg2.connect(
    host = "{}".format(db_host),
    database = "{}".format(db_database),
    port = "{}".format(db_port),
    user = "{}".format(db_user),
    password = "{}".format(db_password_user),
)

# Criando um cursor
cursor = conexao.cursor()

#Solicita ao usuário que insira o nome da tabela para a consulta
nome_tabela = input("Digite o nome da tabela: ")

# Realizando a consulta na tabela do postgres
cursor.execute(
    "SELECT * FROM {};".format(nome_tabela)
)

for row in cursor:
    print(row)

# Pegando os dados resultantes da querry
cursor.fetchall()

#fechando o cursor
cursor.close()

#fechando a conexão
conexao.close()
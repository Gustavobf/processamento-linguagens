import time

inicio = time.time()

nome = 'Gustavo'
matricula = '12345'
curso = 'Sistemas de Informação'

print('O Aluno', nome, 'de matrícula', matricula, 'está cursando', curso)

tempoExec = time.time() - inicio
tempoExecMili = tempoExec * 1000

print("Tempo de execução: {} milissegundos".format(tempoExecMili))

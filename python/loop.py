import time

inicio = time.time()

for x in range(1, 1001):
    print(x)

tempoExec = time.time() - inicio
tempoExecMili = tempoExec * 1000

print("Tempo de execução: {} milissegundos".format(tempoExecMili))

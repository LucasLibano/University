import time

inicio = time.time()

for i in range(1000000):
    x = i * 2

fim = time.time()

tempo = fim - inicio

print("Tempo de execução:", tempo, "segundos")
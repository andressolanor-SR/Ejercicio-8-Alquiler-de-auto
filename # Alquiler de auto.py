# Leer los datos
tipo = input("Ingrese el tipo de auto (C, M, G): ").upper()
dias = int(input("Ingrese la cantidad de días: "))
km = float(input("Ingrese la cantidad de kilómetros recorridos: "))

# Inicializar el monto
monto = 0

# Calcular el costo según el tipo de auto
if tipo == 'C':
    monto = 15 * dias + 20 * km
elif tipo == 'M':
    monto = 20 * dias + 30 * km
elif tipo == 'G':
    monto = 30 * dias + 40 * km
else:
    print("Tipo de auto no válido")

# Mostrar el resultado si el tipo es válido
if tipo == 'C' or tipo == 'M' or tipo == 'G':
    print("Monto a pagar:", monto)
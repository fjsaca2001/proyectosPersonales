# Declaracion de variables
b = True
clave1 = ''
clave2 = ''
# Ciclo para velidar el ingreso de la clave que sea mayoa a 6 digitos
while b:
	clave = int(input("Ingrese su clave maestra: "))
	if len(str(clave)) >= 6:
		b = False
# Ciclo para validar la clave 1 y 2 en base a si es numero par o impar
for x in str(clave):
	if int(x) % 2 == 0:
		clave1 = clave1 + x
	else:
		clave2 = clave2 + x
# Presentacion de las claves
print ("Clave1: " + clave1)
print ("Clave2: " + clave2)
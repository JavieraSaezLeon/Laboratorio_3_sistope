all:release
# Compilación principal del ejecutable
release:
	@echo 'Compilando el archivo programa1.c'
	gcc -o programa1 programa1.c
	@echo "Ejecute el programa haciendo:"
	@echo "./programa1"
clean:
	rm programa1
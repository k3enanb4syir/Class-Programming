all:
	g++ -o program program.cpp

dump:
	objdump -d program > program.asm

clean:
	rm -f program.o program

run: program
	./program

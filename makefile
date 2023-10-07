
OBJS=main.o chunk.o debug.o memory.o

loxvm: $(OBJS)
	gcc -o loxvm $(OBJS)

main.o: main.c
	gcc -c main.c

chunk.o: chunk.c chunk.h
	gcc -c chunk.c

debug.o: debug.c debug.h
	gcc -c debug.c

memory.o: memory.c memory.h
	gcc -c memory.c
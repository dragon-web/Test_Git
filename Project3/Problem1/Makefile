#Optimization Level
CFLAG = -O0

#Include Directory
INCDIR = -I "include" -I "../Array/include" -I "../Single-linked-list/include"

#Object File Directory
OBJDIR = ./

#Object File List
OBJ = \
./problem1.o \
./Array.o \
./main.o

#Target Name
TARGET = compile

${TARGET} : ${OBJ}
	gcc -o ${TARGET} ${OBJ} ${CFLAG} ${INCDIR}

${OBJDIR}Array.o: ../Array/src/Array.c
	gcc ../Array/src/Array.c ${INCDIR} ${CFLAG} -c -o $@

${OBJDIR}Single.o: ../Single-linked-list/src/Single_linked_list.c
	gcc ../Single-linked-list/src/Single_linked_list.c ${INCDIR} ${CFLAG} -c -o $@

${OBJDIR}problem1.o: src/problem1.c
	gcc src/problem1.c ${INCDIR} ${CFLAG} -c -o $@

${OBJDIR}main.o: src/main.c
	gcc src/main.c ${INCDIR} ${CFLAG} -c -o $@

clean:
	rm *.o ${TARGET}





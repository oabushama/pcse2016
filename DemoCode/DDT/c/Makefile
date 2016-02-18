################################################################
################################################################
####
#### This Makefile is part of the textbook
#### "Parallel computing for science and engineering"
#### by Victor Eijkhout
#### copyright 2013-6
####
#### Makefile for debugging examples
####
################################################################
################################################################

info ::
	@echo "make <progname>"
	@echo "make clean"

PARALLEL = hang ring_1a ring_1c 
SEQUENTIAL = array root root2 roots say square square1 square2
PROGS = ${SEQUENTIAL} ${PARALLEL}

ifeq "${TACC_FAMILY_COMPILER}" "intel"
  CC = icc
else
  CC = gcc
endif

.SECONDEXPANSION:
${SEQUENTIAL} : $$@.c
	${CC} -g -O0 -o $@ $@.c
${PARALLEL} : $$@.c
	mpicc -g -O0 -o $@ $@.c
clean :
	/bin/rm -rf ${PROGS} *~ *.o *.dSYM ddt.o*

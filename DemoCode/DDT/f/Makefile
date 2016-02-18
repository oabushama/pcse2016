################################################################
################################################################
####
#### This Makefile is part of the textbook
#### "Parallel computing for science and engineering"
#### by Victor Eijkhout
#### copyright 2013-6
####
#### Makefile for Fortran debugging examples
####
################################################################
################################################################

info ::
	@echo "make <progname>"

ifeq "${TACC_FAMILY_COMPILER}" "intel"
  FC = ifort
else
  FC = gfortran
endif

PARALLEL = ring_1a ring_1b ring_1c ring_2a ring_2b ring_3a ring_3b
SEQUENTIAL = root root2 roots say square square1 square2
PROGS = ${SEQUENTIAL} ${PARALLEL}

.SECONDEXPANSION:
${PARALLEL} : $$@.F90
	mpif90 -g -o $@ $^
${SEQUENTIAL} : $$@.F90
	${FC} -g -o $@ $@^

info ::
	@echo "make clean"
.PHONY: clean
clean :
	/bin/rm -rf ${PROGS} *~ *.o *.dSYM

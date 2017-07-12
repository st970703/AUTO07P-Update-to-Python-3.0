#
#   Makefile            Xianjun WANG            3/1994
#
.SUFFIXES: .f .o
#
FC     = gfortran
FFLAGS = -O -c 
SRC    = plautdev.f plautint.f plautlib.f plautmain.f
PGM    = ../bin/plaut
RM     = rm -f
COMPAT = f2003
#
.f.o:
	$(FC) $(FFLAGS) $*.f -o $@
#
$(PGM): $(SRC:.f=.o) compat.o
	$(FC) $(SRC:.f=.o) compat.o -o $@ 

compat.o : ../src/$(COMPAT).f90
	$(FC) $(FFLAGS) ../src/$(COMPAT).f90 -o $@

plautmain.o: plautmain.f compat.o
#
clean:  
	$(RM) *.o *.mod


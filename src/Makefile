CC=g++
CFLAGS=-Wall 
OBJ=sdl_test.o

IDIR=../include
ODIR=./obj
LDIR=../lib

LIBS=-lSDL2

_DEPS=
DEPS= $(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ=sdl_test.o
OBJ= $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

not-runescape: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ not-runescape

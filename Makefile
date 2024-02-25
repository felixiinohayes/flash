main = hello-world-gtk
FFLAGS = gtk4
 
FC = gcc
LIB = gtk4

wanr2k : ${OBJmain} 
	${FC} $$(pkg-config --cflags ${FFLAGS}) -o ${main} ${main}.c $$(pkg-config --libs ${LIB})

clean :
	rm -r *.mod *.o *.c wanr2k

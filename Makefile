CFLAGSSHARED=-Wall -fPIC -c
CFLAGSSHARED2=-shared -Wl,-soname,

CFLAGSSTATIC=-Wall -c

AR=ar -cvq

libshared: colors.c
	gcc $(CFLAGSSHARED) $<
	gcc $(CFLAGSSHARED2)libcolors.so.2 -o libcolors.so.2.0 *.o

libstatic: colors.c
	gcc $(CFLAGSSTATIC) $<
	$(AR) libcolors.a *.o

.PHONY: clean
clean:
	rm -rfv *.o

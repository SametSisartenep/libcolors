CFLAGSSHARED=-Wall -fPIC -c
CFLAGSSHARED2=-shared -Wl,-soname,

CFLAGSSTATIC=-Wall -c

AR=ar -cvq

libshared: colors.c
	gcc $(CFLAGSSHARED) $<
	gcc $(CFLAGSSHARED2)libcolors.so.2 -o libcolors.so.2.0.1 *.o
	@ln -sv $$PWD/libcolors.so.2.0.1 $$PWD/libcolors.so
	@ln -sv $$PWD/libcolors.so.2.0.1 $$PWD/libcolors.so.2

libstatic: colors.c
	gcc $(CFLAGSSTATIC) $<
	$(AR) libcolors.a *.o

.PHONY: check
check:
	gcc -Wall -o tests/test tests/test.c -L$$PWD -lcolors
	LD_LIBRARY_PATH=$$PWD ./tests/test

.PHONY: clean
clean:
	@rm -rfv *.o lib*
	@for file in `ls tests`; do \
		if [ `file tests/$$file | awk '{print $$2}'` == "ELF" ]; then \
			rm -rfv tests/$$file; \
		fi; \
	done

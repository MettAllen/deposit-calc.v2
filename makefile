CFLAGS = -Wall -Werror -MP -MMD
SOURCES = src/main.c src/deposit.c
.PHONY: clean all deposit-calc

all :
	make bin/deposit-calc
	
bin/deposit-calc : build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc $(CFLAGS)
	
build/main.o : src/main.c src/deposit.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)
	
build/deposit.o : src/deposit.c src/deposit.h
	gcc -c src/deposit.c -o build/deposit.o $(CFLAGS)
	
test:
	make bin/deposit-calc-test
	bin/deposit-calc-test

bin/deposit-calc-test : build/test/main.o build/test/deposit-test.o
	
build/test/main.o : src/deposit.h test/main.c
	
build/test/deposit-test.o : src/deposit.h test/deposit-test.c
	
build/test/deposit.o : src/deposit.h src/deposit.c

clean :
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@rm bin/deposit-calc bin/deposit-calc-test
	@echo "All files have been cleaned."
	
-include build/*.d			

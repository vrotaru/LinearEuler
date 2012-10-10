-include ../config.mk

default: libeuler.lmli

LML_SOURCES =\
	buffer.lml\
	primes.lml\
	decimal.lml\
	loops.lml\
	longs.lml

libeuler.lmli: $(LML_SOURCES)
	$(LIMLC) $(LML_SOURCES) -lib libeuler.lmli

###############################################################################

test: test.lml
	$(LIMLC) -root Main -o test.run test.lml libeuler.lmli

###############################################################################

clean: 
	rm -f *~ libeuler.*

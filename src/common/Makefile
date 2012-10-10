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

test.run: test.lml libeuler.lmli
	$(LIMLC) -root Main -o $@ $^

###############################################################################

overflow.run: test_overflow.lml
	$(LIMLC) -root Main -o $@ $^


clean: 
	rm -f *~ libeuler.*

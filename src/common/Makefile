-include ../config.mk

default: libeuler.a

.PHONY: libeuler.a

C_SOURCES =\
	files.c\
	chunk.c

LML_SOURCES =\
	buffer.lml\
	primes.lml\
	decimal.lml\
	loops.lml\
	files.lml\
	chunk.lml

OBJECTS = $(C_SOURCES:.c=.o)

libeuler.a: $(OBJECTS) $(LML_SOURCES)
	@rm -f libeuler.a
	$(LIMLC) $(LML_SOURCES) -lib libeuler.lmli
	$(AR) r libeuler.a $(OBJECTS)
	

###############################################################################

test.run: test.lml libeuler.lmli
	$(LIMLC) -root Main -o $@ $^

###############################################################################

overflow.run: test_overflow.lml
	$(LIMLC) -root Main -o $@ $^

###############################################################################

chunk.run: test_chunk.lml libeuler.lmli
	$(LIMLC) -root Main -o $@ $^


##############################################################################

%.o : %.c
	$(CC) $(CC_OPT) $(CC_ARCH) -I $(LIMLINC) -c $<

##############################################################################

clean: 
	rm -f *~ *.o libeuler.*

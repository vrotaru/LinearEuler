-include ../config.mk

LIBEULER = ../common/libeuler.lmli

firsttendigits.run: euler13.lml $(LIBEULER)
	$(LIMLC) -root FirstTenDigits -o $@ $^

trianglenumberdivisors.run: euler12.lml $(LIBEULER)
	$(LIMLC) -root TriangleNumberDivisors -o $@ $^

gridadjacent.run: euler11.lml $(LIBEULER)
	$(LIMLC) -root GridAdjacent -o $@ $^
-include ../config.mk

LIBEULER = ../common/libeuler.lmli

trianglenumberdivisors.run: euler12.lml $(LIBEULER)
	$(LIMLC) -root TriangleNumberDivisors -o $@ $^

gridadjacent.run: euler11.lml $(LIBEULER)
	$(LIMLC) -root GridAdjacent -o $@ $^
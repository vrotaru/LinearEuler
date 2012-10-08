-include ../config.mk

LIBEULER = ../common/libeuler.lmli

countpaths.run: euler15.lml $(LIBEULER)
	$(LIMLC) -root CountPaths -o $@ $^

longestchain.run: euler14.lml $(LIBEULER)
	$(LIMLC) -root LongestChain -o $@ $^

firsttendigits.run: euler13.lml $(LIBEULER)
	$(LIMLC) -root FirstTenDigits -o $@ $^

trianglenumberdivisors.run: euler12.lml $(LIBEULER)
	$(LIMLC) -root TriangleNumberDivisors -o $@ $^

gridadjacent.run: euler11.lml $(LIBEULER)
	$(LIMLC) -root GridAdjacent -o $@ $^
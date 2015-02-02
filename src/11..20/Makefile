-include ../config.mk

LIBEULER = ../common/libeuler.lmli

euler20.run: euler20.lml $(LIBEULER)
	$(LIMLC) -root FactorialSumOfDigits -o $@ $^

euler19.run: euler19.lml $(LIBEULER)
	$(LIMLC) -root NumSundays -o $@ $^

euler18.run: euler18.lml $(LIBEULER)
	$(LIMLC) -root MaximalSum -o $@ $^

euler17.run: euler17.lml $(LIBEULER)
	$(LIMLC) -root HowManyLetters -o $@ $^

euler16.run: euler16.lml $(LIBEULER)
	$(LIMLC) -root SumOfDigits -o $@ $^

euler15.run: euler15.lml $(LIBEULER)
	$(LIMLC) -root CountPaths -o $@ $^

euler14.run: euler14.lml $(LIBEULER)
	$(LIMLC) -root LongestChain -o $@ $^

euler13.run: euler13.lml $(LIBEULER)
	$(LIMLC) -root FirstTenDigits -o $@ $^

euler12.run: euler12.lml $(LIBEULER)
	$(LIMLC) -root TriangleNumberDivisors -o $@ $^

euler11.run: euler11.lml $(LIBEULER)
	$(LIMLC) -root GridAdjacent -o $@ $^

clean:
	rm -f *.run

-include ../config.mk

LIBEULER = ../common/libeuler.lmli

differenceofsums.run: euler06.lml $(LIBEULER)
	$(LIMLC) -root DifferenceOfSums -o $@ $^

smallestmultiple.run: euler05.lml $(LIBEULER)
	$(LIMLC) -root SmallestMultiple -o $@ $^

numericpalindrome.run: euler04.lml $(LIBEULER)
	$(LIMLC) -root NumericPalindrome -o $@ $^ 

maxdivisor.run: euler03.lml
	$(LIMLC) -root MaxDivisor -o $@ $^

evenfib.run: euler02.lml
	$(LIMLC) -root EvenFib -o $@ $^

fizzbuzz.run: euler01.lml
	$(LIMLC) -root FizzBuzz -o $@ $^
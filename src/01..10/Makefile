-include ../config.mk

LIBEULER = ../common/libeuler.lmli

euler10.run: euler10.lml $(LIBEULER)
	$(LIMLC) -root SumOfPrimes -o $@ $^

euler09.run: euler09.lml $(LIBEULER)
	$(LIMLC) -root PythagoreanTriplet -o $@ $^

euler08.run: euler08.lml $(LIBEULER)
	$(LIMLC) -root ConsecutiveProducts -o $@ $^

euler07.run: euler07.lml $(LIBEULER)
	$(LIMLC) -root Prime10001 -o $@ $^

euler06.run: euler06.lml $(LIBEULER)
	$(LIMLC) -root DifferenceOfSums -o $@ $^

euler05.run: euler05.lml $(LIBEULER)
	$(LIMLC) -root SmallestMultiple -o $@ $^

euler04.run: euler04.lml $(LIBEULER)
	$(LIMLC) -root NumericPalindrome -o $@ $^ 

euler03.run: euler03.lml
	$(LIMLC) -root MaxDivisor -o $@ $^

euler02.run: euler02.lml
	$(LIMLC) -root EvenFib -o $@ $^

euler01.run: euler01.lml
	$(LIMLC) -root FizzBuzz -o $@ $^

clean:
	rm -f *.run


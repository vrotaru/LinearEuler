-include ../config.mk

LIBEULER = ../common/libeuler.lmli

euler21.run: euler21.lml $(LIBEULER)
	$(LIMLC) -root AmicableSum -o $@ $^

clean:
	rm -f *.run

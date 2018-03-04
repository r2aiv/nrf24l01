sources := \
$(wildcard inc/*.h) \
$(wildcard src/*.c) \
$(wildcard example/general/*)

.PHONY: examples clean

format:
	clang-format -i $(sources) $$(find example -name main.c)

gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-gcc:
	wget https://launchpad.net/gcc-arm-embedded/5.0/5-2016-q3-update/+download/gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2
	tar xf gcc-arm-*.tar.bz2

toolchain: gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-gcc

examples:
	make -C example/stm32f1

clean:
	make -C example/stm32f1 clean

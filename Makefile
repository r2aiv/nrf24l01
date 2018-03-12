sources := \
$(wildcard inc/*.h) \
$(wildcard src/*.c) \
$(wildcard example/general/*)

.PHONY: examples clean docs

format:
	clang-format -i $(sources) $$(find example -name main.c)

style_check:
	clang-format -output-replacements-xml $(sources) $$(find example -name main.c) | grep "<replacement "; \
	if [ $$? -eq 0 ]; then \
		echo "Style check failed! Run clang-format to format the code." && exit 1; \
	fi

gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-gcc:
	wget https://launchpad.net/gcc-arm-embedded/5.0/5-2016-q3-update/+download/gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2
	tar xf gcc-arm-*.tar.bz2

toolchain: gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-gcc

docs:
	mkdir -p docs
	doxygen
	moxygen docs/xml

examples:
	make -C example/stm32f1

clean:
	make -C example/stm32f1 clean
	rm -rf docs

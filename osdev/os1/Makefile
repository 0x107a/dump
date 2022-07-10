ASM=nasm
BOOT_SRCS=$(wildcard boot/*.s)
BOOT=boot.bin

all: $(BOOT)

$(BOOT):
	$(ASM) -o $(BOOT) -f bin $(BOOT_SRCS)

clean:
	rm -f $(BOOT) $(KERNEL)
	find . -name "*~" -exec rm {} \;
	find . -name "*.o" -exec rm {} \;

.PHONY: clean

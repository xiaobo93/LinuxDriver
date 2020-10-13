obj-m := hello.o
BUILD_EXTRA_SYMBOLS=/home/guoxiaohan/Desktop/test/Module.symvers


	KERNELDIR ?= /home/guoxiaohan/Desktop/linux-2.6.37
	PWD := $(shell pwd)
	PRINT_INC=$(pwd)
	SYMBOL_INC =$(obj)/test
	EXTRA_CFLAGS += -I $(SYMBOL_INC)

modules:
	$(MAKE)  -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install 
clean: 
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
.PHONY: modules modules_install clean

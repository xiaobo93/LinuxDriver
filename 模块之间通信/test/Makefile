ifeq ($(KERNELRELEASE),)
	KERNELDIR ?= /home/guoxiaohan/Desktop/linux-2.6.37
	PWD := $(shell pwd)
	PRINT_INC=$(PWD)/../include
	EXTRA_CFLAGS+= -I $(PRINT_INC)
modules:
	$(MAKE) -I $(PRINT_INC) -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install 
clean: 
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
else
	obj-m :=test.o
endif

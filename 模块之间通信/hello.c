#include <linux/module.h>
#include <linux/init.h>
//#include"./test/add_sub.h"
#include "add_sub.h"

static long a=1;
static int hello_init(void)
{
	printk(KERN_ALERT "Hello,world\n");
	printk(KERN_ALERT "add %d\n",add_integer(4,5));
	return 0;
}
static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye,World\n");
	printk(KERN_ALERT "sub %d\n",sub_integer(10,3));
}
module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("Dual BSD/GPL");

#include <linux/syscalls.h>

SYSCALL_DEFINED0(mycall)
{
	printk("System Call Example!\n");
	
	return 0;

}

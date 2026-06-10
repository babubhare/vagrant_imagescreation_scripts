#include <linux/init.h>
#include <linux/module.h>
static int my_init(void)
{
	pr_info("Hello World\n");
	return 0;
}
 static void my_exit(void)
{
	return;
}
module_init(my_init);
module_exit(my_exit);
MODULE_AUTHOR("Linux Trainer");
MODULE_LICENSE("GPL");

/*
 * gentilesmile generating kernel module
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_DESCRIPTION ("gentilesmile");
MODULE_LICENSE ("GPL");
MODULE_AUTHOR ("PSO");

#define GS_READ         0
#define GS_WRITE        1
#define GS_GS         GS_WRITE

static int my_gentlesmile_init (void)
{
        int *a;

        a = (int *) 0x00001234;
#if GS_GS == GS_WRITE
        *a = 3;
#elif GS_GS == GS_READ
        printk (KERN_ALERT "value = %d\n", *a);
#else
#error "Unknown gentle man!"
#endif

        return 0;
}

static void my_gentlesmile_exit (void)
{
}

module_init (my_gentlesmile_init);
module_exit (my_gentlesmile_exit);

#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
MODULE_LICENSE("GPL");// 加上license
static int __init gqb_hello_init(void)
{
    printk("hello world!\n");//关于printk函数
    printk("this is my first driver program\n");
    return 0;
}
static void __exit gqb_hello_exit(void)
{
    printk("Exit!\n");
    printk("GoodBye !\n\n");
}
module_init(gqb_hello_init);//动态加载/卸载模块时，需要使用module_init()/module_exit来进行
module_exit(gqb_hello_exit);

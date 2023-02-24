#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PROJECT");
MODULE_AUTHOR("ANAEY DID IT");

int init_module(void){

  int num1=20;
  int num2=30;
  int result;
  result = num1 + num2;
  
  printk(KERN_INFO "The reult is %d\n", result);
  return 0;
}

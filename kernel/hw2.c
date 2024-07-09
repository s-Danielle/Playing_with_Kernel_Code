#include <linux/kernel.h>
#include<linux/sched.h>
#include <linux/list.h>
#include <linux/module.h>

long sys_get_leaf_children_sum_aux(struct task_struct* task);

asmlinkage long sys_hello(void) {
        printk("Hello, World!\n");
        return 0;
} 

asmlinkage long sys_set_weight(int weight){
        if(weight < 0)
                return -EINVAL;
        current->weight = weight;
        return 0;
}

asmlinkage long sys_get_weight(void){
        return current->weight;
}

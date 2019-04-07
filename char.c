#include <linux/string.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>
#include <linux/slab.h>

struct birthday{
    int day;
    int month;
    int year;
    char* name;
    struct list_head list;
};
static LIST_HEAD(birthday_list);

/*this fn is called when the module is loaded*/
int simple_init(void){
    struct birthday *ptr;
    struct birthday *person,*person2,*person3,*person4,*person5;
    person = kmalloc(sizeof(*person), GFP_KERNEL);
    person->day=22;
    person->month=7;
    person->year=1990;
    person->name=kmalloc(sizeof("Jane")+1, GFP_KERNEL);
    strcpy(person->name, "Jane");

    person2 = kmalloc(sizeof(*person2), GFP_KERNEL);
    person2->day=4;
    person2->month=3;
    person2->year=1990;
    person2->name=kmalloc(sizeof("Michael")+1, GFP_KERNEL);
    strcpy(person2->name, "Michael");

    person3 = kmalloc(sizeof(*person3), GFP_KERNEL);
    person3->day=4;
    person3->month=3;
    person3->year=1990;
    person3->name=kmalloc(sizeof("Lacey")+1, GFP_KERNEL);
    strcpy(person3->name, "Lacey");

    person4 = kmalloc(sizeof(*person4), GFP_KERNEL);
    person4->day=4;
    person4->month=4;
    person4->year=1990;
    person4->name=kmalloc(sizeof("Tom")+1, GFP_KERNEL);
    strcpy(person4->name, "Tom");

    person5 = kmalloc(sizeof(*person5), GFP_KERNEL);
    person5->day=4;
    person5->month=5;
    person5->year=1990;
    person5->name=kmalloc(sizeof("Stuart")+1, GFP_KERNEL);
    strcpy(person5->name, "Stuart");


    INIT_LIST_HEAD(&person->list);
    list_add_tail(&person->list, &birthday_list);
    list_add_tail(&person2->list, &birthday_list);
    list_add_tail(&person3->list, &birthday_list);
    list_add_tail(&person4->list, &birthday_list);
    list_add_tail(&person5->list, &birthday_list);

    printk(KERN_INFO "Module initialized");
    list_for_each_entry(ptr,&birthday_list, list){
        printk(KERN_INFO "Name: %s, Birthday: %d/%d/%d\n",ptr->name,ptr->month,ptr->day,ptr->year);
    }
    return 0;
}

/*this fn is called when the module is removed*/
void simple_exit(void){
    struct birthday *ptr, *next;

    list_for_each_entry_safe(ptr, next, &birthday_list, list){
        list_del(&ptr->list);
        kfree(ptr);
    }

    printk(KERN_INFO "Removing module\n");
}
/*macros for registering module entrance and exit points*/
module_init(simple_init);
module_exit(simple_exit);


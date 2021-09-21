#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct imem
{
char *name;
int zone;
int coins;
struct imem *next;
}members;

members *add_node(members *head, const char *str, int coin, int zone)
{
char *dup = strdup(str);
members *newmem = malloc(sizeof(members));
members *temp;
if (newmem == NULL || (str != NULL && dup == NULL)) {
return (free(dup), free(newmem), NULL);
}
newmem->name = dup, newmem->coins = coin, newmem->zone = zone;
newmem->next = NULL;
if (head == NULL) {
head = newmem;
return head;
}
temp = head;
for (; temp->next != NULL;  temp = temp->next) {
}
temp->next = newmem;
return head;
}

void print_mems(members head){
printf("Name: %s\nCoins: %d\nZone: %d\n\n", head.name, head.coins, head.zone);
    for(;head.next != NULL; head = *head.next){
        printf("Name: %s\nCoins: %d\nZone: %d\n\n", head.name, head.coins, head.zone);
    }
}
int main(void)
{
    members *head;

    head = NULL;
    add_node(head, "Alexandro", 5, 10);
    add_node(head, "Asaia", 5, 10);
    add_node(head, "Augustin", 5, 10);
    add_node(head, "Bennett", 5, 10);
    add_node(head, "Bilal", 5, 10);
    add_node(head, "Chandler", 5, 10);
    add_node(head, "Damian", 5, 10);
    add_node(head, "Daniel", 5, 10);
    add_node(head, "Dora", 5, 10);
    add_node(head, "Electra", 5, 10);
    add_node(head, "Gloria", 5, 10);
    add_node(head, "Joe", 5, 10);
    add_node(head, "John", 5, 10);
    add_node(head, "John", 5, 10);
    add_node(head, "Josquin", 5, 10);
    add_node(head, "Kris", 5, 10);
    add_node(head, "Marine", 5, 10);
    add_node(head, "Mason", 5, 10);
    add_node(head, "Praylin", 5, 10);
    add_node(head, "Rick", 5, 10);
    add_node(head, "Rick", 5, 10);
    add_node(head, "Rona", 5, 10);
    add_node(head, "Siphan", 5, 10);
    add_node(head, "Sravanthi", 5, 10);
    add_node(head, "Steven", 5, 10);
    add_node(head, "Tasneem", 5, 10);
    add_node(head, "William", 5, 10);
    add_node(head, "Zee", 5, 10);
    print_mems(*head);
    return (0);
}
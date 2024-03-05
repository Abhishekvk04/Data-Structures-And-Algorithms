#include<stdio.h>
#include<stdlib.h>

// basic program of creating one node
struct node
{
        int data;
        struct node *link;
};

/*int main(){

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node)); // type casting(struct node *) is not necessary

    head->data = 45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
}*/

// Creating two node and the link
/*int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    printf("%d\n", head->data);
    printf("%d", current->data);
    return 0;
}*/

//Adding 3rd node to the linked list with 2 nodes
/*int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current; //head = 1000 ,head->link = 2000 ,then 2000->link = current = 3000

    printf("%d\n", head->data);
    printf("%d", current->data);
    return 0;
}*/

//Traversing a single linked list (Count the number of nodes)
/*void count_of_nodes(struct node *head);

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current; 

    count_of_nodes(head);
    return 0;
}

void count_of_nodes(struct node *head) {
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");
    else {
        struct node *ptr = head;
        while (ptr != NULL) {
            count++;
            ptr = ptr->link;
        }
        printf("%d", count);
    }
}*/

//Traversing a single linked list (Printing the data)
/*void print_data(struct node *head);

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current; 

    print_data(head);
    return 0;
}*/

/*void print_data(struct node *head) {
    if (head == NULL)
        printf("Linked list is empty");
    else {
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
        }
    }
}

//inserting a node at the end
void add_at_end(struct node *head, int data);

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current; 

    add_at_end(head,60);
    print_data(head);
    return 0;
}

void add_at_end(struct node *head, int data) {
    struct node *ptr , *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link=temp;
        
}*/


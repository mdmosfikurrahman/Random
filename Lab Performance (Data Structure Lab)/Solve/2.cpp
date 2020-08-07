#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct mobile{
    char model_name[30];
    int price;
    struct mobile *next;
}*head;

void create()
{
    struct mobile *temp =(struct mobile*)malloc(sizeof(struct mobile));
    printf("Enter Model name: ");
    gets(temp->model_name);
    printf("Enter Price: ");
    scanf("%d",&temp->price);
    getchar();
    temp->next=head;
    head=temp;
}

void display()
{
    struct mobile *p=head;
    while(p !=NULL){
        printf("\n");
        printf("Model name: %s\n",p->model_name);
        printf("Price:      %d $\n",p->price);
        p=p->next;
    }

}
void search()
{
    char temp[30];
    printf("\nWhich mobile you want to search for: ");
    gets(temp);
    struct mobile *p=head;
    while(p !=NULL){
        if(strcmp(p->model_name,temp)==0)
        {
            printf("\nMobile is found\n");
            printf("Model Name: %s\n",p->model_name);
            printf("Price:      %d\n",p->price);
            return;
        }
        p=p->next;
    }
    printf("\n%s mobile Not found\n");
}
void max()
{
    struct mobile *p=head;
    int maxPrice=-1;
    char temp[30];
    while(p != NULL){
        if(p->price > maxPrice)
        {
            strcpy(temp,p->model_name);
            maxPrice=p->price;
        }
        p=p->next;
    }
    printf("\n%s's price is maximum\n ");
}
int main()
{
    create();
    create();
    display();
    search();
    max();
    return 0;
}


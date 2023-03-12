#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct node{
    int heso, mu;
    struct node *next;
};
typedef struct node node;
node *createNode(int heso, int mu){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->heso = heso;
    newNode->mu = mu;
    newNode->next = NULL;
    return newNode;
}
void update(node **head, int heso, int mu){
    if((*head) == NULL){
        node *newNode = createNode(heso, mu);
        (*head) = newNode;
        return;
    }
    node *tmp = *head;
    node *prev = tmp;
    while(tmp != NULL){
        if(tmp->mu == mu){
            tmp->heso += heso;
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    node *newNode = createNode(heso, mu);
    prev->next = newNode;
}
void sort(node **head){
    for(node *i = *head; i != NULL; i = i->next){
        node *max = i;
        for(node *j = i->next; j != NULL; j = j->next){
            if(max->mu < j->mu){
                max = j;
            }
        }
        ll tmp = max->mu;
        max->mu = i->mu;
        i->mu = tmp;
        tmp = max->heso;
        max->heso = i->heso;
        i->heso = tmp;
    }
}
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char a[10001][100];
        char b[10001][100];
        node *head = NULL;
        char c[10001];
        ll p = 0;
        fgets(c, 10001, stdin);
        c[strlen(c) - 1] = '\0';
        char d[10001];
        fgets(d, 10001, stdin);
        d[strlen(d) - 1] = '\0';
        char *token = strtok(c, " ");
        while(token != NULL){
            if(strcmp(token, "+") != 0){
                strcpy(a[p], token);
                p++;
            }
            token = strtok(NULL, " ");
        }
        for(ll i = 0; i < p; i++){
            int heso = 0, mu = 0;
            char *token1 = strtok(a[i], "*x^");
            heso = atoi(token1);
            token1 = strtok(NULL, "*x^");
            mu = atoi(token1);
            update(&head, heso, mu);
        }
        ll q = 0;
        char *token2 = strtok(d, " ");
        while(token2 != NULL){
            if(strcmp(token2, "+") != 0){
                strcpy(b[q], token2);
                q++;
            }
            token2 = strtok(NULL, " ");
        }
        for(ll i = 0; i < q; i++){
            int heso = 0, mu = 0;
            char *token3 = strtok(b[i], "*x^");
            heso = atoi(token3);
            token3 = strtok(NULL, "*x^");
            mu = atoi(token3);
            update(&head, heso, mu);
        }
        sort(&head);
        while(head != NULL){
            printf("%d*x^%d", head->heso, head->mu);
            head = head->next;
            if(head != NULL) printf(" + ");
        }
        printf("\n");
    }
    return 0;
}

// // #include<stdio.h>
// // #include<stdlib.h>

// // struct node{
// //     int data;
// //     struct node *next;
// // };

// // struct node *list=NULL;

// // void Addlast(){
// //     int data;
// //     scanf("%d", &data);

// //     struct node *new_node = (struct node*)malloc(sizeof(struct node));
// //     new_node->data = data;
// //     new_node->next = NULL;

// //     if(list == NULL){
// //         list = new_node;
// //     }
// //     else{
// //         struct node *temp;
// //         for(temp = list; temp->next != NULL; temp = temp->next);
// //         temp->next = new_node;
// //     }
// // }

// // void print(){
// //     struct node *temp;
// //     for(temp = list; temp != NULL; temp = temp->next){
// //         printf("%d -> ", temp->data);
// //     }

// // }

// // int main(){
// //     int i, n;
// //     scanf("%d", &n);

// //     for(i=0; i<n; i++){
// //         Addlast();
// //     }

// //     print();
// //     return 0;
// // }
// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// struct node *list=NULL;

// void Addlast(){
//     int data;
//     scanf("%d", &data);

//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = NULL;

//     if(list == NULL){
//         list = new_node;
//     }
//     else{
//         struct node *temp;
//         for(temp = list; temp->next != NULL; temp = temp->next);
//         temp->next = new_node;
//     }
// }

// void DeleteLast(){
//     if(list == NULL){
//         printf("List is empty.\n");
//     }
//     else if(list->next == NULL){
//         free(list);
//         list = NULL;
//     }
//     else{
//         struct node *temp = list;
//         while(temp->next->next != NULL){
//             temp = temp->next;
//         }
//         free(temp->next);
//         temp->next = NULL;
//     }
// }
// void print1(){
//     struct node *temp;
//     if(list!=NULL){
//         printf("List->");
//         for(temp = list; temp != NULL; temp = temp->next){
//             printf("%d->", temp->data);
//         }
//         printf("NULL\n");
//     }
//     else{
//         printf("List is empty");
//     }
// }
// void print(){
//     struct node *temp;
//     printf("After Deletion\n");
//     if(list!=NULL){
//         printf("List->");
//         for(temp = list; temp != NULL; temp = temp->next){
//             printf("%d->", temp->data);
//         }
//         printf("NULL");
//     }
//     else{
//         printf("List is empty");
//     }
// }

// int main(){
//     int i, n;
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         Addlast();
//     }
//     print1();
//     DeleteLast();

//     print();
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// struct node *list=NULL;

// void Addlast(){
//     int data;
//     scanf("%d", &data);

//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = NULL;

//     if(list == NULL){
//         list = new_node;
//     }
//     else{
//         struct node *temp;
//         for(temp = list; temp->next != NULL; temp = temp->next);
//         temp->next = new_node;
//     }
// }

// void DeleteLast(){
//     if(list == NULL){
//         printf("List is empty.\n");
//     }
//     else if(list->next == NULL){
//         free(list);
//         list = NULL;
//     }
//     else{
//         struct node *temp;
//         struct node *prev = NULL;
//         for(temp = list; temp->next != NULL; prev = temp, temp = temp->next);
//         free(temp);
//         prev->next = NULL;
//     }
// }

// int DeleteTarget(int a){
//     struct node *temp = list, *prev;

//     if (temp != NULL && temp->data == a){
//         list = temp->next; 
//         free(temp); 
//         return 1;
//     }

//     while (temp != NULL && temp->data != a){
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) return 0;

//     prev->next = temp->next;

//     free(temp);
//     return 1;
// }

// void print1(){
//     struct node *temp;
//     if(list!=NULL){
//         printf("List->");
//         for(temp = list; temp != NULL; temp = temp->next){
//             printf("%d->", temp->data);
//         }
//         printf("NULL\n");
//     }
//     else{
//         printf("List is empty");
//     }
// }

// void print(){
//     struct node *temp;
//     printf("After Deletion\n");
//     if(list!=NULL){
//         printf("List->");
//         for(temp = list; temp != NULL; temp = temp->next){
//             printf("%d->", temp->data);
//         }
//         printf("NULL");
//     }
//     else{
//         printf("List is empty");
//     }
// }

// int main(){
//     int i, n,T;
//     scanf("%d", &n);
//     for(i=0; i<n; i++){
//         Addlast();
//     }
//     scanf("%d",&T);
//     print1();
//     if (!DeleteTarget(T)){
//         printf("Target Element is Not Found\n");
//     }
//     print();
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* next;
// };
// struct node* list=NULL;
// void print2();
// void Addlast(){
//     int data;
//     struct node* temp;
//     scanf("%d",&data);
//     struct node* new_node=(struct node*)malloc(sizeof(struct node));
//     new_node->data=data;
//     new_node->next=NULL;
//     if(list==NULL){
//         list=new_node;
//     }
//     else{
//         for(temp=list;temp->next!=NULL;temp=temp->next);
//         temp->next=new_node;
//     }
// }
// void Addafter(){
//         int T,X;
//         scanf("%d",&T);
//         scanf("%d",&X);
//         struct node *new_node,*temp;
//         new_node=(struct node*)malloc(sizeof(struct node));
//         for(temp=list;temp->data!=T && temp !=NULL; temp=temp->next);
//         if(temp->data!=T){
//             printf("Target Element is Not Found\n");
//         }
//         else{
//             new_node->data=X;
//             new_node->next=temp->next;
//             temp->next=new_node;
//             print2();
//         }
//     }
// void print1(){
//         struct node *temp;
//         printf("List->");
//         for(temp=list;temp!=NULL;temp=temp->next){
//             printf("%d->",temp->data);
//         }
//         printf("NULL\n");
//     }
// void print2(){
//         struct node *temp;
//         printf("After Insertion\n");
//         printf("List->");
//         for(temp=list;temp !=NULL;temp=temp->next){
//             printf("%d->",temp->data);
//         }
//         printf("NULL\n");
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print1();
//     Addafter();
    
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* next;
// };
// struct node* list=NULL;
// void print2();
// void Addlast(){
//     int data;
//     struct node* temp;
//     scanf("%d",&data);
//     struct node* new_node=(struct node*)malloc(sizeof(struct node));
//     new_node->data=data;
//     new_node->next=NULL;
//     if(list==NULL){
//         list=new_node;
//     }
//     else{
//         for(temp=list;temp->next!=NULL;temp=temp->next);
//         temp->next=new_node;
//     }
// }
// void Addbefore(){
//         int T,X;
//         scanf("%d",&T);
//         scanf("%d",&X);
//         struct node *new_node,*temp;
//         new_node=(struct node*)malloc(sizeof(struct node));
//         if(list!=NULL && list->data==T){
//             new_node->next=list;
//             list=new_node;
//             print2();
//             return;
//         }
//         for(temp=list; temp->next !=NULL && temp->next->data!=T ; temp=temp->next);
//         if(temp->next==NULL){
//             printf("Target Element is Not Found\n");
//         }
//         else{
//             new_node->data=X;
//             new_node->next=temp->next;
//             temp->next=new_node;
//             print2();
//         }
//     }
// void print1(){
//         struct node *temp;
//         printf("List->");
//         for(temp=list;temp!=NULL;temp=temp->next){
//             printf("%d->",temp->data);
//         }
//         printf("NULL\n");
//     }
// void print2(){
//         struct node *temp;
//         printf("After Insertion\n");
//         printf("List->");
//         for(temp=list;temp !=NULL;temp=temp->next){
//             printf("%d->",temp->data);
//         }
//         printf("NULL\n");
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print1();
//     Addbefore();
    
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* next;
// };
// struct node* list=NULL;
// void Addlast(){
//     int data;
//     scanf("%d",&data);
//     struct node *temp,*new_node;
//     new_node=(struct node*)malloc(sizeof(struct node));
//     new_node->data=data;
//     new_node->next=NULL;
//     if(list==NULL){
//         list= new_node;
//     }
//     else{
//         for(temp=list;temp->next != NULL; temp=temp->next);
//         temp->next=new_node;
//     }
// }
// void insert(){
    
// }
// void print1(){
//     struct node *temp;
//     printf("List->");
//     for(temp=list; temp!=NULL; temp=temp->next){
//         printf("%d->",temp->data);
//     }
//     printf("NULL\n");
// }
// int main()
// {   
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     return 0;
// }

//Double linked
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *list = NULL;
// void AddLast(){
//     int data;
//     struct node *new_node;
//     new_node=(struct node*)malloc(sizeof(struct node));
//     scanf("%d",&data);
//     new_node->data=data;
//     new_node->prev=NULL;
//     new_node->next=list;
//     if(list!=NULL){
//         list->prev=new_node;
//     }
//     list=new_node;
// }
// void print(){
//     struct node *temp;
//         printf("Forward\n");
//         printf("List->");
//         for(temp=list;temp->prev!=NULL;temp=temp->prev){
//             printf("%d ",temp->data);
//         }
//         printf("->NULL");
//         printf("\n");
//         printf("Backward\n");
//         printf("NULL->");
//         if(list!=NULL){
//         for(temp=list;temp!=NULL;temp=temp->next);
//         for(temp=list;temp !=NULL;temp=temp->prev){
//             printf("%d ",temp->data);
//         }
//         printf("->List");
//         }
// }
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         AddLast();
//     }
//     print();
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *list=NULL;
// void Addlast(){
//     int data;
//     struct node *last;
//     struct node *new_node=(struct node*)malloc(sizeof(struct node));
//     scanf("%d",&data);
//     new_node->data=data;
//     if(list==NULL){
//         new_node->next=new_node;
//         new_node->prev=new_node;
//         list=new_node;
//     }
//     else{
//         last=list->prev;
//         new_node->next=list;
//         list->prev=new_node;
//         new_node->prev=last;
//         last->next=new_node;
//     }
// }
// void print(){
//     struct node *temp;
//     printf("List<=>");
//     for(temp=list;temp->next!=list;temp=temp->next){
//         printf("%d<=>",temp->data);
//     }
//     printf("%d<=>",temp->data);
//     printf("List");
// }
// void middle(int n){
//     struct node *temp;
//     int i=0;
//     if(n%2!=0){
//         for(temp=list,i=1;i<((n/2)+1);temp=temp->next,i++);
//         printf("Middle element is ");
//         printf("%d",temp->data);
//     }
//     else{
//         for(temp=list,i=1;i<(n/2);temp=temp->next,i++);
//         printf("Middle element is ");
//         printf("%d",temp->data);
//     }
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print();
//     printf("\n");
//     middle(n);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *list=NULL;
// void Addlast(){
//     int data;
//     struct node *last;
//     struct node *new_node=(struct node*)malloc(sizeof(struct node));
//     scanf("%d",&data);
//     new_node->data=data;
//     if(list==NULL){
//         new_node->next=new_node;
//         new_node->prev=new_node;
//         list=new_node;
//     }
//     else{
//         last=list->prev;
//         new_node->next=list;
//         list->prev=new_node;
//         new_node->prev=last;
//         last->next=new_node;
//     }
// }
// void print(){
//     struct node *temp;
//     printf("List->");
//     for(temp=list;temp->next!=list;temp=temp->next){
//         printf("%d ",temp->data);
//     }
//     printf("%d->",temp->data);
//     printf("List");
// }
// void Target(){
//     struct node *temp,*last;
//     int T;
//     scanf("%d",&T);
//     for(temp=list;temp->data!=T;temp=temp->next);
//     for(last=list;last->next!=list;last=last->next);
//     if(temp->next!=temp || temp->prev!=temp){
//         temp->prev=temp->prev->prev;
//         temp->next=temp->next->next;
//         temp->prev->next=temp;
//         temp->next->prev=temp;
//         print();
//     }
//     else if(temp==list && temp->next!=temp){
//         temp->prev=last->prev->prev;
//         temp->next=temp->next->next;
//         last->prev->next=temp;
//         temp->next->prev=temp;
//         print();
//     }
//     else if(temp==last && temp->prev!=temp){
//         temp->prev=last->prev->prev;
//         temp->next=temp->next->next;
//         last->prev->prev->next=temp;
//         temp->next->next->prev=temp;
//         print();
//     }
//     else{
//         printf("List is Empty");
//     }
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print();
//     printf("\n");
//     Target();
    
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *list=NULL;
// void Addlast(){
//     int data;
//     struct node *last;
//     struct node *new_node=(struct node*)malloc(sizeof(struct node));
//     scanf("%d",&data);
//     new_node->data=data;
//     if(list==NULL){
//         new_node->next=new_node;
//         new_node->prev=new_node;
//         list=new_node;
//     }
//     else{
//         last=list->prev;
//         new_node->next=list;
//         list->prev=new_node;
//         new_node->prev=last;
//         last->next=new_node;
//     }
// }
// void print(){
//     struct node *temp;
//     printf("List->");
//     for(temp=list;temp->next!=list;temp=temp->next){
//         printf("%d ",temp->data);
//     }
//     printf("%d->",temp->data);
//     printf("List");
// }
// void Target(){
//     struct node *temp,*last;
//     int T;
//     scanf("%d",&T);
//     for(temp=list;temp->data!=T;temp=temp->next);
//     for(last=list;last->next!=list;last=last->next);
//     last->next=list;
//     list->prev=last;
//     if(temp->next!=temp || temp->prev!=temp){
//         temp->prev=temp->prev->prev;
//         temp->next=temp->next->next;
//         temp->prev->next=temp;
//         temp->next->prev=temp;
//         print();
//     }
//     else if(temp==list && temp->next!=list){

//         temp->prev=last->prev;
//         last->prev->next=temp;
        
//         temp->next=temp->next->next;
//         temp->next->next -> prev = temp;
//         print();
//     }
//     else if(temp->next=temp->prev){
//         printf("List is Empty");
//     }
//     else{
//         printf("I was here \n");
//         temp->next=list->next;
//         list->next->prev=temp;
//         list = list->next;
        
//         temp->prev=temp->prev->prev;
//         temp->prev->prev->next=temp;
//         print();
//     }
// }

// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print();
//     printf("\n");
//     Target();
    
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = newNode->prev = newNode;
//     return newNode;
// }

// void insertEnd(Node** head, int data) {
//     Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         return;
//     }
//     Node* last = (*head)->prev;
//     newNode->next = *head;
//     (*head)->prev = newNode;
//     newNode->prev = last;
//     last->next = newNode;
// }

// void display(Node* head) {
//     if (head == NULL) {
//         printf("List is Empty\n");
//         return;
//     }
//     Node* temp = head;
//     do {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("\n");
// }

// Node* search(Node* head, int data) {
//     Node* temp = head;
//     do {
//         if (temp->data == data)
//             return temp;
//         temp = temp->next;
//     } while (temp != head);
//     return NULL;
// }

// void deleteNode(Node** head, Node* del) {
//     if (*head == NULL || del == NULL)
//         return;
//     if (*head == del)
//         *head = del->next;
//     if (del->next != del)
//         del->next->prev = del->prev;
//     if (del->prev != del)
//         del->prev->next = del->next;
//     free(del);
// }

// void deleteTarget(Node** head, int target) {
//     Node* targetNode = search(*head, target);
//     if (targetNode == NULL) {
//         printf("Position Not Found\n");
//         return;
//     }
//     if (*head == (*head)->next) {
//         free(*head);
//         *head = NULL;
//         return;
//     }
//     Node* prevNode = targetNode->prev;
//     Node* nextNode = targetNode->next;
//     deleteNode(head, prevNode);
//     deleteNode(head, nextNode);
// }

// int main() {
//     Node* head = NULL;
//     int N, P, element;
//     printf("Enter number of elements N: ");
//     scanf("%d", &N);

//     printf("Enter the elements to be inserted:\n");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &element);
//         insertEnd(&head, element);
//     }

//     printf("Enter the Target Position P: ");
//     scanf("%d", &P);

//     printf("List before deletion: ");
//     display(head);

//     if (head == NULL) {
//         printf("List is Empty\n");
//         return 0;
//     }

//     deleteTarget(&head, P);

//     printf("List after deletion: ");
//     display(head);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *list=NULL;
// void Addlast(){
//     int data;
//     struct node *last;
//     struct node *new_node=(struct node*)malloc(sizeof(struct node));
//     scanf("%d",&data);
//     new_node->data=data;
//     if(list==NULL){
//         new_node->next=new_node;
//         new_node->prev=new_node;
//         list=new_node;
//     }
//     else{
//         last=list->prev;
//         new_node->next=list;
//         list->prev=new_node;
//         new_node->prev=last;
//         last->next=new_node;
//     }
// }
// void print(){
//     struct node *temp;
//     printf("List->");
//     for(temp=list;temp->next!=list;temp=temp->next){
//         printf("%d ",temp->data);
//     }
//     printf("%d->",temp->data);
//     printf("List");
// }
// void Target(int n){
//     struct node *temp,*last;
//     int T;
//     scanf("%d",&T);
//     for(temp=list;temp->data!=T;temp=temp->next);
//     for(last=list;last->next!=list;last=last->next);
//     if(n == 1 && list->data == T){
//         printf("List is Empty");
//     }
//     else if (n == 1 && list->data != T)
//     {
//         printf("Target Element is Not Found");
//     }
//     else if(temp==list && temp->next!=temp){

//         temp->prev=last->prev;
//         last->prev->next=temp;
        
//         temp->next=temp->next->next;
//         temp->next->next -> prev = temp;
//         print();
//     }
//     else if(temp==last){

//         // printf("Last element is begin searched");
//         struct node *l;
//         temp->next=list->next;
//         list->next->prev=temp;
//         list = list->next;

//         temp->prev=temp->prev->prev;
//         temp->prev->next=temp;

//         // printf("Current List = %d",list->data);
//         // printf("\nList ka previous = %d",list->prev->data);
//         // printf("\nNext of list = %d",list->next->data);
        
//         print();
//         // printf("List->");
//         // for(temp=list;temp->next!=list;temp=temp->next){
//         //     printf("%d ",temp->data);
//         // }
//         // printf("%d->",temp->data);
//         // printf("List");
//     }
//     else{
//         // printf("This is in else part.");
//         temp -> next = temp -> next->next;
//         temp -> next -> prev = temp;

//         temp -> prev = temp -> prev ->prev;
//         temp -> prev -> next = temp;
//         print();
//     }
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print();
//     printf("\n");
//     Target(n);
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *list=NULL;
// void Addlast(){
//     int data;
//     struct node *last;
//     struct node *new_node=(struct node*)malloc(sizeof(struct node));
//     scanf("%d",&data);
//     new_node->data=data;
//     if(list==NULL){
//         new_node->next=new_node;
//         new_node->prev=new_node;
//         list=new_node;
//     }
//     else{
//         last=list->prev;
//         new_node->next=list;
//         list->prev=new_node;
//         new_node->prev=last;
//         last->next=new_node;
//     }
// }
// void print(){
//     struct node *temp;
//     printf("List->");
//     for(temp=list;temp->next!=list;temp=temp->next){
//         printf("%d ",temp->data);
//     }
//     printf("%d->",temp->data);
//     printf("List");
// }
// void Target(int n){
//     struct node *temp,*last;
//     int T;
//     scanf("%d",&T);
//     for(temp=list;temp->data!=T;temp=temp->next);
//     for(last=list;last->next!=list;last=last->next);
//     if(n == 1 && list->data == T){
//         printf("List is Empty");
//     }
//     else if (n == 1 && list->data != T)
//     {
//         printf("Target Element is Not Found");
//     }
//     // else if(temp==list && temp->next!=temp){

//     //     temp->prev=last->prev;
//     //     last->prev->next=temp;
        
//     //     temp->next=temp->next->next;
//     //     temp->next->next -> prev = temp;
//     //     print();
//     // }
//     else if(temp==last){

//         // printf("Last element is begin searched");
//         temp->next=list->next;
//         list->next->prev=temp;
//         list = list->next;

//         temp->prev=temp->prev->prev;
//         temp->prev->next=temp;

//         // printf("Current List = %d",list->data);
//         // printf("\nList ka previous = %d",list->prev->data);
//         // printf("\nNext of list = %d",list->next->data);
        
//         print();
//         // printf("List->");
//         // for(temp=list;temp->next!=list;temp=temp->next){
//         //     printf("%d ",temp->data);
//         // }
//         // printf("%d->",temp->data);
//         // printf("List");
//     }
//     else{
//         // printf("This is in else part.");
//         temp -> next = temp -> next->next;
//         temp -> next -> prev = temp;

//         temp -> prev = temp -> prev ->prev;
//         temp -> prev -> next = temp;
//         print();
//     }
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         Addlast();
//     }
//     print();
//     printf("\n");
//     Target(n);
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>  // Import string library for potential string manipulation

// // Node structure for linked list
// struct Node {
//     char data;
//     struct Node *next;
// };

// struct Node *top = NULL;  // Stack top pointer
// int isBalanced = 1;  // Global variable to track balance status

// // Push function to add an element to the stack
// void Push(char n) {
//     struct Node *temp = malloc(sizeof(struct Node));
//     temp->data = n;
//     temp->next = top;
//     top = temp;
// }

// // Pop function to remove an element from the stack
// void Pop(char expected) {
//     if (top == NULL) {
//         isBalanced = 0;  // Mark as not balanced if stack is empty
//         return;
//     }

//     struct Node *temp = top;
//     char poppedValue = temp->data;
//     top = top->next;
//     free(temp);

//     // Check if the popped value matches the expected closing bracket
//     if (poppedValue != expected) {
//         isBalanced = 0;  // Mark as not balanced if mismatched
//     }
// }

// // Function to check if the stack is empty
// void CheckEmpty() {
//     if (top != NULL) {
//         isBalanced = 0;  // Mark as not balanced if stack is not empty
//     }
// }

// int main() {
//     char input[100];
//     printf("Enter the expression: ");
//     gets(input);  // Read input safely to avoid buffer overflow

//     // Check for empty input
//     if (strlen(input) == 0) {
//         printf("Not Balanced\n");
//         return 0;
//     }

//     for (int i = 0; input[i] != '\0'; i++) {
//         if (input[i] == '[' || input[i] == '{' || input[i] == '(') {
//             Push(input[i]);
//         } 
//         else if (input[i] == ']') {
//             Pop('[');
//         } 
//         else if (input[i] == '}') {
//             Pop('{');
//         } 
//         else if (input[i] == ')') {
//             Pop('(');
//         }

//         if (!isBalanced) {
//             break;  // Stop processing if already found unbalanced
//         }
//     }

//     CheckEmpty();

//     if (isBalanced) {
//         printf("Balanced\n");
//     } else {
//         printf("Not Balanced\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d",&T);
// 	for(int i=0;i<T;i++){
// 	    int a,b,k;
// 	    int A[100];
// 	    scanf("%d",&a);
// 	    scanf("%d",&b);
// 	    scanf("%d",&k);
	
// 	    A[0]=a;
//         A[1]=b;
// 	    int q=a-b;
// 	    k=k-1;
// 	    for(int j=3;j<100;j++){
// 	        if(j%2==0){
// 	            A[j]=A[j-1]+a;
// 	        }
// 	        else{
// 	            A[j]=A[j-1]-q;    
// 	        }
// 	    }
//         for(int j =0;j<20;j++){
//             printf("%d ",A[j]);
//         }
//         printf("\n");
// 	    if(q>0){
//     	   if(k%2==0){
//              printf("%d\n",A[k-2]);
// 	        }
// 	        else{
// 	           printf("%d\n",A[k]);
//          }
// 	    }
// 	    else{
// 	        if(k%2==0){
//              printf("%d\n",A[k-1]);
// 	        }
// 	        else{
// 	           printf("%d\n",A[k-1]);
//          }
// 	    }
	   
	        
// 	}

// }

// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d",&T);
// 	for(int i=0;i<T;i++){
// 	    int a,b,k;
// 	    int A[100];
// 	    scanf("%d",&a);
// 	    scanf("%d",&b);
// 	    scanf("%d",&k);
// 	    A[0]=a;
// 	    A[1]=b;
// 	    int q=a-b;
// 	    k=k-1;
// 	    for(int j=2;j<100;j++){
// 	        if(j%2==0){
// 	            A[j]=A[j-1]+a;
// 	        }
// 	        else{
// 	            A[j]=A[j-1]-q;    
// 	        }
// 	    }
//         for(int j =0;j<20;j++){
//             printf("%d ",A[j]);
//         }
//         printf("\n");
// 	    if(k==0){
// 	        printf("0\n");
// 	    }
// 	    else{
// 	    if(q>0){
//     	   if(k%2==0){
//              printf("%d\n",A[k-2]);
// 	        }
// 	        else{
// 	           printf("%d\n",A[k]);
//          }
// 	    }
// 	    else if(q<0){
// 	        if(k%2==0){
//              printf("%d\n",A[k-1]);
// 	        }
// 	        else{
// 	           printf("%d\n",A[k-1]);
//          }
// 	    }
// 	    }
	   
	        
// 	}

// }

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        // Print the array after every iteration
        printf("Iteration %d: ", i);
        printArray(arr, size);
    }
}

int main() {
    int arr[] = {9,4 ,2 ,6 ,7,3,1,5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Initial array: ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);
    printf("hh");
    return 0;
}

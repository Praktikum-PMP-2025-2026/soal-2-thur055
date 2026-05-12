#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int jadwal;
    struct Node* Right;
    struct Node* Left;
} Node;

typedef struct tree{
    Node* root;
} tree;


void insert_tree (Node *root, ){

}
// level 0 = 1, 1 = 3, 2 = 7, 3 = 15;
void print_level (tree T, int N){
    

}

void printtree(Node *root){
    if(root == NULL){
        printf("Kosong\n");
        return;
    }
    printf("%s\n", root->jadwal);
    printf("Left of %d: ", root->jadwal);
    printtree(root->Left);
    printf("Right of %d: ", root->jadwal);
    printtree(root->Right);
}

int main (){
    int N;
    int jadwal;
    tree t;
    Node *n1 =(Node*)malloc(sizeof(Node));
    Node *n2  = (Node*)malloc(sizeof(Node));
    Node *n3 = (Node*)malloc(sizeof(Node));
    Node *n4 = (Node*)malloc(sizeof(Node));
    Node *n5 = (Node*)malloc(sizeof(Node));
    Node *n6 = (Node*)malloc(sizeof(Node));
    Node *n7 = (Node*)malloc(sizeof(Node));
    Node *n8 = (Node*)malloc(sizeof(Node));
    Node *n9 = (Node*)malloc(sizeof(Node));
    Node *n10 = (Node*)malloc(sizeof(Node));
    Node *n11 = (Node*)malloc(sizeof(Node));
    Node *n12 = (Node*)malloc(sizeof(Node));
    Node *n13 = (Node*)malloc(sizeof(Node));
    Node *n14 = (Node*)malloc(sizeof(Node));
    Node *n15 = (Node*)malloc(sizeof(Node));

    n1->Left = n2;
    n1->Right = n3;
    n2->Left = n4;
    n2->Right = n5;
    n3->Left = n6;
    n3->Right = n7;
    n4->Left = n8;
    n4->Right = n9;
    n5->Left = n10;
    n5->Right = n11;
    n6->Left = n12;
    n6->Right = n13;
    n7->Left = n14;
    n7->Right = n15;
    n8->Left = NULL;
    n8->Right = NULL;
    n9->Left = NULL;
    n9->Right = NULL;
    n10->Left = NULL;
    
    t.root = (Node*)malloc(sizeof(Node));
    t.root = n1;
    scanf("%d ", &N);
    
    for (int i = 0; i < N-1;i++){
        scanf("%d ", &jadwal);
        
    }
    scanf("%d", &jadwal);
    
}

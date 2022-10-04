#include<stdio.h>
struct node{
char data;
struct node* left;
struct node* right;
struct node *h;
};
//////////////////////////////
struct node* GetNode(char x)
{
    struct node* p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
};
/////////////////////////
void PreOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        printf("%d",T->data);
        PreOrderTraversal(T->left);
        PreOrderTraversal(T->right);
    }
}
void InOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d",T->data);
        InOrderTraversal(T->right);
    }
}
void PostOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        PostOrderTraversal(T->left);
        PostOrderTraversal(T->right);
        printf("%d",T->data);
    }
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;

}
int height(struct node *t)
{
    if(t==NULL)
    {

    return 0;
    }
    else
    {
        if(t->left==NULL && t->right==NULL)
        {
            return 0;
        }
        else{
            return (1+max(height(t->left),height(t->right)));
        }

    }

}
int BalanceFactor(struct node *t)
{
    int hl,hr;
    if(t->left==NULL)
    {
        hl=0;
    }
    else{
        hl=1+height(t->left);
    }
    if(t->right==NULL)
    {
        hr=0;
    }
    else{
        hr=1+height(t->right);
    }
    return hl-hr;

}
struct node *RotateLeft(struct node *x){
struct node *y,*z;
y=x->right;
z=y->left;
y->left=x;
x->right=z;
return y;
}
/*****/
struct node *RotateRight(struct node *x){
struct node *y,*z;
y=x->left;
z=y->right;
y->right=x;
x->left=z;
return y;
}
/*****/
struct node *LL(struct node *x){
struct node *y;
y=RotateRight(x);
return y;
}
/******/
struct node *RR(struct node *x){
struct node *y;
y=RotateLeft(x);
return y;
}
/******/
struct node *LR(struct node *x){
struct node *y,*z,*w;
y=x->left;
z=RotateLeft(y);
x->left=z;
w=RotateRight(x);
return w;
}
/******/
struct node *RL(struct node *x){
struct node *y,*z,*w;
y=x->right;
z=RotateRight(y);
x->right=z;
w=RotateLeft(x);
return w;
}
/******/

struct node *AVLInsert(struct node *t,int x){
    struct node*h;
if(t==NULL){
    t=GetNode(x);
    t->data=x;
    t->h=0;
}
else{
    if(x<t->data){
        t->left=AVLInsert(t->left,x);
        int y=BalanceFactor(t);
        if(y==2){
            if(x<t->left->data){
               t=LL(t);
            }
            else{
                t=LR(t);
            }
        }
    }
    else{
        t->right=AVLInsert(t->right,x);
         int y=BalanceFactor(t);
        if(y==-2){
            if(x>t->right->data){
               t=RR(t);
            }
            else{
                t=RL(t);
            }
        }
    }
}
t->h=height(t);
return t;
}
/******/

    int main(){
struct node *root=NULL;

root=AVLInsert(root,14);
root=AVLInsert(root,11);
root=AVLInsert(root,13);
root=AVLInsert(root,8);
root=AVLInsert(root,10);
root=AVLInsert(root,7);
root=AVLInsert(root,3);
root=AVLInsert(root,2);
root=AVLInsert(root,4);
root=AVLInsert(root,9);
root=AVLInsert(root,6);
root=AVLInsert(root,12);
root=AVLInsert(root,1);
root=AVLInsert(root,5);

InOrderTraversal(root);
}



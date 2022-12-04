struct stack
{
int arr[5];
int tos;
};
void push (struct stack*,int);
int pop(struct stack*);

int main(){
struct stack s;
s.tos=-1;
int x,ch;

printf("1. for pushh\t 2. for pop \t3. pop ");
printf("select an oper:");
scanf("%d",&ch);

switch(ch)
    {
case 1:
    printf("\nenter an ele to push:");
    scanf("%d",x);
    push(&s,x);
    break;
case 2:
    x=pop(&s);
    printf("popped ele=%d\n",x);
    break;
case 3:
    printf("wrong inp. plz try again");
    }while(ch!=3);
return 0;
}

void push (struct stack *p,int x){
if(p->tos==4){
    printf("STCK OVERFLOW");
    return ;
}
p->tos++;
p->arr[p->tos]=x;
printf("push ele =%d",x);
return ;
}
int pop(struct stack *p){
int x;
if(p->tos==-1){
    printf("stack underflow");
    return;
}
x=p->arr[p->tos];
p->tos--;
return x;
}


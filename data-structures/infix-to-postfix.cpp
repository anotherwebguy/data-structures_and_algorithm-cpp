// Author Mohit

#include <stdio.h>
#include <string.h>
#include <math.h>


int MAX_SIZE=10;
char stack[10];

char pfix[20];
char expression[50];
int top=-1;

int isempty() {
    if(top==-1) return 1;
    else return 0;
}

int isfull() {
    if(top==MAX_SIZE) return 1;
    else return 0;
}

char peek() {
    return stack[top];
}

char pop() {
    
    if(!isempty()) {
        
        return stack[top--];
        
    }
    else {
       // printf("stack is empty\n");
        return 0;
        }
}

void push(char value) {
    if(!isfull()) {
        top=top+1;
        stack[top]=value;
    }
    else {
         printf("stack is full\n");
         }
}

int instackpr(char a)
{
    if(a=='+' || a=='-') {
       return(2);
       }
    else if(a=='*' || a=='/') { 
       return(4);
       }
    else if(a=='^') {
       return(5);
       }
    return(0);
    
}

int incomingpr(char a) {
    if(a=='+' || a=='-') return(1);
    else if(a=='*' || a=='/') return(3);
    else if(a=='^') return(6);
    else return(7);
    
    
}

void evaluate() {
    int i=0,x,y;
    char ans,c;
    
    while(pfix[i]!='\0') {
        if(pfix[i]>='0' && pfix[i]<='9')
        {
            push(pfix[i++]);
        }
        else if(pfix[i]=='+' || pfix[i]=='-' || pfix[i]=='*' || pfix[i]=='/' || pfix[i]=='^') {
            c=pfix[i];
            y=(int)(pop()-'0');
            x=(int)(pop()-'0');
            switch(c)
            {
                case '+':
                  ans=(char)((x+y)+'0');
                  break;
                  
                case '-':
                  ans=(char)((x-y)+'0');
                  break;
                  
                case '*':
                  ans=(char)(x*y+'0');
                  break;
                  
                case '/':
                  ans=(char)((x/y)+'0');
                  break;
                  
                case '^':
                  ans=(char)(pow(x,y)+'0');
                  break;
                    
            } 
            push(ans);
            i++;
        }
        
    }
    printf("after evaluation the ans becomes:-\n");
    int k=(int)peek()-'0';
    printf("%d",k);
}


int main() {
    printf("Enter the expression: ");
    scanf("%s",expression);
    stack[0]='$';
    int i=0,j=0;
    int p,s;
    while(expression[i]!='\0') {
        p=incomingpr(expression[i]);
        s=instackpr(peek());
        if(expression[i]=='(') {
            push('(');
            i++;
        }
        else if(expression[i]==')') {
            char t=pop();
            while(t!='(') {
                pfix[j++]=t;
                t=pop();
            }
            i++;
        }
        else if(p==7) {
            pfix[j++]=expression[i++];
        }
        else if(p>s) {
            push(expression[i++]);
            
        }
        else if(p<s) {
            char t=pop();
            while(instackpr(t)>p) {
                pfix[j++]=t;
                t=pop();
            }
            push(t);
            push(expression[i++]);
        }
        }
    while(!isempty()) {
        pfix[j++]=pop();
    }  
        pfix[j]='\0';
        printf("postfix array is:-\n"); 
  for(i=0;i<20;i++) {
        printf("%c",pfix[i]);
    } 
    printf("\n");
    top=-1;
    
    evaluate();
    
    return 0;
}

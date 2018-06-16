#include<iostream>
#include<cstring>

#include<cctype>

using namespace std;
 int top=-1;
char stack[200];
void push(int data)
{
    stack[++top]=data;
}
char pop()
{
    char data=stack[top];
    top--;
    return data;
}
int main(){
    int T;
    cin>>T;
    char str[1000];

    while(T--){
        cin>>str;
        int len = strlen(str);
        for(int i=0;i<len;i++){
            if(isalpha(str[i]))
            cout<<str[i];
            
            else if(str[i]=='('){
                push('(');
            }
            else if(str[i]==')'){
                while(stack[top]!='(')
                    printf("%c", pop());
                    pop();
            }
            else if(str[i]=='^'){
                while(stack[top]=='^')
                    printf("%c", pop());
                push(str[i]);
                }
            else if(str[i]=='/'|| str[i]=='*'){
                while(stack[top]=='/'||stack[top]=='*'||stack[top]=='^'){
                    printf("%c",pop());
                }
                push(str[i]);
            }
            else if(str[i]=='+'|| str[i]=='-'){
                while(stack[top]!='(')
                printf("%c",pop());
                push(str[i]);
            }

        }
        printf("\n");
    }
}

// (a+(b*c+d))

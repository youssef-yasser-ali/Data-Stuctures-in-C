#include <stdio.h>
#include <stdbool.h>

#include <stdlib.h>
#include "Stack.h"
int stackSizeUser(Stack *ps){
 int a =0;

 void count(){
    a++;
}
   traverseStack(ps,&count);
return a ;
}




void stackTopUser(typeEntry *pe,Stack *ps){
     pop(pe,ps) ;
     push(*pe,ps);
}

void display(typeEntry e){
    printf("%d from display function \n", e) ;
}

int main()


{
    Stack s1;
    char s[100], b;
    createStack(&s1);
    bool state = true;


    printf(" Enter The String : " );
    scanf("%s",s);

  for (int i = 0 ; s[i] != '\0';i++){
        b = s[i];
        push(b,&s1);
}


char el ;

while(!stackEmpty(&s1)){


        pop(&el,&s1);
        printf("%c" ,el);


    }



    return 0;
}



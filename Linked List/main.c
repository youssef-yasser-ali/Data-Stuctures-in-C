#include <stdio.h>
#include "linked-list.h"

void display(listEntry el){

printf(" %d ", el);


}



int main()
{

List l ;

createList(&l);


int a = 1 ;
int b = 2;
int c = 3 ;
int d = 4 ;
int e = 5 ;
int f = 6 ;
int g ;
int h;
int r =10;


insertList(0,a,&l);
insertList(1,b,&l);
insertList(2,c,&l);
insertList(3,d,&l);
insertList(4,e,&l);

printf("the list after insert from 0 to 4 index \n");
traverseList(&l,&display);




deleteList(3,&g,&l);
printf("\n------------------ \n");
printf("delete element %d from position 3 : \n",g );
traverseList(&l,&display);



insertList(2,f,&l);
printf("\n------------------ \n");
printf("after insert element %d in position 2 : \n", f);
traverseList(&l,&display);




replaceList(0,r,&l);
printf("\n------------------ \n");
printf("after replace %d in position 0 : \n", r);
traverseList(&l,&display);


printf("\n------------------ \n");
retrieveList(4,&h,&l);
printf("The element in position 4 : %d \n ",h);



    return 0;
}

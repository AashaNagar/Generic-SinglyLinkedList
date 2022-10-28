#include<tm_sll.h>
#include<stdio.h>
int main()
{
int i1,i2,i3,i4,i5,i6,i7,y;
int*x;
bool succ;
SinglyLinkedList *list1;
list1=createSinglyLinkedList(&succ);
if(succ==false)
{
printf("Unable to creat list \n");
return 0;
}
printf("List created\n");
i1=100;
i2=200;
i3=300;
i4=400;
i5=600;
i6=500;
addToSinglyLinkedList(list1,(void*)&i1,&succ);
if(succ)printf("%d added to the list1 \n",i1);
else ("unable to add %d to list1 \n",i1);

addToSinglyLinkedList(list1,(void*)&i2,&succ);
if(succ)printf("%d added to the list2 \n",i2);
else ("unable to add %d to list1 \n",i2);

addToSinglyLinkedList(list1,(void*)&i3,&succ);
if(succ)printf("%d added to the list1 \n",i3);
else ("unable to add %d to list1 \n",i3);

addToSinglyLinkedList(list1,(void*)&i4,&succ);
if(succ)printf("%d added to the list1 \n",i4);
else ("unable to add %d to list1 \n",i4);

printf("Contents of the list1 \n");
for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int*)getFromSinglyLinkedList(list1,y,&succ);
printf("%d\n",*x);
}
return 0;
}
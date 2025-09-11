//find index of elements that fit
#include<stdio.h>

void main(){
int a[4] = {2, 7, 11, 15};
int ele1,ele2, targetSum = 18, found = 0;

for(ele1=0; ele1<4; ele1++){
    for (ele2=0; ele2<4; ele2++){
        if (a[ele1]+a[ele2]== targetSum){
            printf("indexes:  %d %d", ele1, ele2);
            found+=1;
            break;   //break from inner loop
        } 
    }
    if(found){
        break;
    }
}
     
}

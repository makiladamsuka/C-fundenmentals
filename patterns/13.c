//passcal triangle
#include<stdio.h>

/*
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1


C(n,k)=    n!
        k!(n−k)!

when n=0 k=0
1/1*1 =1

when m=1 k=2
1/2
​
*/
int value(int row, int str);
int fact(int num);

void main(){
    int n=5;
    
    for (int row=0; row<n; row++){
        for (int spc=row; spc<n; spc++){
            printf("  ");
        }
        
        for  (int str=0; str<=row; str++){  //row=0 str=0|row=1 str=0|row=1 str=1|row=2 str=0|row=2 str=1
            printf("%d   ", value(row, str));
        }
        
        printf("\n");
    }
}


int value(int row, int str){
    return fact(row)/ (fact(str)*fact(row-str));
}

int fact(int num){
    if (num==1 || num==0){
        return 1;
    }

    return num*fact(num-1);
} 
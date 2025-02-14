#include<stdio.h>

int max(int x, int y){
    /*
    if(x>y){
        return x;
    }else{
        return y;
    }
    */

    return (x > y) ? x : y;
}

int main(){

    int maxNum = max(5, 9);
    printf("%d", maxNum);
    /*
    Ternary operator => shortcut to if/ else when assigning/ returning a value

    (Condition) ? value if true : value if false
    */

    return 0;
}
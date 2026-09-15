#include<stdio.h>  // for non zero value ke liye
int main (){
if(1) {
    printf("this is execute 1\n");
}
if(2342) {
    printf("this is executed 2\n");
}

if('c') {
    printf("this is executed 3\n");
}

if(7.23) {
    printf("this is executed 4\n");
}
if(0) {
    printf("this is executed 3\n");
}
return 0;


}
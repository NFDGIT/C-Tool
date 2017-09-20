#include <stdio.h>
#include "header.h"
typedef void(*func)();


// void filefunc(){
//   printf("函数指针");
// }

// float * find();
void loopCycle(void){
    float a;
    float b;
    char operator;
    
    
    scanf("%f\n%c\n%f",&a,&operator,&b);
    
    //   printf("%c",operator);
    
    //    display(&operator);
    
    printf("%f=%f%c%f\n",arithmetic(a,operator,b),a,operator,b);
    loopCycle();
    
}
int main(void){
//      float * p;
//      p = find();
//      print(*p);
// //   func fun = filefunc;
//   fun();

//    float * p;
//    scanf("%f",p);



//    printf("%f",*p);

 
    loopCycle();
    
    return 0;
}

// float * find(){
//     float * pt;
//     pt = 3;
//     return pt;
// }

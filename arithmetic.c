 #include <stdio.h>
 #include "header.h"
float arithmetic(float a,char operator, float b){
  //  printf("%f,%c,%f\n",a,operator,b); 
  float result;
  if(operator == '+'){
    result = add(a,b);
  }else if(operator == '-'){
    result = subtract(a,b);
  }else if(operator == '*'){
    result = multiply(a,b);
  }else if(operator == '/'){
    result = devide(a,b);
  }
  //  printf("%f",result);
   return result;
}

float add(float a,float b){// 加
  float result;
  result = a+b;
  return result;
}
float subtract(float a,float b){// 减
  float result;
  result = a-b;
  return result;
}
float multiply(float a,float b){// 乘
  float result;
  result = a*b;
  return result;
}
float devide(float a,float b){// 除
  float result;
  result = a/b;
  return result;
}

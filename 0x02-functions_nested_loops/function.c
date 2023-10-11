 #include<stdio.h>
  int larger;
 int large_numbers(int number1,int number2);
 int main(){
    int a=200;
    int b=100;
    int result =large_numbers(a,b);
    printf("the larger number is %d\n",result);
    return (0);
 }
  int large_numbers(int number1,int number2){
   
    if (number1>number2)
    
    larger=number1;
    else
    larger=number2;
    return (larger);
  }
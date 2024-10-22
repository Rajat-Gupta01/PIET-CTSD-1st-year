// // #include<stdio.h>

// // // void fun(int n){
// // // if(n>0){
// // //     printf("%d\n", n);
// // //     fun(n-1);
// // // }
// // // }

// // // int main(){
// // //     int x=3;

// // //     fun(x);
// // //     return 0;
// // // }

// // // int fun(int n)
// // // {
// // //     if (n > 0){
// // //         return fun(n-1)+n;
// // //     }
// // //     return 0;
// // // }

// // // int main(){
// // //     int sum;
// // //     sum=fun(5);
// // //     printf("%d\n",sum);
// // //     return 0;
// // // }

// // // --------------------------Tree recursion
// // // void fun(int n){
// // //     if(n>0){
// // //     printf("%d\n", n);
// // //     fun(n-1);
// // //     fun(n-1);
// // //     }}
// // //     int main(){
// // //         fun(3);
// // //         return 0;
// // //     }
// // // -----------------------------Nested Recursion
// // // int fun(int n){
// // //     if(n>100){
// // //         return n-10;
// // // }else{
// // //     fun(fun(n+11));
// // // }}
// // // int main(){
// // //     int r;
// // //     r=fun(900);
// // //     printf("%d\n", r);
// // //     return 0;
// // // }

// // // ---------------------------------------sum of n terms

// // // int sum(int n){
// // //     if(n==0)
// // //     {
// // //         return 1;
// // //     }
// // //     else{
// // //         return sum(n-1)*n;
// // //     }
// // // }

// // // int main(){
// // //     int r;
// // //     r=sum(5);
// // //     printf("%d", r);
// // //     return 0;
// // // }
// // ==
// // // int main()
// // // {
// // //     float radius;
// // //     float pi=3.14;
// // //     printf("Enter radius ");
// // //     scanf("%f", &radius);
// // //     printf("Area of the square will be : %f", 3.14*radius*radius);
// // //     return 0;
// // // }

// // // int main(){
// // //     // int a= (int)1.99999;
// // //     printf("%d",2>3);
// // //     return 0;
// // // }

// // // int main(){
// // //     int age;
// // //     printf("Enter your age: ");
// // //     scanf("%d", &age);

// // //     // if(age>=18)
// // //     //     printf("You are adult\n");
// // //     // else if(age<18 && age>13){
// // //     //     printf("You are teenage \n");
// // //     // }
// // //     //     printf("You can null and void");
// // // age>18?printf("adult"): printf("not adult");

// // // }

// // // int main(){
// // //     char day;
// // //     printf("Enter day (1 to 7)");
// // //     scanf("%s",&day);
// // //     switch(day){
// // //         case 'm' : printf("Monday");
// // //         break;
// // //         case 't' : printf("Tuesday");
// // //         break;
// // //         case 'w' : printf("Wednesday");
// // //         break;
// // //         case 'th': printf("Thursday");
// // //         break;
// // //         case 'f': printf("Friday");
// // //         break;
// // //         case 's': printf("Saturday");
// // //         break;
// // //         case 'su': printf("Sunday");
// // //         break;
// // //         default: printf("Not a valid day");
// // //     }
// // // }

// // // int main(){
// // //     char ch;
// // //     printf("Enter character : ");
// // //     scanf("%c", &ch);

// // //     if(ch>='A' && ch <='Z'){
// // //         printf("Upper case %c", ch);
// // //     }else if(ch>='a' && ch <='z'){
// // //         printf("Lower case case %c", ch);
// // //     }else{
// // //         printf("wrong entry");
// // //     }
// // //     return 0;
// // // }
// // // int main(){
// // //     for(int i=0;i<100;i++){
// // //         printf("%d\n", i);
// // //     }

// // //     return 0;
// // // }


// // // int main(){
// // //     int n;
// // //     int sum=0;
// // //     printf("Enter the number: ");
// // //     scanf("%d", &n);
// // //     for(int i=0, j=n; i<=n && j>=1; i++, j--)
// // //     {
// // //         sum= sum+i;
// // //         printf("%d\n", i);
// // //     }
// // //     printf("Sum is %d\n", sum);

// // //     // printf("Reverse of the number");

// // //     // for( int i=n; i>=1; i--){
    


// // //     return 0;
// // // }





















// // khgghgkjhhkjhjkhkjhjhkjhkhj













// #include<stdio.h>

// void main(){
//      //Sum of n natural numbers
//     int i,n,sum=0;
//     printf("Enter the value of n");
//     scanf("%d",&n);

//     for(i=0;i<=n;i++){
//         sum=sum+i;
//     printf("Sum of %d natural numbers is %d",n,sum);
//     }
//     printf("Sum of %d natural numbers is %d",n,sum);
// }


// #include<stdio.h>

//  void main(){
//      int n;
//     int i,fact=1;

//     printf("Enter the value of n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("factorial is %d",fact);

// }

// // -------------------------------------------Sum of even and odd



// void main(){
//     int i, sum_even=0, sum_odd=0;
//     for (i=51; i<=550; i++){
//         if(i%2==0){
//             sum_even=sum_even+i;
//         }else{
//             sum_odd=sum_odd+i;
//         }
//     }
//     printf("%d\n",sum_even);
//     printf("%d",sum_odd);
// }

// // ------------------------------------------------reverse a given number
// #include<stdio.h>
// void main(){
//     int n, rev;
//     printf("Enter a number = ");
//     scanf("%d",&n);

//     while(n>0){
//         rev=n%10;
//         printf("%d", rev);
//         n=n/10;
//     }
// }


// Check whether given number is palindrome

// Check whether given number is Armstrong.

// #include<stdio.h>
// void main()
// {
// int sum_even=0, sum_odd=0;

// for(int i=51;i<=550;i++)
// {
//     if(i%2==0){
//         sum_even=sum_even+i;
//     }else
//         sum_odd=sum_odd+i;
// }
//     printf("Sum of even numbers is %d\n",sum_even);
//     printf("Sum of odd numbers is %d",sum_odd);

// }


// #include<stdio.h>
// void namaste();
// void bonjour();

// void main(){
// namaste();
// // bonjour();

// }
// void namaste(){
//     printf("Namaste\n");
//     bonjour();
// }
// void bonjour(){
//     printf("Bonjour\n");
//     namaste();
// }

// #include<stdio.h>
// int sum(int a, int b);

// void main(){
// int a, b;
// printf("Enter the value of a");
// scanf("%d",&a);
// printf("Enter the value of b");
// scanf("%d",&b);
// // sum(a, b);
// printf(" the sum of %d and %d is %d", a,b,sum(a,b));
// }

// int sum(int a, int b){
//     return a+b;
// }

//Argument: Values that are passed in function call.
            // used to send values.
            // actual parameters.
//Parameter: Values in a function declaration & definition
            // used to receive values.
            // format parameters.


#include<stdio.h>
#include<math.h>

void main(){
    float n=4;
    printf("%f", pow(n,8));
}













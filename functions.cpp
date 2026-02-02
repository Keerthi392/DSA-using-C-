/* 
#include <iostream>
using namespace std;

void printHello(){               //this is function,where i  using void,means it doesnot gives any output,it gives o/p if i only calls it
    cout<<"hello\n";
}
int main(){

    return 0;
}
    */

/*
//calling the function/invoke 
#include <iostream>
using namespace std;

void printHello(){            
    cout<<"hello\n";
}
int main(){
    //function call/invoke
    printHello();          //here i m calling function,using function name(),so the control goes to function above and prinrs hello when i call the function

    return 0;
}
    */
/*
#include <iostream>
using namespace std;

void printHello(){            
    cout<<"hello\n";
}
int main(){
    printHello();   
    printHello();           //here i can call function many times that many times the ouput will be returned
    printHello();
    printHello();      

    return 0;
}
    */
/*
#include <iostream>
using namespace std;

int printHello(){                          //here i m using int so the i can return the output in integer format and returns 3        
    cout<<"hello\n";
    return 3;
}
int main(){
    int val=printHello();              //here i m storing int in val variable and return that val(3) in next line
    cout<<val;

    return 0;
}
    */
/*
#include <iostream>
using namespace std;

int printHello(){                                  
    cout<<"hello\n";
    return 3;
}
int main(){   
    //function call/invoke       
    cout<<printHello()<<endl;           //instead of storing in variable i can directly cout the function and prints the output (hello and 3)

    return 0;
}
    */

/* //(parameters) for sum of 2 numbers
#include <iostream>
using namespace std;

int sum(int a,int b){             //using parameters here int a,int b for calculating sum of two integers
    int s=a+b;
    return s;
}
int main(){
    cout<<sum(10,5)<<endl;           //i'm giving values of paramters inside the function name
}
    */
/*
#include <iostream>
using namespace std;


double sum(double a,double b){            
    double s=a+b;
    return s;
}
int main(){
    cout<<sum(10.45,5.325)<<endl;          
}
    */

/* //min of 2 numbers
#include<iostream>
using namespace std; 

int min(int a, int b){
    int min_2=a<b;
    return min_2;
}
int main(){
    cout<<min(9,5);
}
    */

/*
#include<iostream>
using namespace std;

int minoftwo(int a ,int b){              //parameters(int a,int b)
    if(a<b){
        return a;
    }else{
        return b;
    }
    }
    int main(){                          
        cout<<minoftwo(87,59);          // 87,59 are called as arguments which are going to storing in paramters int a,int b.
    }                                   //i'm going to get the minimum number in o/p
        */

 //arguments are actual values passed to function(literals)
 //parameters are copy of arguments
 //literals are values which cannot be changed.literals(ex:1,2,'A','a')are also arguments

 /* //sum of numbers from 1 to n
#include<iostream>
using namespace std;

int sumN(int n){                     //here i'm going to take int n as parameter
    int sum=0;
    for(int i=1;i<=n;i++){            //loop for printing numbers from 1 to n
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<sumN(9)<<endl;           //here i can print sum of numbers from 1to9 and 1to5 both using 1 for loop therefore function helps with this i.e(redundancy)
    cout<<sumN(5)<<endl;           //prints numbers from 1 to 5
    return 0;
} 
    */

/* //calculate n factorial
 #include<iostream>
using namespace std;

int factN(int n){
        int fact=1;                 //here i'm intializing fact=1 bcz i need to factorial of numbers as it starts from 1*...*n
        for(int i=1;i<=n;i++){
            fact=fact*i;              //(factorial=1*2*3*4..n)   for sum (sum=0)bcz addition starts from 0+1+..n
        }
        return fact;
    
    }
int main(){
    cout<<factN(4)<<endl;
    cout<<factN(5)<<endl;
    return 0;
}
    */

//Pass by value:copy of arguments passed to function:
/* 
#include<iostream>
using namespace std;

int sum(int a,int b){             //these int a,b and main func int a,b different both have different addreses
    return a+b;
}
int main(){
    int a=5;                     //here these arguments int a,int b values are copied to sum function to int a,int b.
    int b=4;
    cout<<sum(a,b)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int sum(int a,int b){        
    a=a+10;            //15
    b=b+10;            //14
    return a+b;        //29
}
int main(){
    int a=5;                     
    int b=4;
    cout<<sum(a,b)<<endl;          
    cout<<a<<endl;             //here i get a,b value 5,4 not 15,14 this shows the a,b here and sum func a,b are different this is called as pass by value.we are just passing copy of a,b to sum function
    cout<<b<<endl;
    return 0;
}
    */

/* //how these function works is,first control starts from int main,here changeX function is called,the control goes to changeX function and performs the execution
#include<iostream>
using namespace std;
 
int changeX(int x){
    x=2*x;
    cout<<x<<endl;
}
int main(){
    int x=5;
    changeX(x);
    cout<<x;
    return 0;                //this prints both x from changeX func(10)and x from main function(here)(5)
}
    */

/* //calculate sum of digits of number:

#include<iostream>
using namespace std;

int digitsum(int num){
    int remdig=0;
    while(num>0){                         //we take num>0 bcz when we do division num/10 from 3254,the last digit we get is 0,so num>0
        int lastdigit=num%10;             //this is used to get digits separately of a numbers like for 3245 if i modulo 3245%10=5,as rem so in tis way i get every last digits then324%10=4 so on....2 ,3
        num=num/10;                       //with this i get after 3245%10,i should get 324 for that i use 3245/10=324 remaning digits,and so on 32,3 then at last 0

        remdig+=lastdigit;                //here i'm going to add last dig i.e 4 5 2 3 to remdig(0)so that i get sum of digits of a number
    }
    return remdig;
}
int main(){
    cout<<digitsum(3254);
    return 0;
}
    */

/*  //calculate binomial coefficient for n,r:
#include<iostream>
using namespace std;

int factorial(int n){
        int fact=1;                 //here i m using fact logic to get factorial of a number 
        for(int i=1;i<=n;i++){
            fact=fact*i;            
        }
        return fact;
    }
int nCr(int n,int r){                     //nCr is binomial coefficient whose frormual is n!/(r!*(n-r)!
    int fact_n=factorial(n);              //here i'm just taking n! which is calculated in above function(int factorial)
    int fact_r=factorial(r);             //this also uses same logic of above func and gets r!
    int fact_n_r=factorial(n-r);            //n-r! is taken 

    return fact_n/(fact_r*fact_n_r);          // returns nCr by formulae by taking 8,2 from main func
    
}

int main(){
    int n=8,r=2;
    cout<<nCr(n,r)<<endl;
    return 0;
} 
    */ 
        
/* //write a function(waf) to check if a number is prime or not:

#include<iostream>
using namespace std;

int prime(int n){
    if (n<=1)
    return 0; 
   
  for(int i=2;i<n;i++){          //we start i=2,bcz 1 is composite number where every number is divisible by it,it checks till n(5),if it is divisible by any numbers in between them then it is prime orelse no
    if(n%i==0)
    return 0;
  }
  return 1;   
}
int main(){
    int n=5;
    if(prime(n)){
        cout<<"prime number";
    }
    else{
        cout<<"non-prime";
    }
    return 0;
}
    */




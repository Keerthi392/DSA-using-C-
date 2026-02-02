/*
#include <iostream>
using namespace std;
int main()
{
    int n=56;                    //here if i give -ve number.In output it wont return anything
    if(n>=0){
        cout<<"positive";
    }

    return 0;


}
    */

/* //if else:   
#include <iostream>
using namespace std;
int main()
{
    int n=-6;                    
    if(n>=0){
        cout<<"positive";
    } else{
        cout<<"negative";
    }

    return 0;
}
    */
    
/*
#include <iostream>
using namespace std;
int main()
{
    int age=5;                    //here if i give -ve number.In output it wont return anything
    if(age>=0){
        cout<<"u can vote";
    } else{
        cout<<"u cannot vote";
    }

    return 0;
}   
    */

/*
#include <iostream>
using namespace std;
int main()
{
    int n=56;                    
    if(n%2==0){
        cout<<"even number\n";              // (\n)for new line
        cout<<"bye\n";
    } else{
        cout<<"odd number\n";
    }
    return 0;
}
    */   

/*
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"enter number:";
    cin>>n;

    if(n%2==0){
        cout<<"even number\n";
    } else{
        cout<<"odd number\n";
    }
    return 0;
}
    */

/*  //if-else if-else:    
#include <iostream>
using namespace std;
int main()
{
    int marks=82;                    
    if(marks>=90){
        cout<<"grade A";
    } else if(marks>=80 && marks<90){             //here it checks if marks>80 adn also less than 90.and it returns output if both statements are true
        cout<<"grade B";
    } else{
        cout<<"grade C";
    }
    return 0;

} 
    */
/*   
#include <iostream>
using namespace std;
int main()
{
    char ch='k';                    
    if(ch>='a'&&ch<='z'){
        cout<<"lowercase";
    } else{
        cout<<"uppercase";
    }
    return 0;

}
    */ 

 /*
#include <iostream>
using namespace std;
int main()
{
    char ch='K';                //here implicit conversion takes place by converting ch='K' int ascii value and then comparison takes place       
    if(ch>=65&&ch<=90){
        cout<<"uppercase";
    } else{
        cout<<"lowercase";
    }
    return 0;

} 
   */ 

/*ternery statement:
#include <iostream>
using namespace std;
int main()
{  
    int n=33;
    cout<< (n>=0?"positive":"negative")<<endl;        //syntax for ternery is (condition?"statement1":"statement2")
    return 0;
}
    */


/*  //Loops:  
//printing numbers 1 to 5  
#include <iostream>
using namespace std;
int main()
{
    int count=1;                      //here we gonna intialize count=1                    
    while(count<=5){                   //we gonna check conditon if count 1<=5 if it is true 
        cout<< count << endl;            //we gonna print count then 
        count++;                       // next we gonna increase count with +1 then start with comparison and print numbers until it is less than or equals to 5
    }
    return 0;
}  
    */  
/*
#include <iostream>
using namespace std;
int main()
{
    int count=1;                      //here we gonna intialize count=1                    
    while(count<=10){                   //we gonna check conditon if count 1<=10 if it is true 
        cout<< count << " ";            //we gonna print count then 
        count++;                       // next we gonna increase count with +1 then start with comparison and print numbers until it is less than or equals to 10
    }
    return 0;
}
    */

/* //print number until n:
 #include <iostream>
using namespace std;
int main()
{
    int n=17;
    int i=1;                //we can use count also here like int count =1                                       
    while(i<=n){                   
        cout<< i << endl;            
        i++;                       
    }
    return 0;
}
    */

 /*  //for loop   
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)            //here we gonna start int i=1 then next condition is checked if i(1)<=5(n) then updation is done wiht 1..repeatation of checking condition and updation goes on until condtion becomes false i.e i<=5(n)
    {
        cout<< i << endl;
    }
    return 0;
} 
    */

/*   
#include <iostream>
using namespace std;
int main()
{
    int n=8;
    for(int i=1;i<=n;i+=2)    //here i gonna print numbers from 1 to 9 but updating or increasing it with +2  or we can use (i=i+2)   
    {
        cout<< i << endl;
    }
    return 0;
}
  */

/*  //sum  of numbers from 1 to n 
#include <iostream>
using namespace std;
int main()
{
    int n=5;                      //here we gonna print sum of numbers from 1 to n=5;
    int sum=0;                    //we are taking sum=0 at first
    for(int i=1;i<=n;i++){          //we are intializing int i=1 then we check condition if 1<=n(5),if true we gonna print(sum=sum+i)sum=0+1,then updation of 1 to 2 is done then check conditon if true print sum=sum+1(0+1+2)so on process continous
        sum+=i;
    }
        cout<<sum;
    return 0;
} 
    */
   
/*  //sum of numbers from 1 to n using while loop    
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int sum=0;
    int i=1;
    while(i<=n){            //here i m taking n=5,sum=0and intializinf i=1,then check condition using while if it is<=n(5),if true print sum=sum+i(0+1),then update 1 to 2(i++)process continous by checking condition and printing sum updating and so on..
        sum+=i;
        i++;
    }  
    cout<<sum;
    return 0;
}
    */ 

/*
//break statement
#include <iostream>
using namespace std;
int main()
{
    int n=10;                      
    int sum=0;                    
    for(int i=1;i<=n;i++){          
        sum+=i;
        if(i==6){                      //here it prints sum of numbers till 6 not till (n)10 and takes break.break is used to stop loop.until the mentioned condition 
            break;                    //here i'm using break to not print sum of numbers till 10 as n=10,but it prints sum of numbers till 6
        }
    }
        cout<<sum;
    return 0;
}
    */

/*
//prints odd numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<endl;;
        }
    }
    return 0;
} 
    */ 

 /* //sum of odd numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int odd_sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){              //here it only takes odd numebers as n%2!=0 we r taking i%2!=0 then add the odd nnumbers to sum
        odd_sum += i;
        }
    }
    cout<<odd_sum;
    return 0;
}
*/

/*  //print sum of odd number from 1 to n using while loop
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1;
    int odd_sum=0;
    while(i<=n){
        if(i%2!=0){
            odd_sum+=i;
        }
        i++;              //here i should use i++ outside bcz if it inside if i becmes 2(2%2)=0 becomes false and it doesnot increment and stays 2 forever and creates infinite loop

    }
    cout<<odd_sum;
    return 0;
} 
    */
/*  //sum of even numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n=10;
    int even_sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){              //here it only takes odd numebers as n%2!=0 we r taking i%2!=0 then add the odd nnumbers to sum
        even_sum += i;
        }
    }
    cout<<even_sum;
    return 0;
}
    */

 
/* //do while loop:
#include <iostream>
using namespace std;
int main()
{
    do{
        cout<<"hello world";
;    }while(3>9);                 //here even though 3 is notn > 9,the do while loop(do)prints hello world atleast once before checking condition
return 0;
}
*/

/*  
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);

    return 0;
} 
    */


/*   //print prime numbers:but here i can only print non prime no's but prime no's not possible so to overcome we use next code to print prime no's using for loop    
#include <iostream>
using namespace std;
int main(){
    int n=9;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"non_prime";
            }
        }
             
    return 0;
}
    */


/*   
#include <iostream>
using namespace std;
int main(){
    int n=9;
    bool is_prime=true;                   //here i'm intialize bool as true at first
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            is_prime=false;              //if n divides by i then it becomes false here..if it doesnot divides it is true as it is intialized before
            break;                       //it breaks the loop as once n is divisible by i..it wont check for next possibilities as once no is non-prime there is no necessitiy to check for next
            }                            // and here answer is storing in is_prime(variable)
        }
        if(is_prime==true){
            cout<<"prime";
        }else{
            cout<<"non_prime";
        }
return 0;      
}
*/

/*  //other method to check prime no:
#include <iostream>
using namespace std;
int main(){
    int n=7;
    bool is_prime=true;                   //here i'm intialize bool as true at first
    for(int i=2;i*i<=n;i++){                //instead of i<=n-1 i m using (i*i<=n) it checks from 2 to sqaure root of n i.e(i*i).more explanation written in notes
        if(n%i==0){
            is_prime=false;              //if n divides by i then it becomes false here..if it doesnot divides it is true as it is intialized before
            break;                       //it breaks the loop as once n is divisible by i..it wont check for next possibilities as once no is non-prime there is no necessitiy to check for next
            }                            // and here answer is storing in is_prime(variable)
        }
        if(is_prime==true){
            cout<<"prime";
        }else{
            cout<<"non_prime";
        }
return 0;      
}
*/

/*  //nested loop:(printing ***** in five lines)
#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=5;i++){
        cout<<"*****"<<endl;
    }
    return 0;
}
    */
/*
#include <iostream>
using namespace std;
int main(){
    int x=9;                   //here i'm printing x no of stars i.e 9;i single line
    for (int i=1;i<=x;i++){
        cout<< "*";
    }
    return 0;
}
    */

/*  //using of nested loop here..for loop inside a for loop:
#include <iostream>
using namespace std;
int main(){
        for (int i=1;i<=5;i++){         //here i'm iterating five times to print in five lines
        int m=9;                 
        for(int i=1;i<=m;i++){          //here i'm using this loop to print (m)=9 stars in every line
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
    */

 /*
#include <iostream>
using namespace std;
int main(){

        int n=10;
        for (int i=1;i<=n;i++){         //here i'm iterating n(10) number of times to print in five lines
        int m=9;                 
        for(int i=1;i<=m;i++){          //here i'm using this loop to print (m) no of times i.e=9 stars in every line
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
    */

/*  //using i and j for two loops.different variables i for one loop and j for another loop
#include <iostream>
using namespace std;
int main(){

        int n=10;
        for (int i=1;i<=n;i++){         //here i'm iterating n(10) number of times to print in ten lines
        int m=9;                 
        for(int j=1;j<=m;j++){          //here i'm using this loop to print (m) no of times i.e=9 stars in every line and variable i m changing to j
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
    */
//practice questions
/*   //sum of all numbers from 1 to n which are divisible by 3
#include <iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
    for (int i=1;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
*/

 /* //sum of all numbers from 1 to n which are divisible by 3 using while loop
#include <iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%3==0){
            sum+=i;
        }
            i++;
            }
    cout<<sum;
    return 0;
}
    */

/*  //print factorial of number n:     factorial means product of number n from 1 to n ex:n=3..ans=1*2*3=6
#include <iostream>
using namespace std;
int main(){
    int n=3;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
    */

    







  

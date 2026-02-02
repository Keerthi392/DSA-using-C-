// variables:
/*
#include <iostream>
using namespace std;
int main()
{
    int age = 20;                      //age is variable that stores the value
    cout << age <<endl;
    cout << sizeof(age) << endl;      //prints size of varaiable age
    
    char grade = 'A';
    cout << grade <<endl;

    float PI = 3.14f;
    cout << PI <<endl;

    bool isSafe = true;
    cout << isSafe <<endl;            //true = 1 , false = 0

    double price=100.53;
    cout << price <<endl;
    
   
    return 0;
}
*/


// type conversion:(implicit)
/*
#include <iostream>
using namespace std;
int main()
{
    char grade = 'a';       //here A(char) is stored in ascii value i.e A=65 or a= 97 
    int value = grade;      //here char converted into int automatically and int stores ascii value of char and returns the value of char
    cout << value <<endl;
    return 0;
}
*/

//type casting
/*
#include <iostream>
using namespace std;
int main()
{ 
    double price=100.99;
    int newprice=(int)price;        //here in casting we should write the datatype we want to convert in braces 
    cout<<newprice<<endl;            //we get output=100 and in c++ all the values after decimal point is ignored
    return 0;
}
*/

//input in c++:
/*
#include <iostream>
using namespace std;
int main()
{  
    int age=20;
    cout << "enter your age:" ;
    cin >> age;
    cout << "your age is:" <<endl;
    return 0;
}
*/

//operators:
//arthimetic operator:
/*
#include <iostream>
using namespace std;
int main()
{ 
    int a=10,b=2;

    int sum=a+b;
    cout <<sum<<endl; 
         //or
    cout <<"sum = " <<(a+b) <<endl;

    cout <<"difference = " <<(a-b) <<endl;
    cout <<"product = " <<(a*b) <<endl;
    cout <<"division = " <<(a/b) <<endl;          //we get quotient here for division
    cout <<"modulo= " <<(a%b) <<endl;             //we get remainder for modulo operator
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    double b=2;
    cout << (a/b);        //here we gonna get o/p in double datatype bcz double datatype's size is big but normally if we divide int by int we get o/p in int value all values after decimal point is ignored
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    float b=2;
    cout << (a/b);        //here we gonna get o/p in float datatype bcz float datatype's size is big
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    cout << (5/(double)2);     //here if i don't use (double) 2 i get o/p in int format.we are forcefully getting the o/p in double(type casting)  
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int ans=(5/(double)2);            //here i gonna get o/p in int format bcz i m storing result to int(ans)
    cout << ans;
    return 0;
}
*/

//relatinal operator:
/*
#include <iostream>
using namespace std;
int main()
{
   cout<<(3<5)<<endl;           //true=1
   cout<<(3>5)<<endl;           //false=0
   cout<<(3<=3)<<endl;
   cout<<(3==3)<<endl;
   cout<<(3!=3)<<endl;
   return 0;
}
*/

//logical operator:
/*
#include <iostream>
using namespace std;
int main()
{
   cout<<!(3<5)<<endl;             //!(not)operator reverses the output true(1) -> false(0)
   cout<<!(3==3)<<endl;
   cout<<!(3>9)<<endl;
   cout<<((3>1)||(5>9))<<endl;            // or(||)operator returns output true if one statement is true
   cout<<((3>9)||(5>9))<<endl;
   cout<<((5>3)&&(5>9))<<endl;              //And(&&)operator returns true only if both statements are true          
   cout<<((3>1)&&(5>3))<<endl;


   return 0;
}       
*/


//sum of 2 numbers:
/*
#include <iostream>
using namespace std;
int main()
{
    int sum,a=9,b=5;
    sum=a+b;
    cout<<sum<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:";
    cin>> a;

    cout<<"enter b:";
    cin>>b;

    int sum=a+b;
    cout<<sum;
    return 0;
} 
*/

//unary operator
/*
#include <iostream>
using namespace std;
int main()
{
    int a=9;
    int b=a++;                       //here (++)is increment op here it works first then increments later
    cout<<("b is:")<<b<<endl;       //here at first a value is assigned to b
    cout<<("a is:")<<a<<endl;        //then  a value is incremeted with 1
    
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a=9;
    int b=++a;                       //here (++)is increment op here it increments first then works later
    cout<<("b is:")<<b<<endl;       //here at first a value is incremeted or updated with 1;
    cout<<("a is:")<<a<<endl;        //then  a value is assigned to b i.e 10
    
    return 0;
}
*/    

/*
#include <iostream>
using namespace std;
int main()
{
    int a=9;
    int b=a--;                       //here (--)is decrement op here it works first then decrements later
    cout<<("b is:")<<b<<endl;       //here at first a value is assigned to b
    cout<<("a is:")<<a<<endl;        //then  a value is decrement with 1
    
    return 0;
}
 */

/*
#include <iostream>
using namespace std;
int main()
{
    int a=9;
    int b=--a;                       
    cout<<("b is:")<<b<<endl;       
    cout<<("a is:")<<a<<endl;      
    
    return 0;
}
*/    

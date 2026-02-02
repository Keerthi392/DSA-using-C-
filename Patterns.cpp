//printing patterns using loops(for)
/* 
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=1;i<=n;i++){      //it is used to print the ouptput in n number of lines i.e in 4lines first it starts with 1 and checks 1<=4,then prints 1line then it is increments to 2 and comparison and updation continous till 4.and prints 4 lines
        for(int j=1;j<=n;j++){    //this loop runs as many times the outer loop runs that is 4 times
            cout<<j<<" ";             //this prints ouptut i.e 1234 by starting with 1 and loop runs until the condition true and prints j as it becomes 1 then 2..3..4
        }
        cout<<endl;           //this is used to print 1234  in next line after it is printed in first line.as once loop runs and prints 1234 in first line it ends the line here then starts loop from second line
    }
    return 0;
}
    */

/*    
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=1;i<=n;i++){      
        for(int j=1;j<=n;j++){    
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
    int n=4;
    for (int i=0;i<n;i++){             //here instead of int i=1;i<=n-1 we can use int i=0;i<n as botn becomes same and prints same ouput 
        for(int j=0;j<n;j++){          //here if i starts loop from int i=0,i should print ouput till i<n,if i use i<=n it prints ouput in 5 lines&5 stars i.e more than n number of times
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
    int n=4;
    for (int i=0;i<=n;i++){  
        char ch='A';                //here i'm declaring char ch=A at first bcz i'm printing abcd 
        for(int j=0;j<n;j++){    
            cout<<ch;                //here it gonna print a at first
            ch=ch+1;                 //here ch is increments with one as char a is stored in ascii values automatically by system.as a ascii value is 65 it is increments with 1.it becomes 66 and 66 is back stored into char variable it becomes B in this way abcd is printed
        }
        cout<<endl;          
    }
    return 0;
}
    */

/*  //printing 123,456,789 in 3 lines
#include <iostream>
using namespace std;
int main(){
    int n=3;
    int num=1;                      //here i'm using num as i should print numbers from 1 continuation (1,2,3),(4,5,6(,(7 8 9) 3 set of numbers in 3 lines     
        for(int i=0;i<n;i++){           
        for (int j=0;j<n;j++){  
            cout<<num<<" ";             //if use cout<<j here.it prints 123 and 123 and 123 in each line 
            num++;                 //for each loop num is updated nd printed
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
    int n=3;
    char ch='A';                      //here i'm using num as i should print numbers from 1 continuation (1,2,3),(4,5,6(,(7 8 9) 3 set of numbers in 3 lines     
        for(int i=0;i<n;i++){           
        for (int j=0;j<n;j++){  
            cout<<ch<<" ";             //if use cout<<j here.it prints 123 and 123 and 123 in each line 
            ch++;                 //for each loop num is updated nd printed
        }
        cout<<endl;          
    }
    return 0;
}
    */


 /*  //triangle pattern:
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){                //here loop runs from 0 to n that is for (n)4 lines  
        for(int j=0;j<i+1;j++){          //here j<i+1 is used bcz to print *,and to print another ** in next line,then ***,**** for evry line it prints i+1(*) it works likenat first for j=0,it prints 1* then loop runs n j is updates to 1,then process runs aswell 
            cout<<"*";                   //only one * prints for first loop then loop runs next time then in next line i+1(*) is printed i.e **(2*)i next line,3*,4*aswell
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
    int n=4;
    for(int i=0;i<n;i++){           
        for(int j=0;j<i+1;j++){         //this loop helps to print like increasing order of elements in ouput,next cout<<i+1 helps to print what to prints for elements in increasing order both works together
            cout<<(i+1);               //here i'm printing (i+1)bcz i need to print 1 in first line for 1 time,the 2 in next line for 2 times,theh 3.3 for 3times in 3rd line,4 for 4times in 4th line.so the loop runs for j=0 and prints i+1 for i=o loop,it prints i+1 in first line i.e(0+1=1)in first line then process contioues as well,here j loop runs as many times i loop runs            
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
    int n=4;
    for(char ch ='A',i=0; i<n;  ch++,i++){    //here this loop starts from a and goes till d bcz i<n,4=d.for loop i=0 it prints a and next loop for i=1 it prints B so on       
        for(int j=0;j<i+1;j++){               //this loop prints character besed on value of i,for i=0,it prints a 1time,then i=1,it prints b 2 times likkewise
            cout<<ch;                          //this prints ch.as it automatically increments in i loop ch++ for next line
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
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){          //i+1 is used bcz it runs that many times for j=0,it runs 1 time,then for next linej=1 it runs 2 times and prints 2 numbers so on
            cout<<j;                        //here i m also starting with j=1 ti print o/p from 1.it first starts from j=1,then checks condi,then prints 1,then it is incremented to 2 and prints 1 along wiht 2 and so on
        }
        cout<<endl;
    }
    return 0;
    }
    */

/*  //neat explanation
#include<iostream>
using namespace std;
int main(){
    int n=9;
    for(int i=0;i<=n;i++){            
        for(int j=4;j<i+1;j++){       //here for loop i=0,for int j=4,4!<=0+1,so that prints nthing until 4<i+1,when for loop i=4,4 becomes < i+1(4+1)=5 and prints 4 in first line then for loopi=5,5<6,so prints 4 and 5 in 2nd line the loop runs as well
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
   */

 /*  //printing numbers in reverse order
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=4;i>0;i--){
        cout<<i;
    }
    return 0;
}
    */
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=4;i>0;i--){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
    */

/*  //printing reverse triangle of numbers
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
*/
 
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(char ch='A'+i;ch>='A';ch--){
            cout<<ch;
    }
        cout<<endl;
    }
    return 0;
}
*/

/*  //floyd's triangle pattern:
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
    */

/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
    */

/*    //inverted triangle pattern:
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){             
        for(int j=0;j<i;j++){        //here i m running loop until j<i,bcz to print the spaces,as i=0,the space we are printing for loop is 0,for loop i=1,we are printing 1 space in next line....
            cout<<" ";                //prints space, we are using 2 loops(j) this loop for space and below loop for printing numbers
        }
            for(int j=0;j<n-i;j++){          //here i m taking j upto j<n-i,for int j=0,j<4-0 for i=0 loop,we get 4 times in first line and print i+1(0+1=1),1 for 4times in first line and next i=1,(i+1)1+1=2,n-itimes in next line i.e(4-1=3)times in second line,this loop runs so on prints o/p
                cout<<(i+1);
            }
        cout<<endl;
    }
    return 0;
}
    */

/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){             
        for(int j=0;j<i;j++){       
            cout<<" ";                
        }
            for(int j=0;j<n-i;j++){          
                cout<<ch;
            }
        cout<<endl;
        ch++;
    }
    return 0;
} 
    */  


/*    //pyramid pattern:logic written in notes    
#include<iostream>
using namespace std;
int main(){ 
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
            for(int j=1;j<=i+1;j++){
                cout<<j;
            }
            for(int j=i;j>0;j--){
                cout<<j;
            }
        
        cout<<endl;
    }
    return 0;
}
    */

/*
#include<iostream>
using namespace std;
int main(){ 
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
            for(int j=1;j<=i+1;j++){
                cout<<"*";
            }
            for(int j=i;j>0;j--){
                cout<<"*";
            }
        
        cout<<endl;
    }
    return 0;
}
    */

/*
//hallow diamond pattern
#include<iostream>
using namespace std;
int main(){ 
    int n=4;
//above part
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){             //for spaces
            cout<<" ";
        }
        cout<<"*";                          //for *
        if(i!=0){                           //i!=0,bcz there is not *after 2nd space for 1st line(i=0),but for next lines there are 2nd * for i=1,2,3 
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
    cout<<endl;
        }
        //bottom part
        for(int i=0;i<n-1;i++){
            for(int j=0;j<i+1;j++){
                cout<<" ";
            }
            cout<<"*";
            if(i!=n-2){
                for(int j=0;j<2*(n-i)-5;j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;

        }

    return 0;
}
    */

//butterfly pattern
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++)
            cout << "*";

        for(int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        for(int j = 0; j < i + 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < i + 1; j++)
            cout << "*";

        for(int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        for(int j = 0; j < i + 1; j++)
            cout << "*";

        cout << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    ** Calculation precedence of datatypes...
    Top to bottom(decreasing)

    double
    float
    long long int
    long int
    int 
    characters
    
    (calculation hamesha higher datatype me hoti hai)


    */

    //cout<<'c'+1; output-100
    /*int a=3/2.0;
    cout<<a;\
    output=1
    */
   /*double a=3/2.0;
   cout<<a;
   output=1.5
   */
  /*double a=3/2;
  cout<<a;
  output=1
  
  */

  /*
  // ============================================================
//              C++ OPERATOR PRECEDENCE
// ============================================================

// Higher → Lower Priority

1.  POSTFIX
    ()  []  ->  .  ++  --
    Associativity: Left → Right

2.  UNARY
    +  -  !  ~  ++  --  (type)  *  &  sizeof
    Associativity: Right → Left

3.  MULTIPLICATIVE
    *  /  %
    Associativity: Left → Right

4.  ADDITIVE
    +  -
    Associativity: Left → Right

5.  SHIFT
    <<  >>
    Associativity: Left → Right

6.  RELATIONAL
    <  <=  >  >=
    Associativity: Left → Right

7.  EQUALITY
    ==  !=
    Associativity: Left → Right

8.  BITWISE AND
    &
    Associativity: Left → Right

9.  BITWISE XOR
    ^
    Associativity: Left → Right

10. BITWISE OR
    |
    Associativity: Left → Right

11. LOGICAL AND
    &&
    Associativity: Left → Right

12. LOGICAL OR
    ||
    Associativity: Left → Right

13. CONDITIONAL
    ?:
    Associativity: Right → Left

14. ASSIGNMENT
    =  +=  -=  *=  /=  %=  >>=  <<=  &=  ^=  |=
    Associativity: Right → Left

15. COMMA
    ,
    Associativity: Left → Right


// ============================================================
// IMPORTANT:
// Higher precedence → evaluated first
// Same precedence  → associativity decides the order
// ============================================================
  
  
  */

  //cout<<7/2*3; output=9
  //cout<<3*7/2; output=10

 // ** overflow...

    /*int,char,long int,long long int,float,double

    -10^9<int<10^9
    -10^12<long int <10^12
    -10^18<long long int<10^18 */
    
    /*int a=100000;
    int b=100000;
    int c=a*b;

    cout<<c<<endl;
    output-1410065408
    
    */
  /* long int a=100000;
   long int b=10000;
   long int c=a*b;

   cout<<c<<endl;

   output-1000000000  */

   /*int a=100000;
   int b=100000;
   long int c=a*b;
   cout<<c<<endl; // 1410065408 
   long int c=a * 1LL * b;
   cout<<c<<endl;   //10^10
   */
  //** PRECISION ERROR IN DOUBLE AND FLOAT
   /*double a=100000;
   double b=100000;
   double c=a*b;
   //cout<<c<<endl;
   //output----   1e+010

   //cout<<fixed<<c<<endl;
   //output---10000000000.000000

   //cout<<fixed<<setprecision(0)<<c<<endl;
   //output---10000000000

   //e is a scientific way to write 10 to power something and it
   //works in programming languages also...

   //c=1e24;
   //cout<<fixed<<c<<endl;
   //999999999999999983222784.000000  close to 10^24
   //hm kaphi bara no store kr skte hai double me but usko 
   //acurately store nhi kr skte kyuki hamare passs unlimited storage nhi hai..
   //avoid these precision error.
   */

   //** SOLVING YOUR FIRST PROGRAMMING QUESTION...

   /*
   Given rectangle of lenght l and width b. print area of rectangle.

   constraints:
   1<=l<=10^9
   1<=b<=10^9

   input format:
   2 space seperated integer l and b

   output format:
   single number which is area of rectangle

   sample input:
   3 4
   sample ouput:
   12
   */

   long long int l,b;
   cin>>l>>b;
   cout<<l*b<<endl; 
   // 10000000000  





 
}
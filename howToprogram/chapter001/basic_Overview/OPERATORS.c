/*
*******************************************************

https://www.austincc.edu/akochis/cosc1320/operators.htm

*******************************************************
*/

#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    c = a % b;
    d = a / b;
    printf("Resto da divisao = %d\n", c);
    printf("Resultado da divisao = %d\n", d);

    return 0;

}


/*
C/C++ is rich in operators. In order to grasp them we will break them down into groups 
of arithmetic, increment, relational, logical, bitwise, assignment and miscellaneous.


    named cnstants
    C++/C has the following standard arithmetic operators.
        + addition
        - subtraction
        * multiplication
        / division.
        Note there is only one division operator for both integer and floating point division.
        % modulus,
        computes the remainder from a division, this is defined for integer data types only.
        C does not have an operator for exponentiation.
        So in order to raise a value to a power you must use the pow function like:

        #include <cmath>
        float x,y,z;
        x=pow(y,z);

        This will place yz in x. 


    C has two operators for incrementing and decrementing. (This usually means adding or 
    subtracting one, except when we get to pointers).
        ++ increment
        -- decrement

        These operator must refer to a memory location also called an lvalue or lhs 
        (i.e. an address) not an expression.

        These operators have a prefix and postfix notation. In postfix notation the 
        variable is changed after its value has been accessed. In prefix notation the 
        change happens before accessing the value of the variable. 


    Relational operators are used to describe the relationship between operands. 
    The relational operators are:
        > greater than
        >= greater than or equal.
        < less than
        <= less than or equal
        == equal ( do not confuse this with =).
        != not equal

        If the relationship is true the expression returns a 1. If it is false 
        the expression returns a 0. 

    Logical operators are used to build complex expression. The 3 logical operators are :
        && and
        If either operand is zero, and returns a 0. If both operands are non zero 
        and returns a 1.
        || or
        If both operands are zero return a zero (0), If either operand is non zero 
        return a 1.
        ! not
        Returns 0 if given non zero, returns 1 if given 0. 


    Bitwise operators are used to manipulate bits. The bitwise operators are:
        & and

         int a=10,b=12,c

          c=a&b;
                            a=  1010
                            b=  1100
                               -------
                            c=  1000

        | inclusive or

         int a=10,b=12,c

          c=a|b;
                            a=  1010
                            b=  1100
                               -------
                            c=  1110

        ^ exclusive or

         int a=10,b=12,c

          c=a^b;
                            a=  1010
                            b=  1100
                               -------
                            c=  0110

        ~ bitwise negation turn 0s to 1s and 1s to 0s.
        >> shift right

         int a=32,b;

         b=a >> 3;
                    a= 0100000
                    b= 0000100

        << shift left

         int a=2,b;

         b=a << 3;
                    a= 0000010
                    b= 0010000

    C has the following assignment operators;
        = assignment,
        This operator is evaluated right to left so. a=b=c=2; is a valid c statement.
        C also has shorthand assignment operator so that a variable does not need to be 
        specified twice in a expression.
            += add and assign a+=b means a=a+b
            -=
            *=
            /=
            %=
            >>=
            <<=
            &=
            |=
            ^= 


    Pointer indirection also called the deference operator. The * means use the address 
    in the pointer to access memory. For example:

    #include <iostream>
    using namespace std;
    int main()
    {
     int a,*p;
     a=3;
     cout << a << " " << &a << endl;
     p=&a;
     *p=4;
     cout << *p << " " << &p << " " << << p << endl;
     system("pause");
     return 0;
    }

    3 4160748428
    4 4160748424 4160748428

    iostream
    Working class derived from both istream and ostream. you include this class 
    with <iostream> definition.

        Objects
            cin
            Standard input of class istream.
            cout
            Standard output of class ostream.
            cerr and clog
            Standard error output of class ostream. 


        Overloaded Operators
            <<
            Shift left is overload and called the stream insertion operator. 
            This operator was chosen because it associates left to right, low order 
            of precedence and just the way it look denoting the flow of data. Which means that statements like:

            	int i=47;
            	cout << i << " " << i + 3 << endl;
             
            Gives the correct output of:
            47 50

            This is accomplished thru the use of multiple overloaded operator definitions.

            There are defined manipulators for cout like:
                endl -print an end of line the same as sending '\n' to cout.
                flush - flush the output stream buffer. 
            >>
            The shift right has been overloaded for the istream class and called the stream extractor. 
*/
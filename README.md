# Experiment 15
# Aim: 
To study and implement Recursion
# Apparatus
VS code 
# Theory 
A function can call itself to fix smaller instances of the same problem, which is a powerful programming technique known as recursion. Recursion is a technique used in C++ when an issue can be divided into smaller, more manageable subproblems of the same kind that can all be resolved with the same function. 

1. Key Components of Recursion:
* Base Case: The condition needed for ending the recurrence. The function would call itself endlessly in the absence of a base case, resulting in infinite recursion. 
* Recursive Case: the part of the function where it calls within itself to address a more manageable issue. 

2. How Recursion Works:
When a recursive function is called, the following happens: 
* In the point where it executes the recursive call, the function pauses. 
* It makes a new call to the same function but with different (usually smaller) arguments. 
* Every paused call takes resume where it left off when the base case is satisfied, and the function provides a result.

# Code 

simple recursion
~~~
# include <iostream>
using namespace std;

void print_reverse(int i){
    if (i>0) 
    {         
        cout<<(i%10);
        print_reverse(i/10);

    }
}
int main (){
    int i;
    cout<<"Enter the number : ";
    cin>>i;
    print_reverse(i);
    return 0 ;
}
~~~
![image](https://github.com/user-attachments/assets/e281a1fd-8331-4c6e-9124-48081c998fb3)

sum of recursion
~~~
# include <iostream>
using namespace std;

int add (int n){
    if (n<=1)
    {
        return 1;
    }
    else 
    {
        return (n+add(n-1));
    }
}
int main ()
{
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= add(n);
    cout<<X;
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/c00f5d1f-00be-4a7e-991a-8514341f001f)

reverse of recursion: 
~~~
# include <iostream>
#include <string.h>
using namespace std;

void reverse(char *str){
    if (*str)
    {
        reverse(str+1);
        cout<<("%c",*str);

    }
}
int main (){
    char a[50];
    cout<<"Enter a string : ";
    cin>>a;
    reverse(a);
    return 0 ;
}
~~~
![image](https://github.com/user-attachments/assets/de54924e-5d54-4592-b7ed-00c443ea0407)

using factorial in recursion
~~~
# include <iostream>
using namespace std;
int fact (int n)
{
    if (n<=1)
    {
        return 1;
    }
    else 
    {
        return (n*fact(n-1));
    }
}
int main ()
{
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= fact(n);
    cout<<n<<"!="<<X;
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/9b67236e-aa25-4956-aba8-275778380e1c)


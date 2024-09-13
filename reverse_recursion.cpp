//Name: Sreejita Bhardwaj
//Prn: 23070123130
//Entc b2
// recursion

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
//Name: Sreejita Bhardwaj
//Prn: 23070123130
//Entc b2
// recursion

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
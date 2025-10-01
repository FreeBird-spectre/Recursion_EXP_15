//Abir Seth
//EnTC A1
//PRN-24070123003

#include<iostream>
using namespace std;

int sum(int n)
{
    if (n<=1)
        return n;
    else 
        return n + sum(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Sum is: "<<sum(num);
}

Enter a number: 
78
Sum is: 3081

=== Code Execution Successful ===

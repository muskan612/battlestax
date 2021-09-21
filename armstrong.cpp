#include <iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int a=n;
    while(a>0)
    {
        int d=a%10;
        sum=sum+d*d*d;
        a=a/10;
    }
    if(sum==n)
        cout<<n<<" is an Armstrong Number\n";
    else
        cout<<n<<" is not an Armstrong Number\n";
    return 0;
}
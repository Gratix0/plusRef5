
#include<iostream>
using namespace std;
int Fact(int n)
{
    
    if (n == 0 || n == 1)
        return 1;
    else
        return n * Fact(n - 1);
}
void main()
{

    int n = 0;
    cout << "Enter the num: ";
    cin >> n;
    int t = Fact(n);
    cout << "Factorial " << n << " equal " << t;
    cout << endl;
}

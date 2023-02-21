
#include<iostream>
using namespace std;
int global = 0;
int global_too = 0;
int Fact(int global)
{
    int result;
    if (global == 0 || global == 1)
        return 1;
    else
        result = global * Fact(global-1);
        int &rres = result;
        return rres;
}
void ras() {
    cout << "Enter the num: ";
    cin >> global;
    global_too = Fact(global);
}
void main()
{
    ras();
    cout << "Factorial " << global << " equal " << global_too;
    cout << endl;
}

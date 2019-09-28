#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
cout << "Vvedite chislo:";
    cin >> a;
cout << "Vvedite chislo:";
    cin >> b;
cout << "Vvedite chislo:";
    cin >> c;
    if(a*b==c)
{
    cout << "Yes";
}
    if(a*c==b)
{
    cout << "Yes";
}
    if(b*c==a)
{
    cout << "Yes";
}
    if(a*c!=b and a*b!=c and b*c!=a)
{
    cout << "No";
}

}

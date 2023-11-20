#include <iostream>
using namespace std;
int main()
{
int t[10], i;
for(i=0; i<10; i++)
{
cout << "Tapez la valeur numero " << i << " : ";
cin >> t[i];
}
for(i=0; i<10; i++) t[i] = t[i]+1;
for(i=0; i<10; i++) cout << "La valeur numero " << i <<" est : "<< t[i] <<endl;
return 0;
}
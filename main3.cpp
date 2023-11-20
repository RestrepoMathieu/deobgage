#include <iostream>
using namespace std;
int main()
{
double t[4];
int i;
for(i=0; i<4; i++)
t[i] = 1.0 / (i+1);
for(i=0; i<4; i++) cout<<"La valeur numéro "<<i<<" est : " << t[i] <<endl;
return 0;
}
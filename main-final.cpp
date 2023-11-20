#include <iostream>
using namespace std;
int main()
{
int t[10], i, indice;
double s=0;
for(i=0; i<10; i++)
{
cout << "Tapez la valeur numéro " << i << " : ";
cin >> t[i];
s = s + t[i];
}
s = s/10;
cout << "La moyenne est : " << s << endl;
cout << "Entrez l'indice de la note : "<< endl;
cin >> indice;
cout << "La note à l'indice " << indice << " est : " << t[indice] << endl;
return 0;
}
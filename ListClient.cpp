#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 
 for (int i=1; i<5;i++)
 L1.insert(i*3,i);
 
 for (int i=1; i<5;i++)
 L2.insert(i*3,i);
 
 cout<<"L1 size is "<<L1.size()<<endl;
 cout<<"L2 size is "<<L2.size()<<endl;

 //Do some stuff with L1, L2, ...
 // ...

}

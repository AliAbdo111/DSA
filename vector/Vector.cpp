#include <iostream>
using namespace std ;

int main(){



return 0;}
class Vector {
private :
    int size =0;
    int[] *arr=nullptr;

public :
    Vector(int size)
   {
       size=size;

    if(size <0)
        size =1;
    arr= new int[size] { } ;
    }
    ~Vector(){
    delete [] arr;
    arr=nullptr;

    }

   void print(){
   for(int i=0;i<size;i++)
   cout <<arr[i]<<" ";
   cout <<"\n" ;
   }
   int find(int value)
{
   for(int =0 ;i<size ;i++)
    if(arr[i]==value)
    return i;
    return -1;
}
};

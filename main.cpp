#include "tipos.h"
#include "array.h"


int main() {
    t s=5;
    t arr[5]={1,2,50,4,5};
    MyArray<t>a(arr,s);
    t x = a.max();
    cout<<x;
    return 0;
}
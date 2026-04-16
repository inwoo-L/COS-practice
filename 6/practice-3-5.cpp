#include <iostream>
using namespace std;

//extern "C" void decode1(long *xp, long *yp, long *zp);

void decode1(long *xp, long *yp, long *zp){
    long a, b, c;
    a = *xp;
    b = *yp;
    c = *zp;

    *xp = c;
    *yp = a;
    *zp = b;
}


int main(){
    long x, y, z;
    x = 10000; y = 20000; z = 30000;
    cout << "before decode1(): " << "x: " << x << " y: " << y << " z: " << z << endl;
    decode1(&x, &y, &z);
    cout << "after decode1(): " << "x: " << x << " y: " << y << " z: " << z << endl;
    return 0;
}

// rdi: x의 주소값   0x10 10000
// rsi: y의 주소값   0x20 20000
// rdx: z의 주소값   0x30 30000

//r8  10000  -> rsi -> y
//rcx 20000  -> rdx -> z
//rax 30000  -> rdi -> x



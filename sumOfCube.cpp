#include <iostream>
#include <math.h>

using namespace std; 

int sumOfCube(int n) {
    
    if (n<=0) {
        return 0;
    }

    return pow(n,3) +sumOfCube(n-1);
    
}


int main() {
    
    int n=2;
    cout <<  sumOfCube(n) << endl;
    
    return 0;
}
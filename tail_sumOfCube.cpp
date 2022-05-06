#include <iostream>
#include <math.h>

using namespace std; 

int sumOfCube(int n, int answer) {
    
    if (n<=0) {
        return answer;
    }
    
    answer=answer+pow(n,3);
    
    return sumOfCube(n-1,answer);
    
}


int main() {
    
    int n=2;
    cout <<  sumOfCube(n,0) << endl;
    
    return 0;
}   
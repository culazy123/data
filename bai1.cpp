#include <iostream>
#include <cmath>
using namespace std;


int m[10][10];
int c(int k, int n){
    if (k==0 || k ==n || n==0){
        m[k][n] = 1 ;
    }    
    else { 
        if (m[k][n]){
            m[k][n] = c(k-1,n-1);

        }
    }
    return m[k][n];
}
int main(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            m[i][j] = c(i,j);
            cout << m[i][j] << " ";
        }
            cout << endl;
    }

    }
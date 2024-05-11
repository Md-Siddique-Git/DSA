#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=0;i<n;i++){
        // print _SPACE
        for (int j=0;j<i;j++){
            cout << " ";


        }
        // print stars
        for (int j=0; j<2*n-(2*i+1);j++){
            cout << "*"; 

        }
        // print _SPACE
        for (int j=0;j<i;j++){
            cout << " ";
        }
        cout<<endl;
    }
    return 0;
}

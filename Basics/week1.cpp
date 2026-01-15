#include <iostream>
using namespace std;
int main (){
    for (int n=2; n<=100 ; n++){
        bool isPrime =true;
        for(int i =2 ; i<= n-1 ; i++){
            if(n%i ==0){
                isPrime = false;
                break;
            }
        }if(isPrime==true){
            cout << n <<" ";
        }
    }
    
    
cout<< endl;
return 0;

}



































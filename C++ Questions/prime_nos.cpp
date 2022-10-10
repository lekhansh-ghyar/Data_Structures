#include <iostream>
using namespace std;
int main(){
int n;
cin>> n;
int i=2;
while(i<n){
   if (n%i==0){
    cout<< "Number is not prime"<< endl;
   }
   else{
    cout<< "Number is Prime" << endl;
   }
   break;
i+=1;
}



}
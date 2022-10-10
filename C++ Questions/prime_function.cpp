#include <iostream>
#include <math.h>
using namespace std;
int i=2;

void prime(int a){
    while(i<a){
        if(a%i==0){
            cout << "Not Prime"<< endl;
            break;

        }

        else{
            cout<<" Prime"<< endl;
            break;
        }
    }
}

int main()
{
int num;
cin >> num ;
prime(num);

}
#include<iostream>
using namespace std;

template<typename T> T maxMe2(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout<<maxMe2<int>(10,20)<<endl;
    cout<<maxMe2<double>(10.2,20.5)<<endl;
    cout<<maxMe2<char>('a','b')<<endl;
    return 0;
}
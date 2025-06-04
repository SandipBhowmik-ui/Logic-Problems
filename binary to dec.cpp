    #include<iostream>
    #include<math.h>
    using namespace std;
    //main Program
    convert(long n){
        int decimal=0,i=0;
        while(n!=0){
    int rem=n%10;
    n/=10;
    int res=rem*pow(2,i);
    decimal+=res;
    i++;
        }
        return decimal;
    }
    int main()
    {
        long binary;
        cin>>binary;
        int d=convert(binary);
        cout<<d;
        return 0;
    }


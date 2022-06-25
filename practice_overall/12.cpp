#include <iostream>
using namespace std;
class student{
    public:
    int m1;
    int m2;
    int m3;
    int r;
    student(int ma1=0 , int ma2=0 , int ma3=0, int ro=0){
        setm1(ma1);
       
        setm2(ma2);
        setm3(ma3);
        
        roll(ro);
    }
    int setm1(int marks){
        m1=marks;
        return m1;
    }
     int setm2(int marks){
        m2=marks;
        return m2;
    }
     int setm3(int marks){
        m3=marks;
        return m3;
    }
    int roll(int rolln){
       r=rolln;
       return r;
    }
    void about(){
        cout<<r<<endl;
        cout<<m1<<endl;
        cout<<m2<<endl;
        cout<<m3<<endl;
        cout<<m1+m2+m3<<endl;
    }
};
int main(){
    int roll,m1,m2,m3;
    cin>>roll>>m1>>m2>>m3;
    cout<<m1<<" "<<m2<<" "<<m3<<" "<<roll<<endl;
    student s(m1,m2,m3,roll);
    s.about();
}
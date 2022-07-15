#include <bits/stdc++.h>
using namespace std;
class self{
  public:
  int year;
  int salary;
};
class bonus:public self{
    public:
//    bonus(int y , int s){
//        year = y;
//        salary = s;
//    }
   void bon(){
       cin>>year;
       cin>>salary;
       if(year ==2018){
           cout<<salary+(salary*20)/100<<endl;
       }
       else if(year>=2018 && year<=2020){
           cout<<salary+(salary*15)/100<<endl;
       }
       else if(year == 2021){
           cout<<salary+(salary*10)/100<<endl;
       }
   }
};
int main(){
//    int y,s;
//    cin>>y>>s;
//    bonus b(y , s);
bonus b;
   b.bon();
}
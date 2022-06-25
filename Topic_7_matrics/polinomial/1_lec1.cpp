#include <iostream>
#include <cmath>
using namespace std;
class term{
    public:
    int coeff;
    int exp;
};
class poly{
    public:
    int n;
    term *t;
};
void create(poly *p){
   cout<<"NO. of terms=";
   cin>>p->n; // p.n not working
   p->t=new term[p->n]; // dyan
   for(int i=0; i<p->n; i++){
       cout<<"Terms no "<<i+1<<"=";
       cin>>p->t[i].coeff; // dyan 
       cin>>p->t[i].exp;
   }
}
void display(poly p){
    int x,sum=0;
    for(int i=0; i<p.n; i++){ // agr pointer na hoto simple (.) use krna tha
        cout<<(p.t[i].coeff)<<"x"<<(p.t[i].exp)<<"+";// 
    }
    cout<<endl;
}
void sum(poly p , poly p1 ,poly p2){
  int i=0,j=0,k=0;
  while(i<p.n && j<p1.n){
      if(p.t[i].exp>p1.t[j].exp){
          p2.t[k++]=p.t[i++]; // dono save ho gye
      }
      else if(p1.t[j].exp>p.t[i].exp){
          p2.t[k++]=p1.t[j++];
      }
      else{
          p2.t[k].exp=p.t[i].exp;
          p2.t[k++].exp=p.t[i++].coeff+p1.t[j++].coeff;

      }
  }
}

int main(){
   poly p,p1,p2;
   create(&p); // mene uper pointer le rkha h
   create(&p1);
   sum(p,p1,p2);
   display(p);
   display(p1);
   display(p2);
}
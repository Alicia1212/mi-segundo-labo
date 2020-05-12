#include "iostream"
#include "math.h"

using namespace std;
float a,b,c,det,x_1,x_2,im_1,im_2;

int main()
{
  cout <<"Ingrese los valores de a ,b, c de la siguiente expresion: "<<endl;
  cout <<"ax2 + bx + c = 0"<<endl<<endl;
  cout <<"Ingrese a: ";
  cin >>a;
  cout <<"Ingrese b: ";
  cin >>b;
  cout <<"Ingrese c: ";
  cin >>c;

  det=b*b - 4.00*a*c;

  if(det>0) {
    x_1=(-b+(pow(det,0.5)))/(2*a);
    x_2=(-b-(pow(det,0.5)))/(2*a);
    cout <<"x_1 = "<< x_1 <<endl;
    cout <<"x_2 = "<< x_2 <<endl;
  }
  if(det==0) {
    x_1=(-b)/(2*a);
    x_2=x_1;
    cout <<endl<<endl<< "x_1 = x_2 = "<< x_1;
  }
  if(det<0) {
    x_1=(-b)/(2*a);
    x_2=(-b)/(2*a);
    det=(-1)*det;
    im_1= (pow(det,0.5))/(2*a);
    im_2=((-1)*pow(det,0.5))/(2*a);

    cout << "x_1= "<< x_1 <<"+"<<im_1<<"i"<<endl;
    cout << "x_2= "<< x_2 <<"+"<<im_2<<"i"<<endl;
  }

  cin.get();
  return 0;
}
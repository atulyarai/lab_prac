#include <bits\stdc++.h>
using namespace std;
int main()
{
    float x,y,pt;
    cout << "enter initial velocity in x-axis" << endl;
    cin >> x;
    cout << "enter initial velocity in y-axis" << endl;
    cin >> y;
    cout << "enter point " << endl;
    cin >> pt;
    float theta=atan(y/x);
    float sine=sin(theta);
    float cosine=cos(theta);
    float range=(2*x*y)/9.8;
    if (range==pt)
    {
        cout << "You striked !" << endl;
    }
    else
    {
        cout << "You Missed" << endl;
        float x=((range*9.8)/2*sine*cosine);
        float u=pow(x,0.5);
        float ux=u*sine;
        float uy=u*cosine;
        cout << u << endl<< "required velocity in x axis: "<<  ux << endl <<"required axis in y axis: "<< uy <<  endl;
    }

}
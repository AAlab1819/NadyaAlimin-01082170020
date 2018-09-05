#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ywCrys;           // declare yellow crystal
    long long int blCrys;             // declare blue crystal

    long long int ywBall;           // declare yellow balls
    long long int grBall;            // declare green balls
    long long int blBall;             // declare blue balls

    long long int needYwCrys, needBlCrys, needCrystal;

    cin >> ywCrys >> blCrys; // first input; input amount of crystals Grisha's disposal
    cin >> ywBall >> grBall >> blBall; // second input; input amount of balls to be obtained

    needYwCrys = (2*ywBall)+grBall-ywCrys;
    needBlCrys = (3*blBall)+grBall-blCrys;

    if (needYwCrys < 0) needYwCrys = 0;
    if (needBlCrys < 0) needBlCrys = 0;

    needCrystal = needYwCrys + needBlCrys;

    cout << needCrystal << endl;


    return 0;
}

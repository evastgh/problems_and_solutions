#include <iostream>

using namespace std;
int main(){
    double TWD_to_USD = 0.033;
    double CAD_to_USD = 0.75;
    double MXN_to_USD = 0.054;

    double twd, cad, mxn;
    // double twd(0), cad, mxn; // this will initialize variable twd with value 0
    // int twd, cad, mxn; // try to use int to store the numbers? what happens if you input floating point?
    cout << "How much Taiwanese dollars do you wish to exchange? ";
    cin >> twd;
    // cin << twd; // wrong direction of the stream -> compiler error
    cout << "How much Canadian dollars do you wish to exchange? ";
    // try the following lines! What do you see? 
    // cout << "How much Cana" + "dian dollars do you wish to exchange? ";
    // cout << "How much Cana" "dian dollars do you wish to exchange? ";
    // cout << "How much Cana"     "dian dollars do you wish to exchange? ";
    cin >> cad;
    cout << "How much Mexican pesos do you wish to exchange? ";
    cin >> mxn;

    // or you can let the user input all of them at the same time!
    // cout << "Please input the amount of TWD, CAD, MXN you wish to exchange (separated by space): ";
    // cin >> twd >> cad >> mxn;

    double usd = twd*TWD_to_USD + cad*CAD_to_USD + mxn*MXN_to_USD;
    cout << "Here\'s " << usd << " dollars. Have a good day!" << endl;
    return 0;
}

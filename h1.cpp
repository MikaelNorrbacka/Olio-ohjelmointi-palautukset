#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Palautetaan summat
int retSum( int a, int b) {
    return a + b;
}

// lukujen osamäärän palautus
double retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<double>(a) / b;
}

// summan tulostus ja lasku
void calcSum(int a, int b) {
    cout << "Summa: " << retSum(a, b) << endl;
}

// Laskee, jonka jälkeen tulostaa osamäärän
void calcDiv(int a, int b) {
    try {
        double result = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << result << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
}

int main() {
    int a;
    int b;
    cout<<"ensimmäinen luku"<<endl;
    cin>>a;
    cout<<"toinen luku"<<endl;
    cin>>b;

    calcSum(a, b);
    calcDiv(a, b);

    return 0;

}

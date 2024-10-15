#include <iostream>

using namespace std;

void centres_de_gravite(int n) {
    int i;
    double x, y;
    double somme_x = 0, somme_y = 0;
    double centre_x;
    double centre_y;

    for (i=0; i<n; ++i) {
        cout << "Entrez les coordonnees du point " <<i+1<<" : ";
        cin >> x >> y;
        somme_x += x;
        somme_y += y;
    }

    centre_x = somme_x/n;
    centre_y = somme_y/n;

    cout << "\nLe centre de gravite de tous ces points est le point de coordonnes ("<<centre_x<<", "<<centre_y<<")\n";
}

int main(int argc, char const *argv[])
{
    int n;

    cout << "\nEntrez le nombre de points : ";
    cin >> n;
    cout << "\n";

    if (n <= 0) {
        cout << "\nLe nombre de points doit etre positif";
        return 0;
    }

    else
    {
    centres_de_gravite(n);
    return 0;
    }
    
}

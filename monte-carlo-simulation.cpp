//
// Created by PhantomCracker on 4/21/2020.
//


#include <bits/stdc++.h>

// Definesc precizia pentru valorile x si y (coordonatele unui punct); cu cat este mai mare acest inteval, cu atat valoarea obtinuta va fi mai corecta
#define INTERVAL 10000
using namespace std;

int main()
{
    int interval, i, circle_points = 0, square_points = 0;
    double rand_x, rand_y, origin_dist, pi;

    // Initializez rand()
    srand(time(NULL));

    // Totalul de numere random generate = x posibile valori * y posibile valori
    for (i = 0; i < (INTERVAL * INTERVAL); i++) {
        rand_x = double(rand() % (INTERVAL + 1)) / INTERVAL;
        rand_y = double(rand() % (INTERVAL + 1)) / INTERVAL;

        // Distanta dintre punctul (x, y) pana la origine
        origin_dist = rand_x * rand_x + rand_y * rand_y;

        // Verific daca punctul (x, y) este inauntru cercului de raza R = 1
        if (origin_dist <= 1)
            circle_points++;

        // Numarul total de puncte generate
        square_points++;

        // Estimarea lui pi dupa iterarea cu numarul i
        pi = double(4 * circle_points) / square_points;

        cout << "Pasul " << i << ": " << endl;
        cout << "x = " << rand_x << endl;
        cout << "y = " << rand_y << endl;
        cout << "Puncte in cadrul cercului de raza R = 1: " << circle_points << endl;
        cout << "Puncte in cadrul patratului de latura L = 1: " << square_points << endl;
        cout << "pi = " << pi << endl;
        cout << "\n ==============================================\n" << endl;

        // Aici trebuie sa apasam enter (este pusa aceasta optiune pentru a vedea in prima faza cum se comporta programul)
        if (i < 10)
            getchar();
    }

    // Valoarea finala estimata
    cout << "\nFinal Estimation of Pi = " << pi;

    return 0;
}

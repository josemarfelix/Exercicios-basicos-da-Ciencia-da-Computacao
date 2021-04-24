// A C++ program to find convex hull of a set of points. Refer
// https://www.geeksforgeeks.org/orientation-3-ordered-points/
// for explanation of orientation()
#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

//cria um tipo de struct com dois tipos de pontos diferentes

int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // verifica se os pontos pertencem a mesma reta
    return (val > 0)? 1: 2;
}


void convexHull(Point points[], int n)
{
    // verifica se tem menos de 3 pontos, para saber se é possível criar a casca convexa
    if (n < 3) return;

    // Initializa o resultado
    vector<Point> hull;

    // busca o ponto mais a esquerda e salva a posição
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x < points[l].x)
            l = i;


    int p = l, q;
    do
    {
        // pega o ponto mais a esquerda e carrega no vector
        hull.push_back(points[p]);

        q = (p+1)%n;
        // deve verificar quais foram os visitados
        for (int i = 0; i < n; i++)
        {
            // atualiza q se i for mais antihorário atualiza q
            // segmentos de reta são colineares se estão numa mesma reta.
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        }

        // quando encontrar o ponto mais anti-horário atualize p de acordo com q
        p = q;

    } while (p != l);

    // Print Result
    for (int i = 0; i < hull.size(); i++)
        cout << "(" << hull[i].x << ", "
             << hull[i].y << ")\n";
}

// Driver program to test above functions
int main()
{
    Point points[] = {{0, 5}, {2, 2}, {1, 1}, {2, 1},
                      {3, 0}, {0, 0}, {3, 3}};
    int n = sizeof(points)/sizeof(points[0]);
    //verifica quantos pontos estão sendo enviados
    convexHull(points, n);
    return 0;
}

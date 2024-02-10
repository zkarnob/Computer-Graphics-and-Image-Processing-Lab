#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void Bresenham(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    int step = 0;

    dx = x1 - x0;
    dy = y1 - y0;

    x = x0;
    y = y0;

    if (abs(dy) < abs(dx))
    {
        p = 2 * dy - dx;

        while (x < x1)
        {
            step++;
            if (p >= 0)
            {
                putpixel(x,y,2);
                y = y + 1;
                p = p + 2 * dy - 2 * dx;
            }
            else
            {
                putpixel(x,y,2);
                p = p + 2 * dy;
            }
            x = x + 1;

            cout << "Step: " << step << ", "
                 << " Point: (" << x << "," << y << ")" << endl;
        }
    }
    else
    {
        p = 2 * dx - dy;

        while (y < y1)
        {
            step++;
            if (p >= 0)
            {
                putpixel(x,y,2);
                x = x + 1;
                p = p + 2 * dx - 2 * dy;
            }
            else
            {
                putpixel(x,y,2);
                p = p + 2 * dx;
            }
            y = y + 1;

            cout << "Step: " << step << ", "
                 << " Point: (" << x << "," << y << ")" << endl;
        }
    }
}

int main()
{
    int x0, y0, x1, y1;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    cin >> x0 >> y0;
    cin >> x1 >> y1;
    if (x0 > x1)
    {
        swap(x0, x1);
        swap(y0, y1);
    }
    cout << "Initial    Point: (" << x0 << "," << y0 << ")" << endl;

    Bresenham(x0, y0, x1, y1);
     getch();
     closegraph();
}

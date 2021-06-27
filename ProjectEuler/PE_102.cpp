#include<bits/stdc++.h>
using namespace std;

float getTriangleArea(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

int main() {
    int t;
    cin >> t;

    int count = 0;

    while (t--) {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int px = 0;
        int py = 0;

        float area = getTriangleArea(x1, y1, x2, y2, x3, y3);
        float area1 = getTriangleArea(px, py, x2, y2, x3, y3);
        float area2 = getTriangleArea(x1, y1, px, py, x3, y3);
        float area3 = getTriangleArea(x1, y1, x2, y2, px, py);

        if (area == (area1 + area2 + area3))    count++;
    }
    cout << count << endl;
    return 0;
}

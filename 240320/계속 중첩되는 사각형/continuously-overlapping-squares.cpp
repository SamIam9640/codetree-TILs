#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rectangle {
    int x1, y1, x2, y2;
    bool isRed;

    Rectangle(int _x1, int _y1, int _x2, int _y2, bool _isRed) : x1(_x1), y1(_y1), x2(_x2), y2(_y2), isRed(_isRed) {}
};

int blueArea(vector<Rectangle>& rectangles) {
    int area = 0;
    int maxX = -100, maxY = -100, minX = 100, minY = 100;

    for (int i = rectangles.size() - 1; i >= 0; i--) {
        Rectangle& rect = rectangles[i];

        if (!rect.isRed) {
            maxX = max(maxX, rect.x2);
            maxY = max(maxY, rect.y2);
            minX = min(minX, rect.x1);
            minY = min(minY, rect.y1);
            area += (maxX - minX) * (maxY - minY);
        } else {
            maxX = max(maxX, rect.x2);
            maxY = max(maxY, rect.y2);
            minX = min(minX, rect.x1);
            minY = min(minY, rect.y1);
            area -= (maxX - minX) * (maxY - minY);
        }
    }

    return area;
}

int main() {
    int n;
    cin >> n;

    vector<Rectangle> rectangles;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        bool isRed = (i % 2 == 0); // 짝수번째는 빨간색, 홀수번째는 파란색
        cin >> x1 >> y1 >> x2 >> y2;
        rectangles.push_back(Rectangle(x1, y1, x2, y2, isRed));
    }

    cout << blueArea(rectangles) << endl;

    return 0;
}
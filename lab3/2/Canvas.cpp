#include "Canvas.h"
using namespace std;

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
    matrix = new char* [height];
    for (int i = 0; i < height; i++) {
        matrix[i] = new char[width];
    }
    Clear();
}   

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    int d = 3 - 2 * ray;
    int xi = 0, yi = ray;

    while (xi <= yi) {
        SetPoint(x + xi, y + yi, ch);
        SetPoint(x - xi, y + yi, ch);
        SetPoint(x + xi, y - yi, ch);
        SetPoint(x - xi, y - yi, ch);
        SetPoint(x + yi, y + xi, ch);
        SetPoint(x - yi, y + xi, ch);
        SetPoint(x + yi, y - xi, ch);
        SetPoint(x - yi, y - xi, ch);
        if (d < 0) {
            d += 4 * xi + 6;
        }
        else {
            d += 4 * (xi - yi) + 10;
            yi--;
        }
        xi++;
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    for (int i = -ray; i <= ray; i++) {
        for (int j = -ray; j <= ray; j++) {
            if (i * i + j * j <= ray * ray) {
                SetPoint(x + i, y + j, ch);
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    for (int x = left; x <= right; x++) {
        SetPoint(x, top, ch);
        SetPoint(x, bottom, ch);
    }
    for (int y = top; y <= bottom; y++) {
        SetPoint(left, y, ch);
        SetPoint(right, y, ch);
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int y = top; y <= bottom; y++) {
        for (int x = left; x <= right; x++) {
            SetPoint(x, y, ch);
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch)
{
	if (x >= 0 && x < width && y >= 0 && y < height) {
		matrix[y][x] = ch;
	}
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = -1, sy = -1;
    if (x1 < x2)
        sx = 1;
    if (y1 < y2)
        sy = 1;
    int err = dx - dy;

    while (x1 != x2|| y1 != y2) {
        SetPoint(x1, y1, ch);
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}

void Canvas::Print()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void Canvas::Clear()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            matrix[i][j] = ' ';
        }
    }
}

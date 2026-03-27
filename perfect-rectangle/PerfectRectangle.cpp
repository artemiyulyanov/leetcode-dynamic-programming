//
// Created by Artemii on 3/12/2026.
//

#include "PerfectRectangle.h"

bool PerfectRectangle::isRectangleCover(std::vector<std::vector<int>>& rectangles) {
    int minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;

    int area = 0;

    for (std::vector<int> rect : rectangles) {
        minX = std::min(rect[0], minX);
        minY = std::min(rect[1], minY);
        maxX = std::max(rect[2], maxX);
        maxY = std::max(rect[3], maxY);

        area += (rect[2] - rect[0]) * (rect[3] - rect[1]);
    }

    return area == (maxX - minX) * (maxY - minY);
}
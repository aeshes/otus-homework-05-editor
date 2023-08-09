#pragma once

#include <memory>
#include <string>

#include "core/model.h"
#include "core/view.h"
#include "shapes/shapes.h"

class Controller
{
public:
    Controller(Model* model, View* view);

    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);

    void addCircle(int x, int y, int radius);
    void addRectangle(int x, int y, int width, int height);
    void addLine(int x1, int y1, int x2, int y2);

private:
    Model* model;
    View* view;
};

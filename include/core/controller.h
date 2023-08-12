#pragma once

#include <string>

#include "core/document.h"

class Controller
{
public:
    Controller() = default;

    void setModel(Document* model);

    void createDocument();
    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);

    void addCircle(int x, int y, int radius);
    void addRectangle(int x, int y, int width, int height);
    void addLine(int x1, int y1, int x2, int y2);

private:
    Document* document;
};

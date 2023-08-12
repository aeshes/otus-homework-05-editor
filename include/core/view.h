#pragma once

#include <string>

#include "core/observer.h"
#include "core/document.h"
#include "core/controller.h"

class Controller;

class View : public Observer
{
public:
    View() = default;

    void setModel(Document* document);
    void setController(Controller* controller);

    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);
    void addCircle(int x, int y, int radius);
    void addRectangle(int x, int y, int width, int height);
    void addLine(int x1, int y1, int x2, int y2);

    void update() override;

private:
    Document* document;
    Controller* controller;
};

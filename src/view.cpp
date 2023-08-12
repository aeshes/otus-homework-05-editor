#include "core/view.h"
#include "shapes/shapes.h"

#include <memory>

void View::setModel(Document *document)
{
    this->document = document;
    this->document->addObserver(this);
}

void View::setController(Controller *controller)
{
    this->controller = controller;
}

void View::update()
{
    document->draw();
}

void View::addCircle(int x, int y, int radius)
{
    controller->addShape(std::make_shared<Circle>(x, y, radius));
}

void View::addRectangle(int x, int y, int width, int height)
{
    controller->addShape(std::make_shared<Rectangle>(x, y, width, height));
}

void View::addLine(int x1, int y1, int x2, int y2)
{
    controller->addShape(std::make_shared<Line>(x1, y1, x2, y2));
}

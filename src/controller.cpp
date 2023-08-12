#include "core/controller.h"

#include <memory>

Controller::Controller(Document* document, View* view)
{
    this->document = document;
    this->view = view;
}

void Controller::createDocument()
{
    document = new Document();
}

void Controller::openDocument(const std::string& fileName)
{
    document->open(fileName);
}

void Controller::saveDocument(const std::string& fileName)
{
    document->save(fileName);
}

void Controller::addRectangle(int x, int y, int width, int height)
{
    document->addShape(std::make_shared<Rectangle>(x, y, width, height));
}

void Controller::addCircle(int x, int y, int radius)
{
    document->addShape(std::make_shared<Circle>(x, y, radius));
}

void Controller::addLine(int x1, int y1, int x2, int y2)
{
    document->addShape(std::make_shared<Line>(x1, y1, x2, y2));
}

#include "core/controller.h"
#include "shapes/creator.h"

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
    document->addShape(ShapesCreator::createRectangle(x, y, width, height));
}

void Controller::addCircle(int x, int y, int radius)
{
    document->addShape(ShapesCreator::createCircle(x, y, radius));
}

void Controller::addLine(int x1, int y1, int x2, int y2)
{
    document->addShape(ShapesCreator::createLine(x1, y1, x2, y2));
}

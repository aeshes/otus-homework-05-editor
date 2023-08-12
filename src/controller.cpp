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

void Controller::addShape(std::shared_ptr<Shape> shape)
{
    document->addShape(shape);
}

void Controller::removeShape(std::shared_ptr<Shape> shape)
{
    document->removeShape(shape);
}

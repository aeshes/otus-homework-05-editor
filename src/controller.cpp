#include "core/controller.h"
#include "shapes/creator.h"

Controller::Controller(Model* model, View* view)
{
    this->model = model;
    this->view = view;
}

void Controller::openDocument(const std::string& fileName)
{
    model->openDocument(fileName);
}

void Controller::saveDocument(const std::string& fileName)
{
    model->saveDocument(fileName);
}

void Controller::addRectangle(int x, int y, int width, int height)
{
    model->addShape(ShapesCreator::createRectangle(x, y, width, height));
}

void Controller::addCircle(int x, int y, int radius)
{
    model->addShape(ShapesCreator::createCircle(x, y, radius));
}

void Controller::addLine(int x1, int y1, int x2, int y2)
{
    model->addShape(ShapesCreator::createLine(x1, y1, x2, y2));
}

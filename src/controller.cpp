#include "core/controller.h"

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

void Controller::addShape(std::shared_ptr<Shape> shape)
{
    model->addShape(shape);
}

void Controller::removeShape(std::shared_ptr<Shape> shape)
{
    model->removeShape(shape);
}

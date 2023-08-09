#include "core/view.h"

View::View(Model* model)
{
    this->model = model;
    this->model->addObserver(this);
}

void View::update()
{
    for (auto object : model->document().data())
    {
        object->draw();
    }
}

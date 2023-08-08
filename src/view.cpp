#include "core/view.h"

View::View(std::shared_ptr<Model> model)
{
    this->model = model;
    this->model->addObserver(this);
}

void View::update()
{
    model->draw();
}

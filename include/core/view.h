#pragma once

#include "core/model.h"
#include "core/observer.h"

#include <memory>

class View : public Observer
{
public:
    View(std::shared_ptr<Model> model)
    {
        this->model = model;
        this->model->addObserver(this);
    }

    void update() override
    {
        model->draw();
    }

private:
    std::shared_ptr<Model> model;
};

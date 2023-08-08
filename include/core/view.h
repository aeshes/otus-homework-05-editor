#pragma once

#include "core/model.h"
#include "core/observer.h"

#include <memory>

class View : public Observer
{
public:
    View(std::shared_ptr<Model> model);

    void update() override;

private:
    std::shared_ptr<Model> model;
};

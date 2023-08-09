#pragma once

#include "core/model.h"
#include "core/observer.h"

#include <memory>

class View : public Observer
{
public:
    View(Model* model);

    void update() override;

private:
    Model* model;
};

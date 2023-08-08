#pragma once

#include <memory>
#include <string>

#include "core/model.h"
#include "core/view.h"

class Controller
{
public:
    Controller(std::shared_ptr<Model> model, std::shared_ptr<View> view);

    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);
    void addShape(std::shared_ptr<Shape> shape);
    void removeShape(std::shared_ptr<Shape> shape);

private:
    std::shared_ptr<Model> model;
    std::shared_ptr<View> view;
};

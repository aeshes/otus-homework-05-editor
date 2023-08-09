#pragma once

#include "core/document.h"
#include "core/observer.h"
#include "shapes/shape.h"

#include <memory>
#include <string>

class Model : public Observable
{
public:
    Model() = default;

    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);
    void addShape(std::shared_ptr<Shape> shape);
    void removeShape(std::shared_ptr<Shape> shape);
    Document document();

private:
    Document doc;
};

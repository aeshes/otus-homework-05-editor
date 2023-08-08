#pragma once

#include "core/document.h"
#include "core/observer.h"
#include "shapes/shape.h"

#include <memory>
#include <string>

class Model
{
public:
    Model() = default;
    virtual ~Model() = default;

    virtual void openDocument(const std::string& fileName) = 0;
    virtual void saveDocument(const std::string& fileName) = 0;
    virtual void addShape(std::shared_ptr<Shape> shape) = 0;
    virtual void removeShape(std::shared_ptr<Shape> shape) = 0;
    virtual void draw() = 0;
};

class DrawModel : public Model, public Observable
{
public:
    DrawModel() = default;

    void openDocument(const std::string& fileName) override;
    void saveDocument(const std::string& fileName) override;
    void addShape(std::shared_ptr<Shape> shape) override;
    void removeShape(std::shared_ptr<Shape> shape) override;
    void draw() override;

private:
    Document doc;
};

#pragma once

#include <iostream>
#include <list>
#include <memory>

#include "shapes/shapes.h"
#include "core/observer.h"

/// \brief Document - это модель в паттерне MVC

class Document : public Observable
{
public:
    void clear()
    {
        shapes.clear();
    }

    void open(const std::string& fileName)
    {
        notify();
    }

    void save(const std::string& fileName)
    {

    }

    void addShape(std::shared_ptr<Shape> shape)
    {
        shapes.push_back(shape);
        notify();
    }

    void removeShape(std::shared_ptr<Shape> shape)
    {
        shapes.remove(shape);
        notify();
    }

    void draw()
    {
        for (const auto& object : shapes)
        {
            object->draw();
        }
    }

private:
    std::list<std::shared_ptr<Shape>> shapes;
};

#pragma once

#include <vector>
#include <memory>
#include <string>
#include <iostream>

#include "shapes/shape.h"

class Document
{
public:
    void Clear()
    {
        shapes.clear();
    }

    void Import(const std::string& fileName)
    {
        std::cout << "Imported document from file : " << fileName << std::endl;
    }

    void Export(const std::string& fileName)
    {
        std::cout << "Exported document to file : " << fileName << std::endl;
    }

    void addShape(std::shared_ptr<Shape> shape)
    {
        shapes.push_back(shape);
    }

    void removeShape(std::shared_ptr<Shape> shape)
    {

    }

    auto data()
    {
        return shapes;
    }

private:
    std::vector<std::shared_ptr<Shape>> shapes;
};

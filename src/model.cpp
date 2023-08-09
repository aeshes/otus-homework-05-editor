#include "core/model.h"

#include <iostream>

void Model::openDocument(const std::string &fileName)
{
    doc.Import(fileName);

    std::cout << "document opened" << std::endl;
}

void Model::saveDocument(const std::string &fileName)
{
    doc.Export(fileName);

    std::cout << "document saved" << std::endl;
}

void Model::addShape(std::shared_ptr<Shape> shape)
{
    doc.addShape(shape);
    notify();
}

void Model::removeShape(std::shared_ptr<Shape> shape)
{
    doc.removeShape(shape);
    notify();
}

Document Model::document()
{
    return doc;
}

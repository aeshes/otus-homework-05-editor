#include "core/model.h"

#include <iostream>

void DrawModel::openDocument(const std::string &fileName)
{
    doc.Import(fileName);

    std::cout << "document opened" << std::endl;
}

void DrawModel::saveDocument(const std::string &fileName)
{
    doc.Export(fileName);

    std::cout << "document saved" << std::endl;
}

void DrawModel::addShape(std::shared_ptr<Shape> shape)
{
    doc.addShape(shape);
    notify();
}

void DrawModel::removeShape(std::shared_ptr<Shape> shape)
{
    doc.removeShape(shape);
    notify();
}

void DrawModel::draw()
{
    doc.draw();
}

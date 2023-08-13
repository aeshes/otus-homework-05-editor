module;

#include <memory>
#include <list>

import shapes.shapes;
import core.observer;

export module core.document;

export class Document
{
public:
    void clear();
    void open(const std::string& fileName);
    void save(const std::string& fileName);
    void addShape(std::shared_ptr<Shape> shape);
    void removeShape(std::shared_ptr<Shape> shape);

private:
    std::list<std::shared_ptr<Shape>> shapes;
};

void Document::clear()
{
    shapes.clear();
}

void Document::open(const std::string& fileName)
{

}

void Document::save(const std::string& fileName)
{

}

void Document::addShape(std::shared_ptr<Shape> shape)
{
    shapes.push_back(shape);
}

void Document::removeShape(std::shared_ptr<Shape> shape)
{

}

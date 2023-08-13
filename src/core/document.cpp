module;

#include <memory>
#include <list>

export module core.document;

import shapes;

export class Document
{
public:
    void clear();
    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);
    void addShape(std::shared_ptr<Shape> shape);
    void removeShape(std::shared_ptr<Shape> shape);

private:
    std::list<std::shared_ptr<Shape>> shapes;
};

void Document::clear()
{
    shapes.clear();
}

void Document::openDocument(const std::string &fileName)
{

}

void Document::saveDocument(const std::string &fileName)
{

}

void Document::addShape(std::shared_ptr<Shape> shape)
{
    shapes.push_back(shape);
}

void Document::removeShape(std::shared_ptr<Shape> shape)
{

}

module;

#include <string>
#include <memory>

import core.document;
import shapes.shapes;

export module core.controller;

class Controller
{
public:
    Controller() = default;

    void setModel(Document* model);

    void createDocument();
    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);

    void addCircle(int x, int y, int radius);
    void addRectangle(int x, int y, int width, int height);
    void addLine(int x1, int y1, int x2, int y2);

private:
    Document* document;
};

void Controller::setModel(Document *model)
{
    this->document = model;
}

void Controller::createDocument()
{
    document = new Document();
}

void Controller::openDocument(const std::string& fileName)
{
    document->open(fileName);
}

void Controller::saveDocument(const std::string &fileName)
{
    document->save(fileName);
}

void Controller::addCircle(int x, int y, int radius)
{
    document->addShape(std::make_shared<Circle>(x, y, radius));
}

void Controller::addRectangle(int x, int y, int width, int height)
{
    document->addShape(std::make_shared<Rectangle>(x, y, width, height));
}

void Controller::addLine(int x1, int y1, int x2, int y2)
{
    document->addShape(std::make_shared<Line>(x1, y1, x2, y2));
}

#include "core/view.h"

void View::setModel(Document *document)
{
    this->document = document;
    this->document->addObserver(this);
}

void View::update()
{
    document->draw();
}

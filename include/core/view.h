#pragma once

#include "core/observer.h"
#include "core/document.h"

#include <memory>

class View : public Observer
{
public:
    View() = default;

    void setModel(Document* document);
    void update() override;

private:
    Document* document;
};

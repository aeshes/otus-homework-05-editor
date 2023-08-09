#include "core/model.h"
#include "core/view.h"
#include "core/controller.h"
#include "shapes/shapes.h"

#include <memory>

int main()
{
    Model* model = new Model;
    View* view = new View(model);
    Controller* controller = new Controller(model, view);

    controller->addCircle(1, 0, 3);
    controller->addLine(0, 0, 1, 1);
    controller->saveDocument("draw.doc");

    return 0;
}

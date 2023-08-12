#pragma once

#include <string>
#include <memory>

#include "core/document.h"

class View;

/* \brief Обязанности по обработке входящих системных сообщений необходимо делегировать специальному объекту Controller'у.
 * Controller — это объект, который отвечает за обработку системных событий, и при этом не относится к интерфейсу пользователя.
 * Controller определяет методы для выполнения системных операций.
 */
class Controller
{
public:
    Controller(Document* model, View* view);

    void createDocument();
    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);
    void addShape(std::shared_ptr<Shape> shape);
    void removeShape(std::shared_ptr<Shape> shape);

private:
    Document* document;
    View* view;
};

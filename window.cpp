#include "window.h"

Window::Window()
{
    setWindowTitle("OnLearn");
    setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    setFixedSize(660,460);
}

void Window::WindowSize(QString name)
{
    this->setWindowTitle(name);
    setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    setFixedSize(660,460);
}

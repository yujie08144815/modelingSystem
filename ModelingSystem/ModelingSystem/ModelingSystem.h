#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ModelingSystem.h"

class ModelingSystem : public QMainWindow
{
    Q_OBJECT

public:
    ModelingSystem(QWidget *parent = nullptr);
    ~ModelingSystem();

private:
    Ui::ModelingSystemClass ui;
};

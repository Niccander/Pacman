#include "klasaglowna.h"
#include "ui_klasaglowna.h"

KlasaGlowna::KlasaGlowna(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KlasaGlowna)
{
    ui->setupUi(this);
}

KlasaGlowna::~KlasaGlowna()
{
    delete ui;
}

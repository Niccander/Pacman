#include "klasaglowna.h"
#include "ui_klasaglowna.h"

KlasaGlowna::KlasaGlowna(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KlasaGlowna)
{
    ui->setupUi(this);
    ui->pushButton->setText("EXIT");
}

KlasaGlowna::~KlasaGlowna()
{
    delete ui;
}

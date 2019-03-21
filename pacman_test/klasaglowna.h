#ifndef KLASAGLOWNA_H
#define KLASAGLOWNA_H

#include <QMainWindow>

namespace Ui {
class KlasaGlowna;
}

class KlasaGlowna : public QMainWindow
{
    Q_OBJECT

public:
    explicit KlasaGlowna(QWidget *parent = nullptr);
    ~KlasaGlowna();

private:
    Ui::KlasaGlowna *ui;
};

#endif // KLASAGLOWNA_H

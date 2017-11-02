#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "qnanoquickitem.h"
#include "qnanoquickitempainter.h"

class MainScene : public QNanoQuickItem
{

    Q_OBJECT

public:

    // Explicit constructor
    explicit MainScene(QQuickItem * parent = Q_NULLPTR);

    // Destructor
    ~MainScene();

    // Create painter using the new class
    QNanoQuickItemPainter * createItemPainter() const override;

private:

    // Private variables
    //
    int m_counter;

};

#endif // MAINSCENE_H

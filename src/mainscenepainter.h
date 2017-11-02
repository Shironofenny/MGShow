#ifndef MAINSCENEPAINTER_H
#define MAINSCENEPAINTER_H

#include "qnanoquickitempainter.h"

class MainScenePainter : public QNanoQuickItemPainter
{

public:

    // Empty explicit constructor, the whole purpose for this class is to run
    // painting in a different thread through synchronization technique, according
    // to the documentation.
    explicit MainScenePainter();

    // Override paint method
    void paint(QNanoPainter * painter) override;
};

#endif // MAINSCENEPAINTER_H

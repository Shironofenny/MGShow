#include "mainscene.h"

MainScene::MainScene(QQuickItem * parent)
    : QNanoQuickItem(parent) {

    // Initial construction
    this->m_counter=0;
}

MainScene::~MainScene(){

}

QNanoQuickItemPainter * MainScene::createItemPainter() const {

}

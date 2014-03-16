#ifndef MOTIONCONTROLLER_H
#define MOTIONCONTROLLER_H

#include <QObject>

class QAbstractTableModel;
class GLWidget;

class MotionController : public QObject
{
    Q_OBJECT
public:
    explicit MotionController(QObject *parent = 0);

    QAbstractTableModel *getModel() const;
    void setModel(QAbstractTableModel *value);

    GLWidget *getGLWidget() const;
    void setGLWidget(GLWidget *value);

signals:

public slots:
    void slotUpdateMovement();

private:
    QAbstractTableModel *mModel;
    GLWidget *mGLWidget;

    int mRotX;
    int mRotY;
    int mRotZ;
    int mRotAmplitude;

};

#endif // MOTIONCONTROLLER_H
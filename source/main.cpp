#include <QtCore/QCoreApplication>
#include "Emitter.h"

int main(int argc, char* argv[]) {
    QCoreApplication app(argc, argv);
    Emitter emitter;

    QObject::connect(&emitter, &Emitter::signal, &emitter, &Emitter::slot);
    emitter.trigger();
    return app.exec();
}

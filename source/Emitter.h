#pragma once
#include <QtCore/QObject>
#include <QtCore/QCoreApplication>

class Emitter : public QObject {
	Q_OBJECT
public:
	Emitter() = default;

	void trigger() {
		qDebug() << "Signal triggered";
		emit signal();
	}

signals:
	void signal();

public slots:
	void slot() {
		qDebug() << "Slot called. Exiting";
		QCoreApplication::quit();
	}
};
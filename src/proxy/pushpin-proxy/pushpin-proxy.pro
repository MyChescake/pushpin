CONFIG += console
CONFIG -= app_bundle
QT -= gui
QT += network
TARGET = pushpin-proxy
DESTDIR = ../../../bin

MOC_DIR = $$OUT_PWD/_moc
OBJECTS_DIR = $$OUT_PWD/_obj

LIBS += -L$$PWD/.. -lpushpin-proxy
PRE_TARGETDEPS += $$PWD/../libpushpin-proxy.a

LIBS += -L$$PWD/../../corelib -lpushpin-core
PRE_TARGETDEPS += $$PWD/../../corelib/libpushpin-core.a

CONFIG(release) {
	LIBS += -L$$PWD/../../../target/release -lpushpin -ldl
} else {
	LIBS += -L$$PWD/../../../target/debug -lpushpin -ldl
}

include($$OUT_PWD/../../../conf.pri)
include(pushpin-proxy.pri)

unix:!isEmpty(BINDIR) {
	target.path = $$BINDIR
	INSTALLS += target
}

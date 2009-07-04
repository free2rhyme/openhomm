DESTDIR     = $$PWD/bin/$$(QMAKESPEC)
OBJECTS_DIR = $$PWD/obj/$$(QMAKESPEC)
MOC_DIR     = $$PWD/moc/$$(QMAKESPEC)
RCC_DIR     = $$PWD/rcc/$$(QMAKESPEC)

CONFIG(debug,debug|release) { 
    CONFIG += console
    DESTDIR     = $$DESTDIR/debug
    OBJECTS_DIR = $$OBJECTS_DIR/debug
    MOC_DIR     = $$MOC_DIR/debug
    RCC_DIR     = $$RCC_DIR/debug
}

CONFIG(release, debug|release) {
    DESTDIR     = $$DESTDIR/release
    OBJECTS_DIR = $$OBJECTS_DIR/release
    MOC_DIR     = $$MOC_DIR/release
    RCC_DIR     = $$RCC_DIR/release
}

win32-msvc2* {
	DEFINES += "_CRT_SECURE_NO_WARNINGS" "_CRT_NON_CONFORMING_SWPRINTFS"
	RC_FILE = $$PWD/src/version.rc
}
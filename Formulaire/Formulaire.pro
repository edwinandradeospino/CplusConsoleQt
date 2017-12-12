TEMPLATE = app
TARGET = Formulaire
QT += core \
    gui
HEADERS += electeurinscrits.h \
    supprimerpersonne.h \
    candidatinscriptions.h \
    formulaire.h
SOURCES += electeurinscrits.cpp \
    supprimerpersonne.cpp \
    candidatinscriptions.cpp \
    main.cpp \
    formulaire.cpp
FORMS += electeurinscrits.ui \
    supprimerpersonne.ui \
    candidatinscriptions.ui \
    formulaire.ui
RESOURCES += 
LIBS += "../Source/Debug/libSource.a"
INCLUDEPATH += "../Source/."

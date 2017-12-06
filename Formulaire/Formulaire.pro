TEMPLATE = app
TARGET = Formulaire
QT += core \
    gui
HEADERS += candidatinscriptions.h \
    formulaire.h
SOURCES += candidatinscriptions.cpp \
    main.cpp \
    formulaire.cpp
FORMS += candidatinscriptions.ui \
    formulaire.ui
RESOURCES += 
LIBS += "../Source/Debug/libSource.a"
INCLUDEPATH += "../Source/."

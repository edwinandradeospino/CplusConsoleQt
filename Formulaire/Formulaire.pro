TEMPLATE = app
TARGET = Formulaire 

QT        += core gui 

HEADERS   += formulaire.h
SOURCES   += main.cpp \
    formulaire.cpp
FORMS     += formulaire.ui    
RESOURCES +=

LIBS += "../Source/Debug/libSource.a"
INCLUDEPATH += "../Source/."
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backend.cpp \
    chatbotdetl.cpp \
    cppdetl.cpp \
    database.cpp \
    designthinkdetl.cpp \
    djangodetl.cpp \
    freecodedetl.cpp \
    frontend.cpp \
    fullstack.cpp \
    fullstackopdetl.cpp \
    htmlcssdetail.cpp \
    javascriptdetl.cpp \
    main.cpp \
    mainmenu.cpp \
    nodedetl.cpp \
    nosqldetl.cpp \
    odindetl.cpp \
    onlearn.cpp \
    otherreso.cpp \
    programminglanguages.cpp \
    pythondetl.cpp \
    reactdetl.cpp \
    readfile.cpp \
    sqldetl.cpp \
    webdev.cpp

HEADERS += \
    backend.h \
    chatbotdetl.h \
    cppdetl.h \
    database.h \
    designthinkdetl.h \
    djangodetl.h \
    freecodedetl.h \
    frontend.h \
    fullstack.h \
    fullstackopdetl.h \
    htmlcssdetail.h \
    javascriptdetl.h \
    mainmenu.h \
    nodedetl.h \
    nosqldetl.h \
    odindetl.h \
    onlearn.h \
    otherreso.h \
    programminglanguages.h \
    pythondetl.h \
    reactdetl.h \
    readfile.h \
    sqldetl.h \
    webdev.h

FORMS += \
    backend.ui \
    chatbotdetl.ui \
    cppdetl.ui \
    database.ui \
    designthinkdetl.ui \
    djangodetl.ui \
    freecodedetl.ui \
    frontend.ui \
    fullstack.ui \
    fullstackopdetl.ui \
    htmlcssdetail.ui \
    javascriptdetl.ui \
    mainmenu.ui \
    nodedetl.ui \
    nosqldetl.ui \
    odindetl.ui \
    onlearn.ui \
    otherreso.ui \
    programminglanguages.ui \
    pythondetl.ui \
    reactdetl.ui \
    sqldetl.ui \
    webdev.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    readfile.qrc

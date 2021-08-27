#ifndef EDITOR_H
#define EDITOR_H

#include <QApplication>

#define TO_STRING(s)    #s
#define STRINGIFY(s)    TO_STRING(s)

#define VERSION_MAJOR   1
#define VERSION_MINOR   0
#define VERSION_PATCH   0

#define EDITOR_NAME     "PopSoundEditor"
#define EDITOR_VERSION  STRINGIFY(VERSION_MAJOR) "." STRINGIFY(VERSION_MINOR) "." STRINGIFY(VERSION_PATCH)
#define	EDITOR_DATE     __DATE__ " " __TIME__

#ifdef QT_DEBUG
#define EDITOR_BUILD    "(DEBUG)"
#else
#define EDITOR_BUILD    "(RELEASE)"
#endif

#endif // EDITOR_H

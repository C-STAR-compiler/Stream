#ifndef PROCESSSTREAM_H
#define PROCESSSTREAM_H

// C
#include <stdio.h>

// CUT
#include <diagnostic.h>
#include <oop.h>
#include <charstream.h>

#include "stream.export.h"

#define PUBLIC STREAM_EXPORT
#define TYPENAME ProcessStream

OBJECT (FILE *stream) INHERIT (CharStream)
END_OBJECT(NULL);

PUBLIC ProcessStream *STATIC (Open)(const char *command, AccessModes mode);

PUBLIC void _(Close)()      VIRTUAL (Close);
PUBLIC int  _(Peek) ()      VIRTUAL (Peek);
PUBLIC int  _(Get)  ()      VIRTUAL (Get);
PUBLIC void _(Unget)(int c) VIRTUAL (Unget);
PUBLIC void _(Put)  (int c) VIRTUAL (Put);

#undef TYPENAME
#undef PUBLIC
#endif

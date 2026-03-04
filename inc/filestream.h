#ifndef FILESTREAM_H
#define FILESTREAM_H

// C
#include <stdio.h>

// CUT
#include <diagnostic.h>
#include <oop.h>
#include <charstream.h>
#include <file.h>

#include "stream.export.h"

#define PUBLIC STREAM_EXPORT
#define TYPENAME FileStream

OBJECT (FILE* file) INHERIT (CharStream)
END_OBJECT(stdin);

PUBLIC FileStream *STATIC (Open)(const char *name, AccessModes mode);

PUBLIC void _(Close)()      VIRTUAL (Close);
PUBLIC int  _(Peek) ()      VIRTUAL (Peek);
PUBLIC int  _(Get)  ()      VIRTUAL (Get);
PUBLIC void _(Unget)(int c) VIRTUAL (Unget);
PUBLIC void _(Put)  (int c) VIRTUAL (Put);

#undef TYPENAME
#undef PUBLIC
#endif

#ifndef CHARSTREAM_H
#define CHARSTREAM_H

//C
#include <stdio.h>
#include <stdlib.h>

// CUT
#include <diagnostic.h>
#include <str.h>
#include <stream.h>
#include <macro.h>
#include <oop.h>

#include "stream.export.h"

// Abstract class
#define PUBLIC STREAM_EXPORT
#define TYPENAME CharStream

// (!) This class must always be initialized using the NEW macro
OBJECT (void *stream) INHERIT (Stream)
END_OBJECT(NULL);

PUBLIC int  _(Peek)();
PUBLIC int  _(Get)();
PUBLIC void _(Unget)(int c);
PUBLIC void _(Put)(int c);

PUBLIC int  _(Escape)();
PUBLIC int  _(Read)();
PUBLIC int  _(ReadWith)(int escape);
PUBLIC void _(Write)(int c);
PUBLIC void _(WriteWith)(int escape, int c);

PUBLIC int CONST (EOS)();

// Puts the line as is
PUBLIC void    _(PutStr)(const char *line);
// Puts the line and generates escape sequences based on the specified escape char
PUBLIC void    _(WriteStr)(const char *line);

// Puts the line as is
PUBLIC void    _(PutLn)(const char *line);
// Puts the line and generates escape sequences based on the specified escape char
PUBLIC void    _(WriteLn)(const char *line);

// Gets the line as is
PUBLIC String *_(GetLine)();

// Gets the line and interprets what's after the escape char
PUBLIC String *_(ReadLine)();

// Gets and consume the stream
PUBLIC String *_(GetToEnd)();

// Reads and consume the stream
PUBLIC String *_(ReadToEnd)();

// Puts an object to the stream
PUBLIC void _(PutString)(void *object);

// Writes an object to the stream
PUBLIC void _(WriteString)(void *object);

// Puts an object to the stream and newline
PUBLIC void _(PutLine)(void *object);

// Writes an object to the stream and newline
PUBLIC void _(WriteLine)(void *object);


#undef TYPENAME
#undef PUBLIC
#endif
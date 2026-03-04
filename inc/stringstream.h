#ifndef STRINGSTREAM_H
#define STRINGSTREAM_H

// CUT
#include <diagnostic.h>
#include <str.h>
#include <charstream.h>

#define PUBLIC STREAM_EXPORT
#define TYPENAME StringStream

OBJECT (String *string) INHERIT (CharStream)
  int pos;
END_OBJECT(NULL);

PUBLIC StringStream *STATIC(Open)(const char *string);

PUBLIC void  _(Close)()      VIRTUAL (Close);
PUBLIC int   _(Peek) ()      VIRTUAL (Peek);
PUBLIC int   _(Get)  ()      VIRTUAL (Get);
PUBLIC void  _(Unget)(int c) VIRTUAL (Unget);
PUBLIC void  _(Put)  (int c) VIRTUAL (Put);

#undef TYPENAME
#undef PUBLIC
#endif

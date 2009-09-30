/* lang.Range header file, generated with ooc */
#ifndef ___lang_Range__
#define ___lang_Range__


typedef struct _lang__Range lang__Range;

#include <lang/Object.h>
#include <lang/ooclib.h>
struct _lang__Range 
{
	lang__Int min, max;
};

lang__Class *Range_class();
lang__Range Range_new(lang__Int min, lang__Int max);
lang__Void _lang_Range_load();

#endif // ___lang_Range__


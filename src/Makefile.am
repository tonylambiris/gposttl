LDADD = $(LIBOBJS) $(ALLOCA)

SOURCES = gposttl.c tagger_controller.c darray.c enhance_penntag.c final-state-tagger.c lex.c memory.c registry.c start-state-tagger.c tagger.c tokenizer.c useful.c

bin_PROGRAMS = gposttl
gposttl_SOURCES = $(SOURCES)
gposttl_CFLAGS = $(AM_CFLAGS)
gposttl_LDFLAGS = $(AM_LDFLAGS)

lib_LTLIBRARIES = libgposttl.la
libgposttl_la_SOURCES = $(SOURCES)
libgposttl_la_CFLAGS = $(AM_CFLAGS)
libgposttl_la_LDFLAGS = $(AM_LDFLAGS)

EXTRA_DIST = bool.h darray.h darrayP.h enhance_penntag.h tagger_controller.h lex.h memory.h registry.h registryP.h sysdep.h tagger.h tokenizer.h useful.h

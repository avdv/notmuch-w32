
noinst_LIBRARIES = libutil.a

AM_CPPFLAGS = \
	-I../gnulib \
	-I$(top_srcdir)/gnulib \
	-I$(top_srcdir)/compat \
	$(TALLOC_CFLAGS)

libutil_a_SOURCES = error_util.c \
	hex-escape.c \
	string-util.c \
	talloc-extra.c \
	xutil.c


noinst_LIBRARIES = libnotmuch.a

libnotmuch_a_SOURCES = \
	database.cc \
	directory.cc \
	filenames.c \
	index.cc \
	libsha1.c \
	message-file.c \
	message.cc \
	messages.c \
	parse-time-vrp.cc \
	query.cc \
	sha1.c \
	string-list.c \
	tags.c \
	thread.cc

AM_CPPFLAGS = \
	-I../gnulib \
	-I$(top_srcdir)/gnulib \
	-I$(top_srcdir)/compat \
	-I$(top_srcdir)/util \
	-I$(top_srcdir)/parse-time-string \
	$(TALLOC_CFLAGS) \
	$(GMIME_CFLAGS)



#bin_PROGRAMS = notmuch

SUBDIRS = gnulib lib parse-time-string util man

ACLOCAL_AMFLAGS = -I m4

EXTRA_DIST = m4/gnulib-cache.m4 README NEWS INSTALL AUTHORS COPYING COPYING-GPL-3


bin_PROGRAMS = notmuch

AM_CPPFLAGS = -Iutil

notmuch_SOURCES = command-line-arguments.c \
	crypto.c \
	debugger.c \
	gmime-filter-headers.c \
	gmime-filter-reply.c \
	hooks.c \
	mime-node.c \
	notmuch-config.c \
	notmuch-count.c \
	notmuch-dump.c \
	notmuch-insert.c \
	notmuch-new.c \
	notmuch-reply.c \
	notmuch-restore.c \
	notmuch-search.c \
	notmuch-setup.c \
	notmuch-show.c \
	notmuch-tag.c \
	notmuch-time.c \
	notmuch.c \
	query-string.c \
	sprinter-json.c \
	sprinter-sexp.c \
	sprinter-text.c \
	tag-util.c

# add a dummy C++ source file to force using the C++ linker
nodist_EXTRA_notmuch_SOURCES = dummy.cc

notmuch_CPPFLAGS = \
	-Ignulib \
	-I$(top_srcdir)/gnulib \
	-I$(top_srcdir)/compat \
	-I$(top_srcdir)/lib \
	-I$(top_srcdir)/util \
	$(TALLOC_CFLAGS) \
	$(GMIME_CFLAGS) \
	$(XAPIAN_CXXFLAGS)

notmuch_LDADD = \
	lib/libnotmuch.a \
	parse-time-string/libparse-time-string.a \
	util/libutil.a \
	gnulib/libgnu.a \
	$(GETHOSTNAME_LIB) \
	$(LTLIBS) \
	$(TALLOC_LIBS) \
	$(GMIME_LIBS) \
	$(LIBINTL) \
	$(XAPIAN_LIBS)

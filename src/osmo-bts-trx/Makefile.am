AM_CPPFLAGS = $(all_includes) -I$(top_srcdir)/include -I$(OPENBSC_INCDIR)
AM_CFLAGS = -Wall -fno-strict-aliasing $(LIBOSMOCORE_CFLAGS) $(LIBOSMOGSM_CFLAGS) $(LIBOSMOCODEC_CFLAGS) $(LIBOSMOVTY_CFLAGS) $(LIBOSMOTRAU_CFLAGS) $(LIBOSMOABIS_CFLAGS) $(LIBOSMOCTRL_CFLAGS) $(ORTP_CFLAGS)
LDADD = $(LIBOSMOCORE_LIBS) $(LIBOSMOGSM_LIBS) $(LIBOSMOCODEC_LIBS) $(LIBOSMOVTY_LIBS) $(LIBOSMOTRAU_LIBS) $(LIBOSMOABIS_LIBS) $(LIBOSMOCTRL_LIBS) $(ORTP_LIBS)

EXTRA_DIST = trx_if.h l1_if.h gsm0503_parity.h gsm0503_conv.h gsm0503_interleaving.h gsm0503_mapping.h gsm0503_coding.h gsm0503_tables.h loops.h

bin_PROGRAMS = osmo-bts-trx

osmo_bts_trx_SOURCES = main.c trx_if.c l1_if.c scheduler_trx.c trx_vty.c gsm0503_parity.c gsm0503_conv.c gsm0503_interleaving.c gsm0503_mapping.c gsm0503_coding.c gsm0503_tables.c loops.c
osmo_bts_trx_LDADD = $(top_builddir)/src/common/libbts.a $(top_builddir)/src/common/libl1sched.a $(LDADD)


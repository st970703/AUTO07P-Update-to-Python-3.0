#===> Makefile
#
#   Makefile originally written by Xianjun WANG in March 1994.
#
#   Redone by Randy C. Paffenroth 1999 for use with a configure script and python
#   front end.
SHELL=/bin/sh

#
all: src cmds util  plaut plaut04 tek2ps
cmd: src cmds util plaut

src: .FORCE
	cd ./src;$(MAKE)

cmds: .FORCE
	# work around case insensitive filesystems
	cd ./cmds; for cmd in @H @LB @R @RD; do \
	    if test ! -r $$cmd; then \
		cp -p @$$cmd $$cmd; \
	    fi \
	done

util: .FORCE
	cd ./util;$(MAKE)

gui: .FORCE
	cd ./gui;$(MAKE)

plaut: .FORCE
	cd ./plaut;$(MAKE)

plaut04: .FORCE
	cd ./plaut04;$(MAKE)

tek2ps: .FORCE
	cd ./tek2ps;$(MAKE)

#
clean:
	cd ./gui;$(MAKE) clean
	cd ./plaut;$(MAKE) clean
	cd ./plaut04;$(MAKE) clean
	cd ./tek2ps;$(MAKE) clean
	cd ./doc;$(MAKE) clean
#
superclean:  clean
	cd ./cmds; if diff @R @@R > /dev/null; then rm @H @LB @R @RD; fi
	cd ./plaut04;$(MAKE) superclean
	rm -rf config.cache config.log config.status autom4te*.cache
	cd ./bin; rm -f AUTO97 plaut autlab 86to97 94to97 double triple \
	  keeplp keepbp keepsp keepuz deletelp deleteuz \
	  listlabels reduce relabel plaut04 r3bplaut04
	cd ./src; $(MAKE) superclean
	cd ./util; $(MAKE) superclean
	cd ./doc; $(MAKE) superclean
	cd ./include; rm -f stamp-h1
	rm -f python/*.pyc python/graphics/*.pyc
	rm -f test/*.pyc test/*_log07p* test/verification/*.html
	rm -f Makefile cmds/Makefile gui/Makefile plaut/Makefile src/Makefile \
	  tek2ps/Makefile gui/auto.makefile include/config.h cmds/cmds.make \
	  cmds/compat.sh util/Makefile
	@echo "Super cleaning ... done"

.FORCE:



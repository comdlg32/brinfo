LD = gcc
CC = gcc

OUTPUT = brinfo
# CFLAGS = -O2 -fno-PIC
CFLAGS = -O2
LDLIBS_STATIC  = -lforms -lXpm -lX11 -lxcb -lXdmcp -lXau 
LDLIBS_DYNAMIC  = -lm
LDLIBS = $(LDLIBS_STATIC) $(LDLIBS_DYNAMIC)
# LDFLAGS = -no-pie
PREFIX = /usr/local

all: brinfo

$(OUTPUT).desktop:
	./gendesktop.sh $(OUTPUT)

$(OUTPUT): brinfo.o strerror.o $(OUTPUT).desktop
	$(LD) $(LDFLAGS) -o $(OUTPUT) brinfo.o strerror.o $(LDLIBS)

brinfo.o: brinfo.c brinfo.h trafficg.xpm trafficy.xpm trafficr.xpm brinfo16.xpm
	$(CC) -c $(CFLAGS) brinfo.c

strerror.o: strerror.c
	$(CC) -c $(CFLAGS) strerror.c

clean:
	rm -f brinfo.o $(OUTPUT)

link-static: brinfo.o strerror.o
	$(LD) $(LDFLAGS) -o $(OUTPUT) brinfo.o strerror.o \
		-Wl,-Bstatic $(LDLIBS_STATIC) \
		-Wl,-Bdynamic $(LDLIBS_DYNAMIC)

install: $(OUTPUT) $(OUTPUT).desktop
	mkdir -p $(PREFIX)/share/applications
	cp -f $(OUTPUT).desktop $(PREFIX)/share/applications/$(OUTPUT).desktop
	mkdir -p $(PREFIX)/share/pixmaps
	mkdir -p $(PREFIX)/share/icons/locolor/16x16/apps
	mkdir -p $(PREFIX)/share/icons/locolor/32x32/apps
	cp -f brinfo16.xpm $(PREFIX)/share/pixmaps/brinfo16.xpm
	cp -f brinfo32.xpm $(PREFIX)/share/pixmaps/brinfo32.xpm
	rm -f $(PREFIX)/share/icons/locolor/16x16/apps/$(OUTPUT).xpm
	ln -s $(PREFIX)/share/pixmaps/brinfo16.xpm $(PREFIX)/share/icons/locolor/16x16/apps/$(OUTPUT).xpm
	rm -f $(PREFIX)/share/icons/locolor/32x32/apps/$(OUTPUT).xpm
	ln -s $(PREFIX)/share/pixmaps/brinfo32.xpm $(PREFIX)/share/icons/locolor/32x32/apps/$(OUTPUT).xpm
	cp -f $(OUTPUT) $(PREFIX)/bin/$(OUTPUT)
	strip $(PREFIX)/bin/$(OUTPUT)

uninstall:
	rm -f $(PREFIX)/bin/$(OUTPUT)
	rm -f $(PREFIX)/share/applications/$(OUTPUT).desktop
	rm -f $(PREFIX)/share/icons/locolor/16x16/apps/$(OUTPUT).xpm $(PREFIX)/share/pixmaps/brinfo16.xpm
	rm -f $(PREFIX)/share/icons/locolor/32x32/apps/$(OUTPUT).xpm $(PREFIX)/share/pixmaps/brinfo32.xpm


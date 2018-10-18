CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/opt/vc/lib -L/usr/lib/arm-linux-gnueabihf -L/usr/lib/aarch64-linux-gnu -lm -lrt -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/aarch64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		demo_control.c \
		af_control.c \
		lsc_control.c \
		ois_control.c \
		communication_jetson.c moc_mainwindow.cpp
OBJECTS       = main.o \
		mainwindow.o \
		demo_control.o \
		af_control.o \
		lsc_control.o \
		ois_control.o \
		communication_jetson.o \
		moc_mainwindow.o
DIST          = 
DESTDIR       = 
TARGET        = testCamera


.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

testCamera: testCamera.o demo_control.o af_control.o lsc_control.o ois_control.o communication_jetson.o
	$(CXX) -pthread -o testCamera testCamera.o demo_control.o af_control.o lsc_control.o ois_control.o communication_jetson.o

testCamera.o: testCamera.cpp testCamera.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o testCamera.o testCamera.cpp

demo_control.o: demo_control.c demo_control.h \
		communication.h \
		types_util.h \
		af_control.h \
		slave_address.h \
		ois_control.h \
		lsc_control.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o demo_control.o demo_control.c

af_control.o: af_control.c af_control.h \
		slave_address.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o af_control.o af_control.c

lsc_control.o: lsc_control.c lsc_control.h \
		slave_address.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o lsc_control.o lsc_control.c

ois_control.o: ois_control.c ois_control.h \
		slave_address.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o ois_control.o ois_control.c

communication_jetson.o: communication_jetson.c communication.h \
		types_util.h \
		debug_util.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o communication_jetson.o communication_jetson.c
clean:
	rm -f *.o


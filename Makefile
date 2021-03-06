#############################################################################
# Makefile for building: Rubikscube
# Generated by qmake (2.01a) (Qt 4.8.6) on: ?? 1? 15 05:48:35 2017
# Project:  ..\cpp\Rubikscube(2)(1)\Rubikscube.pro
# Template: app
# Command: e:\Qt\Qt_static\bin\qmake.exe -spec ..\Qt\Qt_static\mkspecs\win32-g++ -o Makefile ..\cpp\Rubikscube(2)(1)\Rubikscube.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = e:\Qt\Qt_static\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: ../cpp/Rubikscube(2)(1)/Rubikscube.pro  ../Qt/Qt_static/mkspecs/features/device_config.prf \
		../Qt/Qt_static/mkspecs/qconfig.pri \
		../Qt/Qt_static/mkspecs/features/qt_functions.prf \
		../Qt/Qt_static/mkspecs/features/qt_config.prf \
		../Qt/Qt_static/mkspecs/features/exclusive_builds.prf \
		../Qt/Qt_static/mkspecs/features/default_pre.prf \
		../Qt/Qt_static/mkspecs/features/win32/default_pre.prf \
		../Qt/Qt_static/mkspecs/features/debug.prf \
		../Qt/Qt_static/mkspecs/features/debug_and_release.prf \
		../Qt/Qt_static/mkspecs/features/default_post.prf \
		../Qt/Qt_static/mkspecs/features/win32/default_post.prf \
		../Qt/Qt_static/mkspecs/features/win32/rtti.prf \
		../Qt/Qt_static/mkspecs/features/win32/exceptions.prf \
		../Qt/Qt_static/mkspecs/features/win32/stl.prf \
		../Qt/Qt_static/mkspecs/features/static.prf \
		../Qt/Qt_static/mkspecs/features/warn_on.prf \
		../Qt/Qt_static/mkspecs/features/qt.prf \
		../Qt/Qt_static/mkspecs/features/win32/opengl.prf \
		../Qt/Qt_static/mkspecs/features/win32/thread.prf \
		../Qt/Qt_static/mkspecs/features/moc.prf \
		../Qt/Qt_static/mkspecs/features/win32/windows.prf \
		../Qt/Qt_static/mkspecs/features/resources.prf \
		../Qt/Qt_static/mkspecs/features/uic.prf \
		../Qt/Qt_static/mkspecs/features/yacc.prf \
		../Qt/Qt_static/mkspecs/features/lex.prf \
		../Qt/Qt_static/mkspecs/features/include_source_dir.prf \
		e:/Qt/Qt_static/lib/qtmaind.prl \
		e:/Qt/Qt_static/lib/phonon.prl \
		e:/Qt/Qt_static/lib/QtOpenGL.prl \
		e:/Qt/Qt_static/lib/QtGui.prl \
		e:/Qt/Qt_static/lib/QtNetwork.prl \
		e:/Qt/Qt_static/lib/QtCore.prl
	$(QMAKE) -spec ..\Qt\Qt_static\mkspecs\win32-g++ -o Makefile ..\cpp\Rubikscube(2)(1)\Rubikscube.pro
..\Qt\Qt_static\mkspecs\features\device_config.prf:
..\Qt\Qt_static\mkspecs\qconfig.pri:
..\Qt\Qt_static\mkspecs\features\qt_functions.prf:
..\Qt\Qt_static\mkspecs\features\qt_config.prf:
..\Qt\Qt_static\mkspecs\features\exclusive_builds.prf:
..\Qt\Qt_static\mkspecs\features\default_pre.prf:
..\Qt\Qt_static\mkspecs\features\win32\default_pre.prf:
..\Qt\Qt_static\mkspecs\features\debug.prf:
..\Qt\Qt_static\mkspecs\features\debug_and_release.prf:
..\Qt\Qt_static\mkspecs\features\default_post.prf:
..\Qt\Qt_static\mkspecs\features\win32\default_post.prf:
..\Qt\Qt_static\mkspecs\features\win32\rtti.prf:
..\Qt\Qt_static\mkspecs\features\win32\exceptions.prf:
..\Qt\Qt_static\mkspecs\features\win32\stl.prf:
..\Qt\Qt_static\mkspecs\features\static.prf:
..\Qt\Qt_static\mkspecs\features\warn_on.prf:
..\Qt\Qt_static\mkspecs\features\qt.prf:
..\Qt\Qt_static\mkspecs\features\win32\opengl.prf:
..\Qt\Qt_static\mkspecs\features\win32\thread.prf:
..\Qt\Qt_static\mkspecs\features\moc.prf:
..\Qt\Qt_static\mkspecs\features\win32\windows.prf:
..\Qt\Qt_static\mkspecs\features\resources.prf:
..\Qt\Qt_static\mkspecs\features\uic.prf:
..\Qt\Qt_static\mkspecs\features\yacc.prf:
..\Qt\Qt_static\mkspecs\features\lex.prf:
..\Qt\Qt_static\mkspecs\features\include_source_dir.prf:
e:\Qt\Qt_static\lib\qtmaind.prl:
e:\Qt\Qt_static\lib\phonon.prl:
e:\Qt\Qt_static\lib\QtOpenGL.prl:
e:\Qt\Qt_static\lib\QtGui.prl:
e:\Qt\Qt_static\lib\QtNetwork.prl:
e:\Qt\Qt_static\lib\QtCore.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -spec ..\Qt\Qt_static\mkspecs\win32-g++ -o Makefile ..\cpp\Rubikscube(2)(1)\Rubikscube.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

check: first

debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile

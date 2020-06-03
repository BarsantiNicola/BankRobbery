OBJS=bankStudyRangeStudy.o 


#include common Makefile for default targets
include ../../Makefile.project
include $(MOBIUSROOT)/Cpp/BaseClasses/Makefile.common

all: normal
opt: $(ROOTDIR)/lib/$(PLATFORM)/libbankStudyRangeStudy.a
normal debug trace: $(ROOTDIR)/lib/$(PLATFORM)/libbankStudyRangeStudy_debug.a

$(ROOTDIR)/lib/$(PLATFORM)/libbankStudyRangeStudy.a: FORCE
	$(MAKE) lib TARGET=libbankStudyRangeStudy.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="" ROOTLIBDIR="."

$(ROOTDIR)/lib/$(PLATFORM)/libbankStudyRangeStudy_debug.a: FORCE
	$(MAKE) lib TARGET=libbankStudyRangeStudy_debug.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="_debug" ROOTLIBDIR="."

clean_sub_dirs:


OBJS=variablesPVNodes.o variablesPVModel.o 


#include common Makefile for default targets
include ../../Makefile.project
include $(MOBIUSROOT)/Cpp/BaseClasses/Makefile.common

all: normal
opt: $(ROOTDIR)/lib/$(PLATFORM)/libvariablesPV.a
normal debug trace: $(ROOTDIR)/lib/$(PLATFORM)/libvariablesPV_debug.a

$(ROOTDIR)/lib/$(PLATFORM)/libvariablesPV.a: FORCE
	$(MAKE) lib TARGET=libvariablesPV.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="" ROOTLIBDIR="."

$(ROOTDIR)/lib/$(PLATFORM)/libvariablesPV_debug.a: FORCE
	$(MAKE) lib TARGET=libvariablesPV_debug.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="_debug" ROOTLIBDIR="."

clean_sub_dirs:


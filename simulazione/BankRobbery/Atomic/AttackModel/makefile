OBJS=AttackModelADVISE.o 


#include common Makefile for default targets
include ../../Makefile.project
include $(MOBIUSROOT)/Cpp/BaseClasses/Makefile.common

all: normal
opt: $(ROOTDIR)/lib/$(PLATFORM)/libAttackModelADVISE.a
normal debug trace: $(ROOTDIR)/lib/$(PLATFORM)/libAttackModelADVISE_debug.a

$(ROOTDIR)/lib/$(PLATFORM)/libAttackModelADVISE.a: FORCE
	$(MAKE) lib TARGET=libAttackModelADVISE.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="" ROOTLIBDIR="."

$(ROOTDIR)/lib/$(PLATFORM)/libAttackModelADVISE_debug.a: FORCE
	$(MAKE) lib TARGET=libAttackModelADVISE_debug.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="_debug" ROOTLIBDIR="."

clean_sub_dirs:


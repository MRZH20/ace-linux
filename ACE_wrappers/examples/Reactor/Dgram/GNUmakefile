# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-896/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 12 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-896/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-896/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-896/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-896/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Reactor_Dgram Reactor_Dgram_CO

depend: Reactor_Dgram-depend Reactor_Dgram_CO-depend

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Reactor_Dgram $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Reactor_Dgram_CO $(@)

.PHONY: Reactor_Dgram
Reactor_Dgram:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Reactor_Dgram all

.PHONY: Reactor_Dgram-depend
Reactor_Dgram-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Reactor_Dgram depend

.PHONY: Reactor_Dgram_CO
Reactor_Dgram_CO:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Reactor_Dgram_CO all

.PHONY: Reactor_Dgram_CO-depend
Reactor_Dgram_CO-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Reactor_Dgram_CO depend

project_name_list:
	@echo Reactor_Dgram
	@echo Reactor_Dgram_CO

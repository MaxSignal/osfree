#
# make macros
# for building tools
#

!ifndef __appsos2pas_mk__
!define __appsos2pas_mk__

32_BITS  = 1
CLEAN_ADD = *.oo2 *.ppo *.o

!ifndef DEST
DEST    = os2
!endif

ADD_PCOPT = -Tos2

#CLEANMASK = *.lnk *.wmp *.obj *.err *.log *.bak *.sym

!ifeq DLL 1
TARGETS  = $(PATH)$(PROJ).dll # $(PATH)$(PROJ).sym
!else
TARGETS  = $(PATH)$(PROJ).exe # $(PATH)$(PROJ).sym
!endif

!include $(%ROOT)/mk/all.mk

$(PATH)$(PROJ).lnk: .symbolic

!endif

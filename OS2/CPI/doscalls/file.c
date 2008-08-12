#include <osfree.h>

// Implementation of kernel-independed functions via kernel-depended functions

APIRET APIENTRY DosCancelLockRequest(HFILE,PFILELOCK);
APIRET APIENTRY DosCreateDir(PCSZ,PEAOP2);
APIRET APIENTRY DosDelete(PCSZ);
APIRET APIENTRY DosDeleteDir(PCSZ);
APIRET APIENTRY DosDupHandle(HFILE,PHFILE);
APIRET APIENTRY DosEnumAttribute(ULONG,PVOID,ULONG,PVOID,ULONG,PULONG,ULONG);
APIRET APIENTRY DosForceDelete(PCSZ);
APIRET APIENTRY DosFSAttach(PCSZ,PCSZ,PVOID,ULONG,ULONG);
APIRET APIENTRY DosFSCtl(PVOID,ULONG,PULONG,PVOID,ULONG,PULONG,ULONG,PCSZ,HFILE,ULONG);
APIRET APIENTRY DosMove(PCSZ,PCSZ);
APIRET APIENTRY DosProtectClose(HFILE,FHLOCK);
APIRET APIENTRY DosProtectEnumAttribute(ULONG,PVOID,ULONG,PVOID,ULONG,PULONG,ULONG,FHLOCK);
APIRET APIENTRY DosProtectOpen(PCSZ,PHFILE,PULONG,ULONG,ULONG,ULONG,ULONG,PEAOP2,PFHLOCK);
APIRET APIENTRY DosProtectQueryFHState(HFILE,PULONG,FHLOCK);
APIRET APIENTRY DosProtectQueryFileInfo(HFILE,ULONG,PVOID,ULONG,FHLOCK);
APIRET APIENTRY DosProtectRead(HFILE,PVOID,ULONG,PULONG,FHLOCK);
APIRET APIENTRY DosProtectSetFHState(HFILE,ULONG,FHLOCK);
APIRET APIENTRY DosProtectSetFileInfo(HFILE,ULONG,PVOID,ULONG,FHLOCK);
APIRET APIENTRY DosProtectSetFileLocks(HFILE,PFILELOCK,PFILELOCK,ULONG,ULONG,FHLOCK);
APIRET APIENTRY DosProtectSetFilePtr(HFILE,LONG,ULONG,PULONG,FHLOCK);
APIRET APIENTRY DosProtectSetFileSize(HFILE,ULONG,FHLOCK);
APIRET APIENTRY DosProtectWrite(HFILE,ULONG,ULONG,PULONG,FHLOCK);
APIRET APIENTRY DosQueryCurrentDir(ULONG,PBYTE,PULONG);
APIRET APIENTRY DosQueryCurrentDisk(PULONG,PULONG);
APIRET APIENTRY DosQueryFHState(HFILE,PULONG);
APIRET APIENTRY DosQueryFileInfo(HFILE,ULONG,PVOID,ULONG);
APIRET APIENTRY DosQueryFSAttach(PCSZ,ULONG,ULONG,PFSQBUFFER2,PULONG);
APIRET APIENTRY DosQueryFSInfo(ULONG,ULONG,PVOID,ULONG);
APIRET APIENTRY DosQueryHType(HFILE,PULONG,PULONG);
APIRET APIENTRY DosQueryPathInfo(PCSZ,ULONG,PVOID,ULONG);
APIRET APIENTRY DosQueryVerify(BOOL32*);
APIRET APIENTRY DosResetBuffer(HFILE);
APIRET APIENTRY DosSetCurrentDir(PCSZ);
APIRET APIENTRY DosSetDefaultDisk(ULONG);
APIRET APIENTRY DosSetFHState(HFILE,ULONG);
APIRET APIENTRY DosSetFileInfo(HFILE,ULONG,PVOID,ULONG);
APIRET APIENTRY DosSetFileLocks(HFILE,PFILELOCK,PFILELOCK,ULONG,ULONG);
APIRET APIENTRY DosSetFilePtr(HFILE,LONG,ULONG,PULONG);
APIRET APIENTRY DosSetFileSize(HFILE,ULONG);
APIRET APIENTRY DosSetFSInfo(ULONG,ULONG,PVOID,ULONG);
APIRET APIENTRY DosSetMaxFH(ULONG);
APIRET APIENTRY DosSetPathInfo(PCSZ,ULONG,PVOID,ULONG,ULONG);
APIRET APIENTRY DosSetRelMaxFH(PLONG,PULONG);
APIRET APIENTRY DosSetVerify(BOOL32);
APIRET APIENTRY DosShutdown(ULONG);

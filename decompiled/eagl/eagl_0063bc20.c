/* spd-match: far pct=8.11 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141558Z_w0_tc0 */
#include "ghidra_compat.h"

typedef char *va_list;
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
int __cdecl __stricmp(const char *, const char *);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);

int __cdecl FUN_0063acb0();
int __cdecl FUN_0063acf0();
int __cdecl FUN_0063b050();
int __cdecl FUN_0063b6e0();
int __cdecl FUN_0063d150();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00642e60();
extern int DAT_006e75f4;
extern unsigned char *DAT_0070f490;
extern unsigned int uRam006e75f8;
extern unsigned int uRam006e7608;
int __cdecl func_0x0063e440();

extern int iRam006e760c;
extern int iRam006e75fc;
extern int uRam006e75f8;
extern int uRam006e7608;






undefined4 FUN_0063bc20(char *param_1,LPCVOID param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  HANDLE hFile;
  int iVar8;
  BOOL BVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  CHAR aCStack_104 [260];
  
  FUN_00642e60(7,"Caching file %s... ",param_1);
  cVar2 = FUN_0063d150(param_1);
  if (cVar2 != '\0') {
    FUN_00642e60(7,"Already cached.\n");
    return 1;
  }
  if (param_2 == (LPCVOID)0x0) {
    uVar3 = FUN_0063b6e0(param_1,param_4);
    return uVar3;
  }
  uVar11 = 0;
  if (-1 < iRam006e760c) {
    uVar11 = func_0x0063e440(DAT_006e75f4);
  }
  if (DAT_0070f490 == 0) {
    uVar7 = 0;
    iVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(DAT_0070f490 + 0x10);
    iVar4 = *(int *)(DAT_0070f490 + 0x14);
  }
  uStack_108 = (int)param_3 >> 0x1f;
  uStack_10c = param_3;
  iVar4 = uStack_108 + iVar4 + (uint)CARRY4(param_3,uVar7);
  if ((iRam006e75fc < iVar4) || ((iRam006e75fc <= iVar4 && (uRam006e75f8 <= param_3 + uVar7)))) {
    return 0;
  }
  iVar4 = ((int)((ulonglong)uVar11 >> 0x20) - uStack_108) - (uint)((uint)uVar11 < param_3);
  if (iRam006e760c < iVar4) {
    return 0;
  }
  if ((iRam006e760c <= iVar4) && (uRam006e7608 < (uint)uVar11 - param_3)) {
    return 0;
  }
  pcVar5 = DAT_006e75f4;
  do {
    cVar2 = *pcVar5;
    pcVar5[(int)(aCStack_104 + -(int)DAT_006e75f4)] = cVar2;
    pcVar5 = pcVar5 + 1;
    pcVar6 = param_1;
  } while (cVar2 != '\0');
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar7 = (int)pcVar6 - (int)param_1;
  pcVar5 = (char *)((int)&uStack_108 + 3);
  do {
    pcVar6 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = param_1;
  for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_0063acf0();
  hFile = CreateFileA(aCStack_104,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,5,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00642e60(7,"CacheDataFile - first open attempt failed on file %s.\n",param_1);
    hFile = CreateFileA(aCStack_104,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      return 0;
    }
  }
  FUN_00642e60(7,"CacheDataFile - Writing file %s to disk cache.\n",param_1);
  iVar4 = FUN_0063b050(param_1);
  WriteFile(hFile,param_2,param_3,&uStack_110,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  if (uStack_110 != param_3) {
    DeleteFileA(aCStack_104);
    return 0;
  }
  FUN_0063f190(0x70f438);
  iVar1 = DAT_0070f490;
  uVar7 = *(uint *)(DAT_0070f490 + 0x10) + param_3;
  iVar8 = *(int *)(DAT_0070f490 + 0x14) + uStack_108 +
          (uint)CARRY4(*(uint *)(DAT_0070f490 + 0x10),param_3);
  if ((iVar8 <= iRam006e75fc) && ((iVar8 < iRam006e75fc || (uVar7 < uRam006e75f8)))) {
    *(uint *)(DAT_0070f490 + 0x10) = uVar7;
    *(int *)(iVar1 + 0x14) = iVar8;
    *(undefined1 *)(iVar4 + 0x104) = 1;
    FUN_0063f1a0(0x70f438);
    return 1;
  }
  BVar9 = DeleteFileA(aCStack_104);
  if (BVar9 == 0) {
    FUN_0063acb0();
  }
  FUN_0063f1a0(0x70f438);
  return 0;
}

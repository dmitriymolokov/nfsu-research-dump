/* spd-match: far pct=7.01 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141631Z_w0_tp1 */
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

int __cdecl FUN_005a4520(...);
int __cdecl FUN_00642e80(...);
int __cdecl FUN_00648cd0(...);
int __cdecl FUN_00649401(...);
int __cdecl FUN_00649443(...);
int __cdecl FUN_00649469(...);
int __cdecl FUN_00649628(...);
int __cdecl FUN_00649697(...);
int __cdecl FUN_00649910(...);
int __cdecl FUN_00649930(...);
int __cdecl FUN_00649d90(...);
int __cdecl FUN_0064a28a(...);
extern int DAT_006ca910;
extern int _DAT_006cc844;
extern int _DAT_006ccd08;

struct ThisCallBox {
  int FUN_00649028(undefined4 param_2);
};
int ThisCallBox::FUN_00649028(undefined4 param_2) {
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint _NewValue;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_3c;
  int local_2c;
  int local_1c;
  int local_18;
  int local_c;
  int local_8;
  
  iVar1 = FUN_00649910();
  local_2c = 0;
  local_c = 0;
  local_8 = 0;
  if (((int *)this)[6] != 0) {
    uVar2 = FUN_005a4520();
    local_2c = FUN_00649443(uVar2);
    local_c = local_2c + ((int *)this)[4] * ((int *)this)[5];
    iVar3 = ((int *)this)[4] * 5 * ((int *)this)[5];
    local_8 = local_2c + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  }
  if (((int *)this)[3] != 0) {
    iVar3 = FUN_00649401(iVar1 + 0xc,4);
    ((int *)this)[2] = iVar3;
    ((int *)this)[1] = (int)(_DAT_006cc844 / ((float)((int *)this)[2] / _DAT_006ccd08));
    iVar3 = FUN_00649401(iVar1 + 0x10,2);
    ((int *)this)[4] = iVar3;
    iVar3 = FUN_00649401(iVar1 + 0x12,2);
    ((int *)this)[5] = iVar3;
    iVar3 = FUN_00648cd0();
    iVar3 = *(int *)(iVar3 + 0xc);
    for (local_18 = 0; local_18 < iVar3 + 1; local_18 = local_18 + 1) {
      FUN_00649930(((int *)this)[4],((int *)this)[5]);
    }
    ((int *)this)[3] = 0;
  }
  _NewValue = __control87(0,0);
  __control87(0x10000,0x30000);
  iVar3 = FUN_00649469(param_2);
  if (iVar3 == 0x4d41446b) {
    if (((int *)this)[6] != 0) {
      (**(code **)(*((int *)this) + 0x14))(((int *)this)[6]);
    }
    ((int *)this)[6] = 0;
    local_1c = FUN_00649628();
    FUN_00649d90(iVar1 + 0x18,0,(int)*(char *)(iVar1 + 0x15));
  }
  else {
    iVar3 = FUN_00649469(param_2);
    if (iVar3 == 0x4d41446d) {
      local_1c = FUN_00649628();
      FUN_00649d90(iVar1 + 0x18,1,(int)*(char *)(iVar1 + 0x15));
    }
    else {
      iVar3 = FUN_00649469(param_2);
      if (iVar3 != 0x4d414465) {
                    
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/decoder/cmn/rcmp_mad_codec.cpp",0xe0,
                     &DAT_006ca910);
      }
      local_1c = FUN_00649697();
      FUN_00649d90(iVar1 + 0x18,1,(int)*(char *)(iVar1 + 0x15));
    }
  }
  uVar2 = FUN_005a4520();
  iVar4 = FUN_00649443(uVar2);
  iVar1 = ((int *)this)[4];
  iVar3 = ((int *)this)[5];
  iVar5 = ((int *)this)[4] * 5 * ((int *)this)[5];
  for (local_18 = 0; local_18 < ((int *)this)[5]; local_18 = local_18 + 0x10) {
    for (local_3c = 0; local_3c < ((int *)this)[4]; local_3c = local_3c + 0x10) {
      iVar6 = local_18 * ((int *)this)[4] + local_3c;
      iVar7 = ((int)(local_18 * ((int *)this)[4] + (local_18 * ((int *)this)[4] >> 0x1f & 3U)) >> 2) +
              local_3c / 2;
      FUN_0064a28a(local_2c + iVar6,local_c + iVar7,local_8 + iVar7,iVar4 + iVar6,
                   iVar4 + iVar1 * iVar3 + iVar7,
                   iVar4 + ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + iVar7,((int *)this)[4]);
    }
  }
  __control87(_NewValue,0xfffff);
  iVar1 = FUN_00649469(param_2);
  if (iVar1 == 0x4d41446d) {
    if (((int *)this)[6] != 0) {
      (**(code **)(*((int *)this) + 0x14))(((int *)this)[6]);
    }
    ((int *)this)[6] = local_1c;
  }
  else {
    iVar1 = FUN_00649469(param_2);
    if (iVar1 == 0x4d41446b) {
      ((int *)this)[6] = local_1c;
    }
  }
  return local_1c;
}

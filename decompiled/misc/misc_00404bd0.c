/* spd-match: far pct=11.00 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);

int __cdecl FUN_00404ab0(...);
int __cdecl FUN_00404db0(...);
int __cdecl FUN_00405350(...);
int __cdecl FUN_00671541(...);
extern int DAT_006c16ac;
extern void LAB_00685ca3(...);
void *ExceptionList;

struct ThisCallBox {
  int FUN_00404bd0(undefined4 param_2, undefined4 param_3);
};
int ThisCallBox::FUN_00404bd0(undefined4 param_2, undefined4 param_3) {
  int iVar1;
  FILE *_File;
  size_t sVar2;
  void *_DstBuf;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00685ca3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00405350(param_2);
  iVar1 = ((int)this) + 0x30;
  *(int *)iVar1 = iVar1;
  *(int *)(((int)this) + 0x34) = iVar1;
  local_4 = 1;
  _File = (FILE *)FUN_00671541(param_2,&DAT_006c16ac);
  if (_File == (FILE *)0x0) {
    FUN_00404ab0("Could not open [%s] with params [%s]",param_2,&DAT_006c16ac);
  }
  _fseek(_File,0,2);
  sVar2 = _ftell(_File);
  _fseek(_File,0,0);
  _DstBuf = _malloc(sVar2 + 4);
  sVar2 = _fread(_DstBuf,1,sVar2,_File);
  _fclose(_File);
  *(undefined1 *)((int)_DstBuf + sVar2) = 0;
  *(undefined1 *)((int)_DstBuf + sVar2 + 1) = 0;
  *(undefined1 *)((int)_DstBuf + sVar2 + 2) = 0;
  *(undefined1 *)((int)_DstBuf + sVar2 + 3) = 0;
  FUN_00404db0(((int)this),_DstBuf,param_3);
  _free(_DstBuf);
  ExceptionList = local_c;
  return ((int)this);
}

/* spd-match: far pct=8.15 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046AE60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_00467ca0();
int __cdecl FUN_0046b260();
int __cdecl FUN_00472830();
int __cdecl FUN_00472950();
extern int DAT_006cc7a4;
extern int DAT_00736200;
extern int _DAT_006cc7dc;
extern void LAB_0046b020(void);
float10 __fastcall FUN_0046ae60(int obj)

{
  char cVar1;
  int iVar2;
  float fVar3;

  float10 fVar4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [76];
  
  if (DAT_00736200 != 0) {
    return (float10)((int)DAT_006cc7a4);
  }
  *(undefined4 *)(obj + 0x20) = 0;
  *(undefined4 *)(obj + 0x24) = 0;
  *(undefined4 *)(obj + 0x28) = 0;
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x3f800000;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0x3f800000;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  fVar4 = (**(float10 (**)())(**(int **)(obj + 0xc) + 0x24))();
  fStack_c0 = (float)fVar4;
  fVar4 = (**(float10 (**)())(**(int **)(obj + 0x10) + 0x24))();
  if (fVar4 <= (float10)fStack_c0) {
    fStack_c0 = (float)fVar4;
  }
  fStack_b8 = 0.0;
  FUN_00467ca0(1);
  iStack_b4 = 0;
  do {
    fVar3 = (fStack_c0 - fStack_b8) * ((int)(_DAT_006cc7dc)) + fStack_b8;
    fStack_bc = fVar3;
    (**(code **)(**(int **)(obj + 0xc) + 0x30))(auStack_60,auStack_50,fVar3);
    (**(code **)(**(int **)(obj + 0x10) + 0x30))(&fStack_bc,&local_ac,fVar3);
    FUN_00472830(auStack_50,&local_a0,&local_b0);
    FUN_00472950();
    cVar1 = *(char *)(*(int *)(obj + 0x14) + 0x15);
    if (cVar1 == '\0') {
      if (*(char *)(*(int *)(obj + 0x14) + 0x14) != '\0') goto LAB_0046b020;
      fStack_c0 = fStack_bc;
    }
    else {
      fStack_b8 = fStack_bc;
    }
    iStack_b4 = iStack_b4 + 1;
  } while (iStack_b4 < 8);
  if (cVar1 != '\0') {
    FUN_0046b260(obj,fStack_bc);
  }
LAB_0046b020:
  iVar2 = *(int *)(*(int *)(obj + 0x14) + 600);
  if (*(char *)(iVar2 + 0x15) != '\x03') {
    iVar2 = *(int *)(*(int *)(obj + 0x14) + 0x25c);
    if (*(char *)(iVar2 + 0x15) == '\x03') {
      *(undefined1 *)(*(int *)(iVar2 + 0x10) + 0x1d0) = 0;
    }
    return (float10)fStack_bc;
  }
  *(undefined1 *)(*(int *)(iVar2 + 0x10) + 0x1d0) = 0;
  return (float10)fStack_bc;
}

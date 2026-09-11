/* spd-match: far pct=8.54 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0045D250 */
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

int __cdecl FUN_0044a000(...);
int __cdecl FUN_0045ae10(...);
int __cdecl FUN_0045b050(...);
extern int DAT_006b7514;
extern int DAT_006cc7a4;

struct ThisCallBox {
  char FUN_0045d250(int obj, int *param_2, undefined4 param_3, char param_4);
};
char ThisCallBox::FUN_0045d250(int obj, int *param_2, undefined4 param_3, char param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;

  bool bVar8;
  char local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined1 local_4;
  
  iVar1 = *(int *)(obj + 0x394);
  iVar2 = *(int *)(*(int *)(obj + 0x3a8) + 8 +
                  *(int *)((*(char *)(obj + 0x388) + 1) * 0x38 + obj) * 4);
  local_20 = 0x47c34f80;
  local_1c = 0xbf800000;
  local_2c = '\0';
  local_10 = 0;
  local_c = 0;
  local_8 = 0.0;
  local_4 = 0;
  if ((1 < *param_2) && (*param_2 < 4)) {
    *param_2 = 1;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    param_2[2] = 0;
  }
  cVar7 = FUN_0045b050(param_2,0,&local_1c,&local_18,&local_20,0,param_3);
  if (cVar7 != '\0') {
    return '\x01';
  }
  local_10 = 1;
  local_c = 0;
  local_4 = 0;
  local_8 = 0.0;
  cVar7 = FUN_0045b050(&local_10,0,&local_1c,&local_18,&local_20,0,param_3);
  if (cVar7 != '\0') {
    FUN_0044a000();
    return '\x01';
  }
  local_28 = (unsigned int)(DAT_006b7514);
  bVar3 = true;
  bVar8 = true;
  do {
    if ((!bVar3) && (!bVar8)) {
      if (local_2c != '\0') {
        FUN_0044a000();
        return local_2c;
      }
      FUN_0045ae10(param_2,((undefined4)this),obj,0,0);
      return '\0';
    }
    local_18 = -local_28;
    if ((iVar1 < 0) || (4 < iVar1)) {
      fVar4 = (unsigned int)(DAT_006cc7a4);
      if ((10 < iVar1) && (iVar1 < 0x11)) {
        fVar4 = *(float *)(unsigned int)(iVar2 + -8 + iVar1 * 4);
      }
    }
    else {
      fVar4 = *(float *)(unsigned int)(iVar2 + 0x20);
    }
    bVar8 = fVar4 < local_18;
    if ((iVar1 < 0) || (4 < iVar1)) {
      fVar4 = (unsigned int)(DAT_006cc7a4);
      if ((10 < iVar1) && (iVar1 < 0x11)) {
        fVar4 = *(float *)(unsigned int)(iVar2 + 0x14 + iVar1 * 4);
      }
    }
    else {
      fVar4 = *(float *)(unsigned int)(iVar2 + 0x3c);
    }
    bVar3 = local_28 < fVar4;
    local_14 = local_28;
    fVar4 = local_18;
    bVar5 = bVar8;
    bVar6 = bVar3;
    if (param_4 == '\0') {
      local_14 = local_18;
      fVar4 = local_28;
      bVar5 = bVar3;
      bVar6 = bVar8;
    }
    if (bVar5) {
      local_10 = 1;
      local_c = 0;
      local_4 = 0;
      local_8 = fVar4;
      local_2c = FUN_0045b050(&local_10,0,&local_1c,&local_18,&local_20,0,param_3);
    }
    if ((local_2c == '\0') && (bVar6)) {
      local_8 = local_14;
      local_10 = 1;
      local_c = 0;
      local_4 = 0;
      local_2c = FUN_0045b050(&local_10,0,&local_1c,&local_18,&local_20,0,param_3);
    }
    local_28 = ((int)(DAT_006b7514)) + local_28;
  } while (local_2c == '\0');
  FUN_0044a000();
  return local_2c;
}

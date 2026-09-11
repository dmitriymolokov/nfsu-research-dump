/* spd-match: far pct=5.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045FB30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00456a80();
int __cdecl FUN_00456b20();
int __cdecl FUN_004590a0();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00583ea0();
extern unsigned char *DAT_006b7418;
extern unsigned char *DAT_006b7434;
extern int _DAT_006cc954;
extern void LAB_0045fb9f(void);
extern void LAB_0045fbf8(void);
void __fastcall FUN_0045fb30(int obj)

{
  int iVar1;
  int iVar2;

  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = *(int *)(obj + 0x1f0);
  iVar2 = *(int *)(iVar1 + 0x28);
  if (iVar2 == 1) {
LAB_0045fb9f:
    fVar6 = (float10)FUN_00583ea0(*(undefined4 *)(iVar1 + 0x3d0));
    iVar1 = *(int *)(*(int *)(obj + 0x1f0) + 0x10);
    if (*(char *)(iVar1 + 0x424) == -1) {
      FUN_0057f2b0(1);
    }
    fVar5 = (float10)FUN_00583ea0((float)(int)*(char *)(iVar1 + 0x424));
    fVar5 = fVar5 * (float10)(float)fVar6;
  }
  else {
    if (iVar2 == 3) {
      uVar3 = (*(int *)(iVar1 + 0x24) != 4) - 1 & 4;
      if ((uVar3 != 3) && (uVar3 != 4)) goto LAB_0045fb9f;
    }
    else {
      if (iVar2 == 4) goto LAB_0045fb9f;
      uVar3 = 3;
    }
    fVar5 = (float10)*(float *)(iVar1 + 0x3d0) * (float10)*(float *)(&DAT_006b7418 + uVar3 * 4);
    local_38 = *(float *)(&DAT_006b7434 + uVar3 * 4);
    if (fVar5 < (float10)local_38) goto LAB_0045fbf8;
  }
  local_38 = (float)fVar5;
LAB_0045fbf8:
  if (*(char *)(obj + 0x10) < '\x02') {
    if (_DAT_006cc954 <= *(float *)(*(int *)(obj + 0x1f0) + 0x3d0)) {
      puVar4 = (undefined4 *)FUN_00456b20(local_38);
      local_2c = puVar4[1];
      local_30 = *puVar4;
    }
    else {
      puVar4 = (undefined4 *)FUN_00456a80();
      local_2c = puVar4[1];
      local_30 = *puVar4;
    }
  }
  else {
    FUN_004590a0(local_38,&local_30);
  }
  *(undefined4 *)(obj + 0x1f8) = local_2c;
  *(undefined4 *)(obj + 500) = local_30;
  *(undefined4 *)(*(int *)(obj + 0x244) + 0x10) = 0;
  return;
}

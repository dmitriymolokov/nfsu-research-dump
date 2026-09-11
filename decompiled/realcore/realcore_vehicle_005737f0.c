/* spd-match: far pct=14.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005737F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00572b50();
int __cdecl FUN_00573170();
int __cdecl FUN_00573620();
int __cdecl FUN_00594ea0();
int __cdecl FUN_00594ef0();
extern unsigned char *DAT_007345d0;
extern int DAT_0078a2f0;
void __fastcall FUN_005737f0(int obj)

{
  int iVar1;

  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_50 [4];
  undefined1 local_40;
  
  iVar2 = FUN_00572b50("DEMO_MODE_SNAPSHOT",0);
  if (iVar2 != 0) {
    iVar2 = FUN_00572b50("REPLAY_MANAGER_STATE",0);
    if (iVar2 != 0) {
      if (*(int *)(obj + 0x18) < 0) {
        *(undefined4 *)(obj + 0x18) = 0;
      }
      FUN_00573170(obj);
      local_a0 = 0;
      local_9c = 0;
      FUN_00594ea0(&local_a0);
      puVar3 = local_50;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_50[0] = 8;
      local_50[1] = DAT_0078a2f0;
      local_50[2] = 1;
      local_50[3] = 0;
      local_40 = 0;
      local_98 = 0x39100;
      local_94 = 0x50;
      FUN_00594ef0(&local_98);
      FUN_00594ef0(local_50);
      FUN_00573620(obj,"DEMO_MODE_SNAPSHOT");
      FUN_00573620(obj,"REPLAY_MANAGER_STATE");
      FUN_00573620(obj,"CHECKSUM0");
      FUN_00573620(obj,"CHECKSUM1");
      FUN_00573620(obj,"CHECKSUM2");
      FUN_00573620(obj,"CHECKSUM3");
      iVar2 = *(int *)(DAT_007345d0 + 100);
      iVar1 = *(int *)(iVar2 + 8);
      local_a4 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4U & 0xfffffffc;
      local_a8 = 0x39102;
      FUN_00594ef0(&local_a8);
      FUN_00594ef0(iVar2);
    }
  }
  return;
}

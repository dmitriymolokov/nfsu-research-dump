/* spd-match: far pct=9.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00419EA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00419220();
int __cdecl FUN_00419c20();
extern int DAT_0071d89c;
extern int DAT_0071d8a8;
extern unsigned char *DAT_00736338;
extern int DAT_00736340;
extern int DAT_0078eb78;
extern void LAB_00418e70(void);
void __fastcall FUN_00419ea0(undefined4 * obj)

{
  uint uVar1;

  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((DAT_00736340 != 0) &&
     (uVar1 = ((int)DAT_0078eb78) & 0x1f, DAT_0078eb78 = ((int)DAT_0078eb78) + 1, uVar1 == 0)) {
    iVar2 = (**(code **)(*DAT_00736338 + 0x10))(DAT_00736338,4,&LAB_00418e70,obj + 0x889,1);
    if (iVar2 < 0) {
      FUN_00419c20("ERROR: could not enumerate devices\n");
    }
  }
  iVar5 = 0;
  iVar2 = 0;
  do {
    if ((&DAT_0071d89c)[iVar5] != 0) {
      iVar3 = FUN_00419220(obj + 0x889,iVar5);
      if (iVar3 == -0x7ff8ffe2) {
        iVar3 = 0;
        puVar4 = (undefined4 *)(iVar2 + 0x24a8 + (int)obj);
        do {
          *(undefined1 *)((int)obj + iVar3 + iVar5 * 8 + 0x2498) = 0;
          *puVar4 = 0;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < 8);
      }
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 0x20;
  } while (iVar5 < 2);
  puVar4 = &DAT_0071d8a8;
  for (iVar2 = 0x88; iVar2 != 0; iVar2 = iVar2 + -1) {
    *obj = *puVar4;
    puVar4 = puVar4 + 1;
    obj = obj + 1;
  }
  return;
}

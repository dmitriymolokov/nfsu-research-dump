/* spd-match: far pct=6.94 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00407DB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00408010();
extern unsigned char *DAT_0073636c;
extern int DAT_007364f4;
extern int DAT_0078daa0;
extern unsigned char *DAT_0078daa4;
extern char stack0xffffffd4;
int unaff_ESI;
void __fastcall FUN_00407db0(undefined4 * obj)

{
  int *piVar1;

  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  int unaff_ESI;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *_Memory;
  int local_20;
  
  piVar6 = (int *)*obj;
  piVar1 = piVar6 + 6;
  if (piVar6[6] != 0) {
    FUN_00408010();
  }
  pbVar7 = (byte *)obj[0x1c];
  if (((pbVar7 != (byte *)0x0) &&
      (iVar5 = piVar6[5],
      ((int)*(short *)(obj + 0x11) & (int)*(short *)(obj + 0x11) - 1U) == 0)) &&
     (((int)*(short *)((int)obj + 0x46) & (int)*(short *)((int)obj + 0x46) - 1U) == 0)) {
    if (iVar5 == 0x29) {
      iVar5 = obj[0x1d];
      puVar2 = _malloc(obj[0xe] << 2);
      local_20 = 0;
      if ('\0' < *(char *)((int)obj + 0x4e)) {
        do {
          iVar3 = ((int)*(short *)((int)obj + 0x46) >> ((byte)local_20 & 0x1f)) *
                  ((int)*(short *)(obj + 0x11) >> ((byte)local_20 & 0x1f));
          if (0 < iVar3) {
            do {
              *puVar2 = *(undefined4 *)(iVar5 + (uint)*pbVar7 * 4);
              puVar2 = puVar2 + 1;
              pbVar7 = pbVar7 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_20 = local_20 + 1;
        } while (local_20 < *(char *)((int)obj + 0x4e));
      }
      iVar5 = 0x15;
      *(undefined1 *)((int)obj + 0x4a) = 0x20;
    }
    if ((DAT_007364f4 == 0) || (*(char *)((int)obj + 0x4e) <= DAT_007364f4)) {
      _Memory = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x1;
      iVar13 = 0;
      iVar3 = (int)*(short *)((int)obj + 0x46);
      puVar2 = (undefined4 *)(int)*(short *)(obj + 0x11);
      (**(code **)(*DAT_0073636c + 0x5c))
                (DAT_0073636c,puVar2,iVar3,(int)*(char *)((int)obj + 0x4e),0,iVar5,1,piVar1);
    }
    else {
      _Memory = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x1;
      iVar13 = 0;
      iVar3 = (int)*(short *)((int)obj + 0x46) / (DAT_007364f4 * 2);
      puVar2 = (undefined4 *)((int)*(short *)(obj + 0x11) / (DAT_007364f4 * 2));
      piVar6 = piVar1;
      (**(code **)(*DAT_0073636c + 0x5c))
                (DAT_0073636c,puVar2,iVar3,*(char *)((int)obj + 0x4e) - DAT_007364f4,0,iVar5);
    }
    if (*piVar1 != 0) {
      *DAT_0078daa4 = (int)piVar6;
      piVar1 = piVar6;
      piVar6[1] = (int)DAT_0078daa4;
      DAT_0078daa4 = piVar1;
      iVar5 = DAT_007364f4;
      bVar12 = DAT_007364f4 != 0;
      *piVar6 = (int)&DAT_0078daa0;
      iVar9 = (int)*(char *)((int)obj + 0x4e);
      puVar10 = _Memory;
      if (((bVar12) && (iVar5 < iVar9)) && (0 < iVar5)) {
        iVar9 = iVar9 - iVar5;
        do {
          puVar10 = (undefined4 *)((int)puVar10 + iVar13);
          iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = 0;
      if (0 < iVar9) {
        puVar16 = (undefined4 *)0x0;
        do {
          iVar13 = 0;
          puVar14 = puVar10;
          (**(code **)(*(int *)*puVar15 + 0x4c))((int *)*puVar15,iVar5,&stack0xffffffd4,0);
          uVar8 = iVar13 >> ((byte)iVar3 & 0x1f);
          puVar11 = puVar16;
          for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar4 = uVar8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          (**(code **)(*(int *)*puVar2 + 0x50))((int *)*puVar2,iVar5);
          puVar10 = (undefined4 *)((int)puVar14 + uVar8);
          iVar5 = iVar5 + 1;
          puVar16 = (undefined4 *)((int)puVar16 + 2);
        } while (iVar5 < iVar9);
      }
      if (unaff_ESI != 0) {
        _free(_Memory);
      }
    }
  }
  return;
}

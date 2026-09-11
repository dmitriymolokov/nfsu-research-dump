/* spd-match: far pct=7.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern unsigned char *DAT_00793224;
extern unsigned char *DAT_00793240;
extern int DAT_00793244;

undefined4 FUN_00675614(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int iVar7;
  HANDLE hFile;
  int iVar8;
  uint uVar9;
  UINT *pUVar10;
  UINT UVar11;
  UINT UVar12;
  byte *local_48;
  _STARTUPINFOA local_44;
  
  puVar3 = _malloc(0x480);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    DAT_00793224 = 0x20;
    DAT_00793240 = puVar3;
    for (; puVar3 < DAT_00793240 + 0x120; puVar3 = puVar3 + 9) {
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar3 = 0xffffffff;
      puVar3[2] = 0;
      *(undefined1 *)((int)puVar3 + 5) = 10;
    }
    GetStartupInfoA(&local_44);
    if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
      UVar11 = *(UINT *)local_44.lpReserved2;
      pUVar10 = (UINT *)((int)local_44.lpReserved2 + 4);
      local_48 = (byte *)(UVar11 + (int)pUVar10);
      if (0x7ff < (int)UVar11) {
        UVar11 = 0x800;
      }
      UVar12 = UVar11;
      if ((int)DAT_00793224 < (int)UVar11) {
        puVar3 = &DAT_00793244;
        do {
          puVar5 = _malloc(0x480);
          UVar12 = DAT_00793224;
          if (puVar5 == (undefined4 *)0x0) break;
          DAT_00793224 = DAT_00793224 + 0x20;
          *puVar3 = puVar5;
          puVar2 = puVar5;
          for (; puVar5 < puVar2 + 0x120; puVar5 = puVar5 + 9) {
            *(undefined1 *)(puVar5 + 1) = 0;
            *puVar5 = 0xffffffff;
            puVar5[2] = 0;
            *(undefined1 *)((int)puVar5 + 5) = 10;
            puVar2 = (undefined4 *)*puVar3;
          }
          puVar3 = puVar3 + 1;
          UVar12 = UVar11;
        } while ((int)DAT_00793224 < (int)UVar11);
      }
      uVar9 = 0;
      if (0 < (int)UVar12) {
        do {
          if (((*(HANDLE *)local_48 != (HANDLE)0xffffffff) && ((*pUVar10 & 1) != 0)) &&
             (((*pUVar10 & 8) != 0 || (DVar6 = GetFileType(*(HANDLE *)local_48), DVar6 != 0)))) {
            puVar3 = (undefined4 *)((int)(&DAT_00793240)[(int)uVar9 >> 5] + (uVar9 & 0x1f) * 0x24);
            *puVar3 = *(undefined4 *)local_48;
            *(byte *)(puVar3 + 1) = (byte)*pUVar10;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
            if (iVar7 == 0) {
              return 0xffffffff;
            }
            puVar3[2] = puVar3[2] + 1;
          }
          local_48 = local_48 + 4;
          uVar9 = uVar9 + 1;
          pUVar10 = (UINT *)((int)pUVar10 + 1);
        } while ((int)uVar9 < (int)UVar12);
      }
    }
    iVar7 = 0;
    do {
      piVar1 = DAT_00793240 + iVar7 * 9;
      if (*piVar1 == -1) {
        *(undefined1 *)(piVar1 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar6 = 0xfffffff6;
        }
        else {
          DVar6 = 0xfffffff5 - (iVar7 != 1);
        }
        hFile = GetStdHandle(DVar6);
        if ((hFile == (HANDLE)0xffffffff) || (DVar6 = GetFileType(hFile), DVar6 == 0)) {
          *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
        }
        else {
          *piVar1 = (int)hFile;
          if ((DVar6 & 0xff) == 2) {
            *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
          }
          else if ((DVar6 & 0xff) == 3) {
            *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 8;
          }
          iVar8 = ___crtInitCritSecAndSpinCount(piVar1 + 3,4000);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          piVar1[2] = piVar1[2] + 1;
        }
      }
      else {
        *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_00793224);
    uVar4 = 0;
  }
  return uVar4;
}

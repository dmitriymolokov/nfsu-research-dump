/* spd-match: far pct=10.50 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004389b0();
int __cdecl FUN_00438b30();
int __cdecl FUN_004392a0();
int __cdecl FUN_0043ada0();
int __cdecl FUN_0043af50();
int __cdecl FUN_0043ba60();
int __cdecl FUN_005473e0();
int __cdecl FUN_00547910();
int __cdecl FUN_00548840();
int __cdecl FUN_005490a0();
int __cdecl FUN_0054e440();
int __cdecl FUN_0054e530();
extern int DAT_006cc7a4;
extern int DAT_006f1e08;
extern int DAT_007354d0;
extern int DAT_00735500;
extern int DAT_0073ad34;
extern int DAT_0073ad3c;
extern int DAT_0073ddc0;
extern int DAT_0077b25c;
extern int _DAT_006b632c;
extern int _DAT_006cc90c;
extern int _DAT_006cca38;
extern int _DAT_006ccc00;
extern int _DAT_006cce00;
extern int _DAT_007402a4;
extern void LAB_00546b8f(void);

void FUN_00546980(void)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_40c [1036];
  
  if (DAT_00735500 == 1) {
    iVar6 = 0;
    puVar5 = &DAT_0073ddc0;
    do {
      if (((puVar5[1] != -1) && (puVar5 != (undefined4 *)0x0)) && (2 < (int)puVar5[4])) {
        iVar6 = iVar6 + 1;
      }
      puVar5 = puVar5 + 8;
    } while ((int)puVar5 < 0x73de20);
    if ((iVar6 == DAT_006f1e08) && (0 < DAT_006f1e08)) {
      FUN_0043ada0();
      DAT_00735500 = 2;
      FUN_004392a0();
      FUN_004389b0(0xd);
      FUN_00548840(DAT_00735500);
      FUN_00547910(0xd,local_40c,1);
      FUN_0054e440();
    }
  }
  else {
    if (DAT_00735500 == 4) {
      iVar6 = 0;
      puVar5 = &DAT_0073ddc0;
      do {
        if (((puVar5[1] != -1) && (puVar5 != (undefined4 *)0x0)) && (5 < (int)puVar5[4])) {
          iVar6 = iVar6 + 1;
        }
        puVar5 = puVar5 + 8;
      } while ((int)puVar5 < 0x73de20);
      if (iVar6 != DAT_007354d0) goto LAB_00546b8f;
      _DAT_007402a4 = DAT_0073ad3c;
      DAT_00735500 = 5;
      FUN_004392a0();
      FUN_004389b0(0xd);
      iVar6 = DAT_00735500;
    }
    else {
      if ((DAT_00735500 != 5) ||
         ((float)(((int)DAT_0073ad3c) - _DAT_007402a4) * ((int)_DAT_006cca38) < _DAT_006ccc00)) goto LAB_00546b8f;
      puVar5 = &DAT_0073ddc0;
      fVar2 = DAT_006cc7a4;
      do {
        if (((puVar5[1] != -1) && (puVar5 != (undefined4 *)0x0)) &&
           (fVar2 < (float)*(ushort *)((int)puVar5 + 0xe))) {
          fVar2 = (float)*(ushort *)((int)puVar5 + 0xe);
        }
        puVar5 = puVar5 + 8;
      } while ((int)puVar5 < 0x73de20);
      FUN_0043af50(fVar2 * ((int)_DAT_006cce00) + (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38) + _DAT_006cc90c);
      DAT_00735500 = 6;
      FUN_004392a0();
      FUN_004389b0(0xd);
      FUN_00548840(DAT_00735500);
      iVar6 = DAT_0077b25c;
    }
    FUN_00548840(iVar6);
    FUN_00547910(0xd,local_40c,1);
  }
LAB_00546b8f:
  cVar3 = FUN_00438b30();
  if (cVar3 != '\0') {
    puVar5 = &DAT_0073ddc0;
    do {
      if (((puVar5[1] != -1) && (puVar5 != (undefined4 *)0x0)) &&
         (_DAT_006b632c <= (float)(((int)DAT_0073ad3c) - puVar5[7]) * ((int)_DAT_006cca38))) {
        iVar6 = puVar5[1];
        DAT_006f1e08 = ((int)DAT_006f1e08) + -1;
        puVar4 = &DAT_0073ddc0;
        do {
          puVar7 = puVar4;
          if (puVar4[1] == iVar6) break;
          puVar4 = puVar4 + 8;
          puVar7 = (undefined4 *)0x0;
        } while ((int)puVar4 < 0x73de20);
        uVar1 = *puVar7;
        FUN_005490a0();
        FUN_0054e530();
        FUN_0043ba60(uVar1,1);
        FUN_005473e0(iVar6,uVar1,1);
      }
      puVar5 = puVar5 + 8;
    } while ((int)puVar5 < 0x73de20);
  }
  return;
}

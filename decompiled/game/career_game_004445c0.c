/* spd-match: far pct=9.09 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004445C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004443e0();
extern int DAT_006f227c;
extern unsigned char *DAT_00736174;
extern int DAT_0077a950;
void __fastcall FUN_004445c0(int obj, char *param_1, char *param_2)

{
  char *pcVar1;
  char cVar2;

  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  cVar2 = *param_2;
  pcVar1 = (char *)(obj + 0x54);
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar4 = pcVar1;
    do {
      cVar2 = pcVar4[(int)(param_2 + (1 - (int)pcVar1))];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar2;
    } while (cVar2 != '\0');
  }
  cVar2 = *param_1;
  pcVar1 = (char *)(obj + 0x94);
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar4 = pcVar1;
    do {
      cVar2 = pcVar4[(int)(param_1 + (1 - (int)pcVar1))];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar2;
    } while (cVar2 != '\0');
  }
  iVar9 = DAT_00736174;
  if (((DAT_00736174 != 0) && (0x44e < *(short *)(DAT_00736174 + 0x6c))) &&
     (*(short *)(DAT_00736174 + 0x6c) < 0x456)) {
    uVar5 = DAT_006f227c ^ 0x1d872b41;
    uVar7 = uVar5 >> 5 ^ uVar5;
    DAT_006f227c = uVar7 << 0x1b ^ uVar7 ^ uVar5;
  }
  *(undefined1 *)(obj + 0x178) = 0;
  iVar3 = FUN_004443e0();
  puVar6 = (undefined4 *)(iVar3 + 0xd8);
  iVar8 = 2;
  do {
    puVar6[-1] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    puVar6 = puVar6 + 0x11;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar6 = (undefined4 *)(iVar3 + 0xec);
  iVar8 = 2;
  do {
    *(undefined2 *)(puVar6 + -1) = 0;
    *puVar6 = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6 = puVar6 + 0x11;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar6 = DAT_0077a950;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)*(short *)(iVar9 + 0x6c);
  }
  while( true ) {
    if ((undefined4 **)puVar6 == &DAT_0077a950) {
      *(undefined4 *)(iVar3 + 0x598) = 0;
      return;
    }
    if (puVar6[2] == iVar9) break;
    puVar6 = (undefined4 *)*puVar6;
  }
  *(undefined4 **)(iVar3 + 0x598) = puVar6;
  return;
}

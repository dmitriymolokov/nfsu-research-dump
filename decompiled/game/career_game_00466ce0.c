/* spd-match: far pct=23.46 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00466CE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004727c0();
extern int DAT_0072cbfc;
extern unsigned char *DAT_00736000;
extern int DAT_00736028;
extern int DAT_00779be0;
extern unsigned char *DAT_00779be4;
extern unsigned char *PTR_FUN_006c8810;
int unaff_ESI;
void __fastcall FUN_00466ce0(int obj, int param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;

  int iVar5;
  int iVar6;
  undefined4 *unaff_ESI;
  
  unaff_ESI[0x4e] = 0;
  *unaff_ESI = &PTR_FUN_006c8810;
  if ((*(int *)(obj + 0x10) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_004727c0();
  }
  unaff_ESI[0x9a] = 0xbf800000;
  unaff_ESI[0x9b] = 0xbf800000;
  unaff_ESI[0x9c] = 0;
  DAT_00736000 = DAT_00736000 + 1;
  if (DAT_00736028 < DAT_00736000) {
    DAT_00736028 = DAT_00736000;
  }
  puVar1 = unaff_ESI + 0x94;
  *DAT_00779be4 = puVar1;
  puVar4 = puVar1;
  unaff_ESI[0x95] = DAT_00779be4;
  DAT_00779be4 = puVar4;
  *puVar1 = &DAT_00779be0;
  unaff_ESI[0x96] = obj;
  unaff_ESI[0x97] = param_1;
  unaff_ESI[0x99] = 0;
  unaff_ESI[0x9d] = 0;
  iVar3 = DAT_0072cbfc;
  iVar5 = *(short *)(obj + 0x18) * 0xde + (int)*(short *)(param_1 + 0x18);
  pbVar2 = (byte *)((iVar5 >> 3) + DAT_0072cbfc);
  *pbVar2 = *pbVar2 | '\x01' << ((byte)iVar5 & 7);
  iVar5 = *(short *)(unaff_ESI[0x97] + 0x18) * 0xde + (int)*(short *)(unaff_ESI[0x96] + 0x18);
  iVar6 = iVar5 >> 3;
  *(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | '\x01' << ((byte)iVar5 & 7);
  *(char *)(unaff_ESI[0x96] + 0x1a) = *(char *)(unaff_ESI[0x96] + 0x1a) + '\x01';
  *(char *)(unaff_ESI[0x97] + 0x1a) = *(char *)(unaff_ESI[0x97] + 0x1a) + '\x01';
  return;
}

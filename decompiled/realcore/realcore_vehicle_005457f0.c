/* spd-match: far pct=5.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005457F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565da0();
extern int DAT_00740418;
extern unsigned char *DAT_0074041c;
int unaff_EDI;
void __fastcall FUN_005457f0(char * obj, undefined4 param_1, char *param_2, int param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  undefined4 *puVar6;

  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *unaff_EDI;
  
  if (((byte *)obj == (byte *)0x0) && (param_3 != 0)) {
    obj = (char *)(param_3 + 4);
  }
  if ((param_2 == (char *)0x0) && (param_3 != 0)) {
    param_2 = (char *)(param_3 + 0x20);
  }
  if ((byte *)obj == (byte *)0x0) {
    obj = "<null>";
  }
  if (param_2 == (char *)0x0) {
    param_2 = "<null>";
  }
  bVar4 = *obj;
  pbVar1 = (byte *)(unaff_EDI + 2);
  *pbVar1 = bVar4;
  if (bVar4 != 0) {
    pbVar7 = pbVar1;
    do {
      bVar4 = pbVar7[(int)(obj + (1 - (int)pbVar1))];
      pbVar7 = pbVar7 + 1;
      *pbVar7 = bVar4;
    } while (bVar4 != 0);
  }
  pcVar2 = (char *)(unaff_EDI + 10);
  *pcVar2 = '\0';
  if ((param_2 != (char *)0x0) && (cVar5 = *param_2, *pcVar2 = cVar5, cVar5 != '\0')) {
    pcVar8 = pcVar2;
    do {
      cVar5 = pcVar8[(int)(param_2 + (1 - (int)pcVar2))];
      pcVar8 = pcVar8 + 1;
      *pcVar8 = cVar5;
    } while (cVar5 != '\0');
  }
  unaff_EDI[0x1c] = param_3;
  iVar9 = -1;
  bVar4 = *pbVar1;
  pbVar7 = pbVar1;
  while (bVar4 != 0) {
    iVar9 = iVar9 * 0x21 + (uint)bVar4;
    pbVar3 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    bVar4 = *pbVar3;
  }
  unaff_EDI[0x1a] = iVar9;
  unaff_EDI[0x1d] = 0;
  unaff_EDI[0x1e] = 0;
  unaff_EDI[0x1f] = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x6c) = 0;
  }
  *DAT_0074041c = unaff_EDI;
  puVar6 = unaff_EDI;
  unaff_EDI[1] = DAT_0074041c;
  DAT_0074041c = puVar6;
  *unaff_EDI = &DAT_00740418;
  FUN_00565da0("TexturePack,%s",pbVar1);
  unaff_EDI[0x1b] = 0;
  return;
}

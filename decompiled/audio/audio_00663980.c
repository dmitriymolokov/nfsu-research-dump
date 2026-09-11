/* spd-match: far pct=4.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00663980 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_006625d0();
int __cdecl FUN_006625f0();
int __fastcall FUN_00663980(int obj)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined2 uVar3;

  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_ESI;
  undefined4 uStack_4;
  
  bVar2 = false;
  iVar4 = (**(code **)(*unaff_ESI + 0x28))(*unaff_ESI);
  if (unaff_ESI[0x72] == 0) {
    return 1;
  }
  if (0x200 < *(ushort *)(obj + 4)) {
    return -1;
  }
  if (((*(byte *)(obj + 6) & 0x40) != 0) || (0xfa < (uint)(iVar4 - unaff_ESI[5]))) {
    uVar5 = FUN_006625f0(iVar4);
    uVar6 = FUN_006625f0((unaff_ESI[4] - unaff_ESI[3]) + iVar4);
    uVar3 = FUN_006625d0((unaff_ESI[8] + 1 + unaff_ESI[7]) / 2);
    uStack_4 = CONCAT22((*(unsigned short *)((unsigned char *)&(uStack_4) + 2)),uVar3);
    puVar1 = (undefined4 *)(*(ushort *)(obj + 4) + 8 + obj);
    *puVar1 = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uStack_4;
    *(short *)(obj + 4) = *(short *)(obj + 4) + 0xc;
    *(byte *)(obj + 6) = *(byte *)(obj + 6) | 0x40;
    bVar2 = true;
  }
  *(undefined1 *)(*(ushort *)(obj + 4) + 8 + obj) = *(undefined1 *)(obj + 6);
  iVar7 = (**(code **)(*unaff_ESI + 0x2c))
                    (*unaff_ESI,obj + 8,*(ushort *)(obj + 4) + 1,
                     (*(byte *)(obj + 6) & 0xbf) == 6);
  if (bVar2) {
    *(short *)(obj + 4) = *(short *)(obj + 4) + -0xc;
    *(byte *)(obj + 6) = *(byte *)(obj + 6) ^ 0x40;
  }
  if (0 < iVar7) {
    unaff_ESI[2] = iVar4;
    if (bVar2) {
      unaff_ESI[5] = iVar4;
    }
    unaff_ESI[0x5d] = unaff_ESI[0x5d] + *(ushort *)(obj + 4) + 1;
    unaff_ESI[0x5e] = unaff_ESI[0x5e] + 1;
    unaff_ESI[0xe] = unaff_ESI[0xe] + *(ushort *)(obj + 4) + 1;
    unaff_ESI[0x10] = iVar4;
    if ((unaff_ESI[0x12] != 0) && (100 < (uint)(iVar4 - unaff_ESI[0x12]))) {
      unaff_ESI[0x12] = 0;
      unaff_ESI[0x14] = iVar4;
    }
    if ((unaff_ESI[0x14] != 0) && (100 < (uint)(iVar4 - unaff_ESI[0x14]))) {
      unaff_ESI[0x14] = 0;
      unaff_ESI[0x12] = iVar4;
    }
  }
  return iVar7;
}

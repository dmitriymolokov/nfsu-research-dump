/* spd-match: far pct=7.22 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/batches/p0_11/h3_audio_recipe */
#include "ghidra_compat.h"

int __cdecl FUN_00654050();
int __cdecl FUN_00674898();
extern int DAT_006e9ff4;
extern unsigned char *DAT_006e9ff8;
extern int DAT_006e9ffc;
extern int DAT_006ea008;
extern int DAT_00713db7;
extern int DAT_00713db8;
extern int DAT_00714050;
extern int DAT_00714054;
extern int DAT_00714060;
extern int DAT_00714068;
extern int DAT_00714070;
extern int DAT_0071407c;
extern int DAT_007160d0;
extern int _DAT_006cc858;
extern int _DAT_006cca94;
extern int _DAT_006ea000;
extern int _DAT_00714058;
extern char stack0xffffffe0;

void FUN_006545d0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_2c;
  int iStack_1c;
  uint uStack_18;
  undefined1 local_10 [16];
  
  piVar2 = ((int *)DAT_00714070);
  if (DAT_00714068 != 0) {
    puStack_2c = local_10;
    (**(code **)(*((int *)DAT_00714070) + 0x24))();
    if ((((byte)uStack_18 & 2) == 0) && (DAT_007160d0 < 0x65)) {
      if (((byte)uStack_18 & 1) == 0) {
        uStack_44 = 0x654849;
        (**(code **)(*((int *)DAT_00714070) + 0x30))();
        DAT_007160d0 = 0;
        return;
      }
      iVar3 = (**(code **)(*((int *)DAT_00714070) + 0x10))();
      if (iVar3 == 0) {
        uVar7 = (uint)DAT_00714054;
        iVar3 = FUN_00674898();
        uVar7 = iVar3 + (uint)piVar2 / uVar7 & 0xffffff0;
        if (DAT_0071407c <= (int)uVar7) {
          uVar7 = uVar7 - DAT_0071407c;
        }
        iStack_1c = uVar7 - DAT_00714060;
        if (((-1 < iStack_1c) || (iStack_1c <= -DAT_00714050)) && (iStack_1c <= DAT_00714050)) {
          if (iStack_1c < 0) {
            iStack_1c = DAT_0071407c - DAT_00714060;
            uStack_18 = uVar7;
          }
          else {
            uStack_18 = 0;
          }
          iVar8 = 0;
          iVar3 = DAT_00714060;
          do {
            iVar1 = (&iStack_1c)[iVar8];
            if (iVar1 != 0) {
              uStack_44 = 0;
              uStack_48 = 0;
              uStack_4c = 0;
              (**(code **)(*((int *)DAT_00714070) + 0x2c))
                        (((int *)DAT_00714070),((uint)(*(unsigned char *)&DAT_00713db8) + (uint)(*(unsigned char *)&DAT_00713db7)) * iVar3 * 2,
                         ((uint)(*(unsigned char *)&DAT_00713db8) + (uint)(*(unsigned char *)&DAT_00713db7)) * iVar1 * 2,&puStack_2c,
                         &stack0xffffffe0);
              FUN_00654050(&uStack_4c,iVar1);
              (**(code **)(*((int *)DAT_00714070) + 0x4c))
                        (((int *)DAT_00714070),uStack_4c,
                         ((uint)(*(unsigned char *)&DAT_00713db8) + (uint)(*(unsigned char *)&DAT_00713db7)) * iVar1 * 2,0,0);
              iVar3 = 0;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
          uStack_44 = 0x654760;
          DVar4 = timeGetTime();
          uVar5 = DVar4 - _DAT_00714058;
          uVar6 = (*(unsigned short *)&DAT_006ea008);
          if ((uVar5 < 0x12d) && (uVar6 = uVar5, (*(unsigned short *)&DAT_006ea008) < uVar5)) {
            (*(unsigned short *)&DAT_006ea008) = uVar5;
          }
          if ((*(unsigned short *)&DAT_006e9ff4) < uVar6) {
            (*(unsigned short *)&DAT_006e9ff4) = (ushort)uVar6;
            (*(float *)&_DAT_006ea000) = (float)(int)uVar6;
            if ((int)uVar6 < 0) {
              (*(float *)&_DAT_006ea000) = (*(float *)&_DAT_006ea000) + (*(float *)&_DAT_006cc858);
            }
          }
          DAT_006e9ff8 = DAT_006e9ff8 + -1;
          if (DAT_006e9ff8 < 1) {
            if ((*(unsigned short *)&DAT_006ea008) < (*(unsigned short *)&DAT_006e9ff4)) {
              (*(unsigned short *)&DAT_006e9ff4) = (ushort)(*(unsigned short *)&DAT_006ea008);
            }
            DAT_006e9ff8 = 3000;
            (*(unsigned short *)&DAT_006ea008) = 10;
            (*(float *)&_DAT_006ea000) = (float)(*(unsigned short *)&DAT_006e9ff4);
            if ((float)(*(unsigned short *)&DAT_006e9ff4) < (*(float *)&_DAT_006cca94)) {
              (*(float *)&_DAT_006ea000) = 10.0;
            }
          }
          if ((*(float *)&DAT_006e9ffc) < (*(float *)&_DAT_006ea000)) {
            (*(float *)&_DAT_006ea000) = (*(float *)&DAT_006e9ffc);
          }
          DAT_00714060 = uVar7;
          return;
        }
      }
    }
    else {
      (**(code **)(*((int *)DAT_00714070) + 0x50))();
      DAT_007160d0 = 0;
    }
  }
  return;
}

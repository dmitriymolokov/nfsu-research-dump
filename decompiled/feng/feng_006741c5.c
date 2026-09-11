/* spd-match: far pct=9.41 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00674099();
int __cdecl FUN_0067e1d0();
extern int DAT_006abfe8;
extern int DAT_006eb4f8;
extern int DAT_006eb558;
extern int DAT_006eb55c;
extern int DAT_006eb578;
extern int DAT_006eb57c;
extern int DAT_006eb694;
extern unsigned char *DAT_006eb698;
extern int DAT_006eb720;
extern int DAT_006ec170;
extern unsigned char *DAT_00717e88;
extern int DAT_00717e90;
extern int DAT_00717ea0;
extern int DAT_00717ea4;
extern unsigned char *DAT_00717eac;
extern void LAB_006743cb(void);
int unaff_ESI;
int unaff_retaddr;

undefined4 FUN_006741c5(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  int *piVar7;
  BOOL BVar8;
  int unaff_ESI;
  uint unaff_retaddr;
  undefined1 local_1c4 [256];
  char local_c4 [132];
  undefined1 local_40 [8];
  int local_38;
  ushort local_30 [4];
  uint local_28;
  int local_20;
  LPWORD local_1c;
  void *local_18;
  undefined *local_14;
  LPWORD local_10;
  undefined *local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  iVar4 = FUN_00674099(param_1,local_c4,local_30,&local_10);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = _strcmp(local_c4,(char *)(&DAT_006eb694)[unaff_ESI * 3]);
  if (iVar4 == 0) {
LAB_006743cb:
    uVar6 = (&DAT_006eb694)[unaff_ESI * 3];
  }
  else {
    sVar5 = _strlen(local_c4);
    local_18 = _malloc(sVar5 + 1);
    if (local_18 != (void *)0x0) {
      local_14 = (undefined *)(&DAT_006eb694)[unaff_ESI * 3];
      puVar1 = &DAT_00717e88 + unaff_ESI;
      local_28 = *puVar1;
      local_c = &DAT_00717eac + unaff_ESI * 6;
      _memcpy(local_40,local_c,6);
      local_1c = DAT_00717ea0;
      uVar6 = FUN_0067e1d0(local_18,local_c4);
      (&DAT_006eb694)[unaff_ESI * 3] = uVar6;
      *puVar1 = (uint)local_30[0];
      _memcpy(local_c,local_30,6);
      uVar3 = DAT_006ec170;
      if (unaff_ESI == 2) {
        local_c = (undefined *)0x0;
        DAT_00717ea0 = local_10;
        local_20 = DAT_006eb57c;
        piVar7 = (int *)&DAT_006eb558;
        iVar4 = DAT_006eb578;
        do {
          if (local_10 == (LPWORD)*piVar7) {
            DAT_006eb558 = (&DAT_006eb558)[(int)local_c * 2];
            DAT_006eb55c = (&DAT_006eb55c)[(int)local_c * 2];
            (&DAT_006eb558)[(int)local_c * 2] = (LPWORD)iVar4;
            (&DAT_006eb55c)[(int)local_c * 2] = local_20;
            break;
          }
          local_38 = *piVar7;
          local_c = local_c + 1;
          *piVar7 = iVar4;
          iVar2 = piVar7[1];
          piVar7[1] = local_20;
          piVar7 = piVar7 + 2;
          iVar4 = local_38;
          local_20 = iVar2;
        } while ((int)piVar7 < 0x6eb580);
        uVar3 = DAT_006eb55c;
        if (local_c == (undefined *)0x5) {
          BVar8 = ___crtGetStringTypeA
                            ((_locale_t)0x1,0x6ac0e8,(LPCSTR)0x7f,(int)local_1c4,local_10,
                             DAT_00717e90,1);
          if (BVar8 == 0) {
            DAT_006eb55c = 0;
          }
          else {
            iVar4 = _memcmp(local_1c4,&DAT_006abfe8,0xfe);
            DAT_006eb55c = (uint)(iVar4 == 0);
          }
          DAT_006eb558 = DAT_00717ea0;
          uVar3 = DAT_006eb55c;
        }
      }
      DAT_006ec170 = uVar3;
      if (unaff_ESI == 1) {
        DAT_00717ea4 = local_10;
      }
      iVar4 = (**(code **)(&DAT_006eb698 + unaff_ESI * 0xc))();
      if (iVar4 == 0) {
        if (local_14 != &DAT_006eb4f8) {
          _free(local_14);
        }
        goto LAB_006743cb;
      }
      (&DAT_006eb694)[unaff_ESI * 3] = local_14;
      _free(local_18);
      *puVar1 = local_28;
      DAT_00717ea0 = local_1c;
    }
    uVar6 = 0;
  }
  return uVar6;
}

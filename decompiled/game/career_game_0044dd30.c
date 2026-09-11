/* spd-match: far pct=12.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0044c2e0();
int __cdecl FUN_0044e2b0();
int __cdecl FUN_0044ed70();
int __cdecl FUN_004519f0();
int __cdecl FUN_00451b00();
int __cdecl FUN_00452990();
int __cdecl FUN_00452b40();
int __cdecl FUN_00453090();
int __cdecl FUN_004534f0();
int __cdecl FUN_00567160();
extern int DAT_006b75c0;
extern int DAT_006b75cc;
extern int DAT_006b76d4;
extern int DAT_0073ad34;
extern unsigned char *DAT_0077a008;
extern unsigned char *PTR_FUN_006c9194;
extern unsigned char *PTR_FUN_006c91e4;
extern void LAB_006865d8(void);
void *ExceptionList;

undefined4 * FUN_0044dd30(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006865d8;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(*param_1 + 0x2c);
  local_14 = 0;
  ExceptionList = &pvStack_c;
  if ((((param_2 == 10) || (ExceptionList = &pvStack_c, 500 < param_3)) ||
      (ExceptionList = &pvStack_c, cVar3 = (**(code **)(*piVar1 + 0x6c))(), cVar3 == '\0')) ||
     (iVar4 = FUN_00451b00(param_1), iVar4 < 0)) {
    if ((*(int *)(param_1[0xea] + 0xc0) == -1) || (*(int *)(*(int *)(*param_1 + 0x2c) + 0x4ec) == 0)
       ) {
      iVar4 = FUN_004534f0();
      if (iVar4 < 0) {
        iVar4 = FUN_0044ed70(param_1,DAT_006b76d4,1);
        if (iVar4 == 0) {
          if (((param_2 == 2) || (400 < param_3)) || (iVar4 = FUN_00452b40(&local_14), iVar4 < 0)) {
            puVar5 = (undefined4 *)(**(code **)(*local_10 + 0x18))();
            ExceptionList = pvStack_c;
            return puVar5;
          }
          uVar6 = (**(code **)(**(int **)(*param_1 + 0x2c) + 0x58))();
          uVar2 = *(undefined4 *)(&DAT_0077a008 + (uVar6 & ((int)uVar6 < 1) - 1) * 0x54);
          FUN_0044c2e0(piVar1,param_1);
          iVar4 = FUN_00567160();
          uStack_4 = 0;
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_00452990(iVar4,DAT_006b75cc,uVar2,local_14);
            ExceptionList = pvStack_c;
            return puVar5;
          }
        }
        else {
          uVar2 = *(undefined4 *)(iVar4 + 0x34);
          iVar4 = FUN_00567160();
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_00453090(0xbf800000,uVar2);
            ExceptionList = pvStack_c;
            return puVar5;
          }
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_00567160();
        if (puVar5 != (undefined4 *)0x0) {
          FUN_0044e2b0(0x10,iVar4,0xbf800000);
          *puVar5 = &PTR_FUN_006c9194;
          ExceptionList = pvStack_c;
          return puVar5;
        }
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_00567160();
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0044e2b0(0x13,600,0xbf800000);
        *puVar5 = &PTR_FUN_006c91e4;
        *(undefined1 *)(puVar5 + 0x80) = 0;
        ExceptionList = pvStack_c;
        return puVar5;
      }
    }
  }
  else {
    fVar7 = (float10)(**(code **)(*piVar1 + 0x70))();
    piVar1[0x102] = DAT_0073ad34;
    iVar4 = FUN_00567160();
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)FUN_004519f0(DAT_006b75c0,(float)fVar7);
      ExceptionList = pvStack_c;
      return puVar5;
    }
  }
  ExceptionList = pvStack_c;
  return (undefined4 *)0x0;
}

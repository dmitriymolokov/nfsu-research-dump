/* spd-match: far pct=9.42 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_19/attempt5_00468060 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00467360();
int __cdecl FUN_00467ca0();
int __cdecl FUN_00467db0();
int __cdecl FUN_0046ae40();
int __cdecl FUN_00472830();
int __cdecl FUN_00472950();
int __cdecl FUN_00564940();
int __cdecl FUN_00567160();
extern int DAT_0073ad34;
extern int _DAT_006b7274;
extern int _DAT_006cca38;
extern void LAB_0046adc0(void);
extern void LAB_006864f8(void);
void *ExceptionList;

void  FUN_00468060(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006864f8;
  local_c = ExceptionList;
  cVar1 = *(char *)((int)*(int **)(param_1 + 600) + 0x15);
  if (((((cVar1 != '\x04') || (cVar2 = *(char *)(*(int *)(param_1 + 0x25c) + 0x15), cVar2 == '\0'))
       || (cVar2 == '\x01')) &&
      (((*(char *)(*(int *)(param_1 + 0x25c) + 0x15) != '\x04' || (cVar1 == '\0')) ||
       (cVar1 == '\x01')))) &&
     ((ExceptionList = &local_c, iVar6 = (**(code **)(**(int **)(param_1 + 600) + 0x50))(),
      iVar6 != 0 && (iVar6 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x50))(), iVar6 != 0)))) {
    iVar6 = *(int *)(param_1 + 0x264);
    uVar7 = 0;
    if (iVar6 != 0) {
      fVar5 = (float)(DAT_0073ad34 - *(int *)(iVar6 + 8)) * _DAT_006cca38;
      uVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),
                       (ushort)(fVar5 < _DAT_006b7274) << 8 |
                       (ushort)(NAN(fVar5) || NAN(_DAT_006b7274)) << 10 |
                       (ushort)(fVar5 == _DAT_006b7274) << 0xe);
      if (fVar5 >= _DAT_006b7274 && (fVar5 == _DAT_006b7274) == 0) {
        uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),1);
      }
    }
    FUN_00467ca0(uVar7);
    piVar3 = *(int **)(param_1 + 0x25c);
    piVar4 = *(int **)(param_1 + 600);
    uVar7 = (**(code **)(*piVar3 + 8))();
    uVar8 = (**(code **)(*piVar3 + 0x14))(uVar7);
    (**(code **)(*piVar4 + 8))(uVar8);
    uVar9 = (**(code **)(*piVar4 + 0x14))();
    FUN_00472830(uVar9,uVar8,uVar7);
    FUN_00472950();
    cVar1 = *(char *)(param_1 + 0x15);
    FUN_00467db0();
    if (cVar1 != '\0') {
      iVar6 = (**(code **)(**(int **)(param_1 + 600) + 0x68))();
      if ((((iVar6 == 0) &&
           (iVar6 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x68))(), iVar6 == 0)) ||
          (iVar6 = *(int *)(param_1 + 600), *(char *)(iVar6 + 0x16) == '\0')) ||
         (*(char *)(*(int *)(param_1 + 0x25c) + 0x16) == '\0')) {
        if (*(char *)(*(int *)(param_1 + 600) + 0x15) == '\0') {
          uVar10 = FUN_00467360();
          if ((int)uVar10 != 0) {
            *(int *)((int)((ulonglong)uVar10 >> 0x20) + 0x14c) = DAT_0073ad34;
          }
          *(int *)(*(int *)(param_1 + 600) + 0x144) = DAT_0073ad34;
        }
        if (*(char *)(*(int *)(param_1 + 0x25c) + 0x15) == '\0') {
          uVar10 = FUN_00467360();
          if ((int)uVar10 != 0) {
            *(int *)((int)((ulonglong)uVar10 >> 0x20) + 0x14c) = DAT_0073ad34;
          }
          *(int *)(*(int *)(param_1 + 0x25c) + 0x144) = DAT_0073ad34;
        }
        iVar6 = FUN_00567160();
        uStack_4 = 0;
        if (iVar6 != 0) {
          FUN_0046ae40();
        }
        uStack_4 = 0xffffffff;
        FUN_00564940(param_2,&LAB_0046adc0);
      }
      else {
        if (*(char *)(iVar6 + 0x15) == '\0') {
          *(int *)(iVar6 + 0x148) = DAT_0073ad34;
        }
        if (*(char *)(*(int *)(param_1 + 0x25c) + 0x15) == '\0') {
          *(int *)(*(int *)(param_1 + 0x25c) + 0x148) = DAT_0073ad34;
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

/* spd-match: far pct=8.01 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_0044c2e0(...);
int __cdecl FUN_0044ed70(...);
int __cdecl FUN_0044f750(...);
int __cdecl FUN_0044f8a0(...);
int __cdecl FUN_00450660(...);
int __cdecl FUN_00450730(...);
int __cdecl FUN_00450e20(...);
int __cdecl FUN_00450ec0(...);
int __cdecl FUN_004519f0(...);
int __cdecl FUN_00451b00(...);
int __cdecl FUN_004521c0(...);
int __cdecl FUN_00452570(...);
int __cdecl FUN_00452630(...);
int __cdecl FUN_00452990(...);
int __cdecl FUN_00452b40(...);
int __cdecl FUN_00454930(...);
int __cdecl FUN_00567160(...);
extern int DAT_006b75ac;
extern int DAT_006b75c0;
extern int DAT_006b75c8;
extern int DAT_006b75cc;
extern int DAT_0073ad34;
extern unsigned char *DAT_0077a340;
extern void LAB_006865f8(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_0044d8b0(int *param_2, int param_3, float param_4);
};
undefined4 ThisCallBox::FUN_0044d8b0(int *param_2, int param_3, float param_4) {
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar5 = (int)param_4;
  piVar2 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006865f8;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(*param_2 + 0x2c);
  local_38 = 0;
  local_2c = 0;
  local_24 = 0;
  param_2 = (int *)CONCAT31(((unsigned int)(param_2) >> 8),1);
  local_28 = local_28 & 0xffffff00;
  local_34 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = local_10 & 0xffffff00;
  ExceptionList = &pvStack_c;
  local_20 = ((int *)this);
  if ((((param_3 == 10) || (ExceptionList = &pvStack_c, 500 < (int)param_4)) ||
      (ExceptionList = &pvStack_c, cVar3 = (**(code **)(*piVar1 + 0x6c))(), cVar3 == '\0')) ||
     (iVar4 = FUN_00451b00(piVar2), iVar5 = (int)param_4, iVar4 < 0)) {
    if (((param_3 == 0x13) || (600 < iVar5)) ||
       ((*(int *)(piVar2[0xea] + 0xc0) == -1 || (*(int *)(*(int *)(*piVar2 + 0x2c) + 0x4ec) == 0))))
    {
      if (((param_3 == 0xc) || (400 < iVar5)) ||
         (iVar4 = FUN_0044ed70(piVar2,0xbf800000,1), iVar4 == 0)) {
        if (((param_3 == 2) || (400 < iVar5)) ||
           (iStack_30 = FUN_00452b40(&local_34), iVar5 = (int)param_4, iStack_30 < 0)) {
          if (((param_3 != 1) && (iVar5 < 0x12d)) &&
             (iStack_30 = FUN_0044f8a0(&local_38,&local_1c,&local_34,&param_2,&local_28),
             uVar6 = local_38, -1 < iStack_30)) {
            FUN_0044c2e0(piVar1,piVar2);
            cVar3 = (**(code **)(*piVar1 + 0x74))(uVar6,local_34);
            iVar5 = (int)param_4;
            if (cVar3 != '\0') {
              piVar2[0xe6] = local_1c;
              piVar2[0xe7] = local_18;
              piVar2[0xe8] = local_14;
              piVar2[0xe9] = local_10;
              iVar5 = FUN_00567160();
              if (iVar5 == 0) {
                ExceptionList = pvStack_c;
                return 0;
              }
              param_4 = (float)((uint)param_2 & 0xff);
              uVar6 = FUN_0044f750(DAT_006b75c8,uVar6,(float)(int)param_4,local_28,0);
              ExceptionList = pvStack_c;
              return uVar6;
            }
          }
          if (((param_3 == 0xe) || (500 < iVar5)) ||
             (iVar4 = FUN_00452630(), iVar5 = (int)param_4, iVar4 < 0)) {
            if (((param_3 == 5) ||
                (*(int *)(&DAT_0077a340 + *(char *)(*(int *)(piVar1[1] + 0x14) + 0x736) * 8) < iVar5
                )) || (iVar4 = FUN_00450ec0(&local_24), iVar5 = (int)param_4, iVar4 < 0)) {
              if (((param_3 == 0) || (200 < iVar5)) ||
                 ((iVar5 = FUN_00450730(&local_2c,&local_1c,&param_4), iVar5 < 0 ||
                  (cVar3 = (**(code **)(*piVar1 + 0x74))(local_2c,0xbf800000), cVar3 == '\0')))) {
                uVar6 = (**(code **)(*local_20 + 0x18))();
                ExceptionList = pvStack_c;
                return uVar6;
              }
              piVar2[0xe6] = local_1c;
              piVar2[0xe7] = local_18;
              piVar2[0xe8] = local_14;
              piVar2[0xe9] = local_10;
              iVar5 = FUN_00567160();
              if (iVar5 != 0) {
                uVar6 = FUN_00450660(DAT_006b75ac,local_2c,0);
                ExceptionList = pvStack_c;
                return uVar6;
              }
            }
            else {
              iVar5 = FUN_00567160();
              if (iVar5 != 0) {
                uVar6 = FUN_00450e20(0xbf800000,local_24);
                ExceptionList = pvStack_c;
                return uVar6;
              }
            }
          }
          else {
            iVar5 = FUN_00567160();
            if (iVar5 != 0) {
              uVar6 = FUN_00452570(0xbf800000);
              ExceptionList = pvStack_c;
              return uVar6;
            }
          }
        }
        else {
          (**(code **)(**(int **)(*piVar2 + 0x2c) + 0x58))();
          FUN_0044c2e0(piVar1,piVar2);
          param_4 = (float)FUN_00567160();
          uStack_4 = 0;
          if (param_4 != 0.0) {
            uVar6 = FUN_00452990(param_4,DAT_006b75cc,0x40000000,local_34);
            ExceptionList = pvStack_c;
            return uVar6;
          }
        }
      }
      else {
        uVar6 = *(undefined4 *)(iVar4 + 0x34);
        FUN_0044c2e0(piVar1,piVar2);
        iVar5 = FUN_00567160();
        if (iVar5 != 0) {
          uVar6 = FUN_004521c0(0xbf800000,uVar6);
          ExceptionList = pvStack_c;
          return uVar6;
        }
      }
    }
    else {
      iVar5 = FUN_00567160();
      if (iVar5 != 0) {
        uVar6 = FUN_00454930(0xbf800000);
        ExceptionList = pvStack_c;
        return uVar6;
      }
    }
  }
  else {
    fVar7 = (float10)(**(code **)(*piVar1 + 0x70))();
    param_4 = (float)fVar7;
    piVar1[0x102] = DAT_0073ad34;
    iVar5 = FUN_00567160();
    if (iVar5 != 0) {
      uVar6 = FUN_004519f0(DAT_006b75c0,param_4);
      ExceptionList = pvStack_c;
      return uVar6;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

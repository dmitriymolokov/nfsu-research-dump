/* spd-match: far pct=8.50 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_00421400(...);
int __cdecl FUN_004216f0(...);
int __cdecl FUN_00421a30(...);
int __cdecl FUN_00424cd0(...);
int __cdecl FUN_00425150(...);
int __cdecl FUN_00426110(...);
int __cdecl FUN_00427ed0(...);
int __cdecl FUN_00428080(...);
int __cdecl FUN_004280a0(...);
int __cdecl FUN_00435f80(...);
int __cdecl FUN_004436d0(...);
int __cdecl FUN_0044a000(...);
int __cdecl FUN_0044a060(...);
int __cdecl FUN_0044a0e0(...);
int __cdecl FUN_0044b060(...);
int __cdecl FUN_0044bc30(...);
int __cdecl FUN_0044bcb0(...);
int __cdecl FUN_0044c550(...);
int __cdecl FUN_0044c940(...);
int __cdecl FUN_0044c9c0(...);
int __cdecl FUN_0044cac0(...);
int __cdecl FUN_0044cf30(...);
int __cdecl FUN_0044f700(...);
int __cdecl FUN_00450170(...);
int __cdecl FUN_00458cc0(...);
int __cdecl FUN_00458d90(...);
int __cdecl FUN_0045ae10(...);
int __cdecl FUN_00463260(...);
int __cdecl FUN_00463b30(...);
int __cdecl FUN_00465430(...);
int __cdecl FUN_00465530(...);
int __cdecl FUN_00469f30(...);
int __cdecl FUN_00567160(...);
int __cdecl FUN_0057a6b0(...);
int __cdecl FUN_0057b520(...);
int __cdecl FUN_00584270(...);
int __cdecl FUN_00586640(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b7710;
extern int DAT_006cc7a4;
extern int DAT_006f08a4;
extern int DAT_00700740;
extern int DAT_00736090;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a8;
extern unsigned char *DAT_007361f8;
extern int DAT_007372b0;
extern int DAT_0073ad34;
extern unsigned char *DAT_0077a014;
extern unsigned char *DAT_0077a018;
extern int DAT_0078a344;
extern int DAT_0078a368;
extern int _DAT_006b7700;
extern int _DAT_006b770c;
extern int _DAT_006cc8a8;
extern int _DAT_006cc8bc;
extern int _DAT_006cc960;
extern int _DAT_006cca38;
extern char stack0xfffffe18;
extern void LAB_0044b3e3(...);
extern void LAB_0044b3e8(...);
extern void LAB_0044b6d9(...);
extern void LAB_0044b707(...);
extern void LAB_0044bab2(...);
extern void LAB_00687456(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_0044b1b0(float param_2);
};
void ThisCallBox::FUN_0044b1b0(float param_2) {
  int *piVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  char extraout_DL;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  float10 extraout_ST1;
  undefined1 auStack_1e0 [436];
  void *pvStack_2c;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = (unsigned char *)(unsigned int)&LAB_00687456;
  pvStack_1c = ExceptionList;
  if ((DAT_0078a344 != '\0') ||
     (piVar9 = (int *)(unsigned int)(DAT_0073619c), ExceptionList = &pvStack_1c, DAT_007361a8 != 0)) {
    ExceptionList = &pvStack_1c;
    if ((float)((int *)this)[0x128] == DAT_006cc7a4) {
      ExceptionList = &pvStack_1c;
      uVar4 = (**(code **)(*((int *)this) + 0x58))();
      iVar5 = (uVar4 & ((int)uVar4 < 1) - 1) * 0x54;
      fVar11 = (float10)FUN_004216f0(*(float *)(&DAT_0077a018 + iVar5) -
                                     *(float *)(&DAT_0077a014 + iVar5));
      ((int *)this)[0x128] = (int)(float)(fVar11 + extraout_ST1 + (float10)_DAT_006cc8bc);
    }
    piVar9 = (int *)(unsigned int)(DAT_0073619c);
    if (DAT_006cc7a4 <= (float)((int *)this)[0x128]) {
      fVar2 = _DAT_006cc8a8;
      if ((DAT_0073619c[1] != 0) && (DAT_0073619c[1] != 0x7fffffff)) {
        fVar2 = (float)(DAT_0073ad34 - DAT_0073619c[1]) * _DAT_006cca38;
      }
      if (fVar2 < (float)((int *)this)[0x128]) {
        (**(code **)(*(int *)((int *)this)[2] + 0x38))(0,0,0,0);
        FUN_0044bcb0();
        ExceptionList = pvStack_2c;
        return;
      }
    }
    else {
      fVar11 = (float10)FUN_00435f80();
      if ((fVar11 < -(float10)(float)((int *)this)[0x128]) && (*piVar9 != 4)) {
        (**(code **)(*(int *)((int *)this)[2] + 0x38))(0x42c80000,0,0,1);
        FUN_0044bcb0();
        ExceptionList = pvStack_2c;
        return;
      }
    }
  }
  if (((*piVar9 != 4) && (((DAT_0078a368 == 0 || (*piVar9 < 2)) && (DAT_0078a344 == '\0')))) &&
     (DAT_007361a8 == 0)) {
    (**(code **)(*(int *)((int *)this)[2] + 0x38))(0,0,0,1);
    FUN_0044bcb0();
    iVar5 = FUN_00674898();
    ((int *)this)[0x10a] = iVar5;
  }
  if (*(short *)(*(int *)(((int *)this)[1] + 0x1c) + 0x10) == 0) {
    if ((((int *)this)[0x10a] != 0) && (((int *)this)[0x10a] != 0x7fffffff)) {
      iVar5 = FUN_00586640(param_2);
      if (iVar5 != 0) {
        iVar5 = *(int *)(((int *)this)[1] + 0x28);
        goto joined_r0x0044b3e1;
      }
      if (*(int *)(((int *)this)[1] + 0x3cc) < 4) {
        ((int *)this)[0x10a] = 4000;
        goto LAB_0044b3e8;
      }
      FUN_00425150();
      goto LAB_0044b3e3;
    }
  }
  else {
    iVar5 = *(int *)(((int *)this)[1] + 0x28);
joined_r0x0044b3e1:
    if (iVar5 != 1) {
LAB_0044b3e3:
      FUN_00426110();
    }
  }
LAB_0044b3e8:
  if (*DAT_0073619c != 4) {
    if (DAT_0078a368 == 0) {
      ExceptionList = pvStack_1c;
      return;
    }
    if (*DAT_0073619c < 2) {
      ExceptionList = pvStack_1c;
      return;
    }
  }
  if (((((int *)this)[0xfe] != 0) && (*(int *)(((int *)this)[0xfe] + 0x1f8) != 9)) &&
     (*(short *)(*(int *)(((int *)this)[1] + 0x1c) + 0x10) == 0)) {
    iVar5 = FUN_00421a30();
    if ((iVar5 != 0) && (iVar5 = FUN_00586640(param_2), iVar5 == 0)) {
      FUN_00424cd0(((int *)this) + 0x10b,DAT_006b7710);
      FUN_00584270(ABS(*(float *)(*(int *)(((int *)this)[1] + 0x1c) + 0x18)) * DAT_007372b0);
      FUN_00421400();
      cVar3 = FUN_004280a0();
      if ((cVar3 == '\0') &&
         (((iVar5 = ((int *)this)[0x10c], *(char *)(iVar5 + 6) == *(char *)(iVar5 + 5) &&
           (*(float *)(iVar5 + 0xc) < _DAT_006b770c)) && (extraout_DL == '\0')))) {
        FUN_00428080();
      }
    }
  }
  if ((((int *)this)[0x109] != 0) && (((int *)this)[0x109] != 0x7fffffff)) {
    if (*(int *)(((int *)this)[1] + 0x28) == 4) {
      FUN_00425150();
      FUN_00426110();
    }
    FUN_00586640(param_2);
  }
  FUN_00586640(param_2);
  FUN_00586640(param_2);
  FUN_00586640(param_2);
  iVar5 = ((int *)this)[0xf8];
  ((int *)this)[0xfc] = (int)((float)((int *)this)[0xfc] - param_2);
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined1 *)(iVar5 + 0x388) = 0xff;
  fVar2 = _DAT_006b7700;
  iVar5 = ((int *)this)[1];
  iVar6 = *(int *)(iVar5 + 0x14);
  if (*(int *)(iVar6 + 4) == 2) {
    uVar4 = DAT_006f08a4 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    if (((int)uVar4 < *(int *)(DAT_007361f8 + 0x20) - *(int *)(DAT_007361f8 + 0x1c)) &&
       (iVar5 == *(int *)(DAT_007361f8 + 0x28 + (*(int *)(DAT_007361f8 + 0x1c) + uVar4) * 4))) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
LAB_0044b6d9:
    if (((float)(DAT_0073ad34 - ((int *)this)[0x130]) * _DAT_006cca38 < _DAT_006cc960) || (!bVar10)) {
LAB_0044b707:
      if (((int *)this)[0xfe] != 0) {
        if ((((*(int *)(iVar6 + 4) == 2) && (cVar3 = FUN_00465430(), cVar3 != '\0')) &&
            (cVar3 = FUN_0044cac0(((int *)this)), cVar3 == '\0')) &&
           (cVar3 = (**(code **)(*((int *)this) + 0x8c))(), cVar3 != '\0')) {
          FUN_00465530();
          (**(code **)(*((int *)this) + 0x80))();
        }
        if (*(int *)(((int *)this)[1] + 0x28) == 4) {
          ExceptionList = pvStack_1c;
          return;
        }
        if (*(int *)(((int *)this)[0xfe] + 0x1f8) == 5) {
          FUN_0044cf30(((int *)this) + 0xb,((int *)this));
          (**(code **)(*((int *)this) + 0x88))(((int *)this)[0xfe]);
          FUN_0044c550(((int *)this));
        }
        else {
          cVar3 = FUN_0044a060();
          if (cVar3 == '\0') {
            ExceptionList = pvStack_1c;
            return;
          }
          cVar3 = FUN_0057a6b0();
          if (cVar3 == '\0') {
            ExceptionList = pvStack_1c;
            return;
          }
          FUN_00458d90();
          FUN_0044cf30(((int *)this) + 0xb,((int *)this));
          iVar5 = FUN_0057b520();
          if (iVar5 == 0) {
            ExceptionList = pvStack_1c;
            return;
          }
          FUN_0045ae10(((int *)this)[0xf7],auStack_1e0,((int *)this) + 0xb,0,0);
          (**(code **)(*(int *)((int *)this)[2] + 0x3c))(auStack_1e0);
        }
        goto LAB_0044bab2;
      }
    }
  }
  else if (*(int *)(iVar6 + 4) == 3) {
    if ((*(int *)(DAT_007361f8 + 0x18) - *(int *)(DAT_007361f8 + 0x24) <= (int)(unsigned int)(DAT_006f08a4) % 0x16)
       || (iVar5 != *(int *)(DAT_007361f8 + 0x28 +
                            (*(int *)(DAT_007361f8 + 0x24) + (int)(unsigned int)(DAT_006f08a4) % 0x16) * 4)))
    goto LAB_0044b707;
  }
  else if (*(int *)(iVar6 + 4) == 1) {
    if (*(int *)(iVar5 + 0x24) != 2) {
      uVar4 = DAT_006f08a4 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      bVar10 = uVar4 == (int)*(short *)(iVar5 + 10);
      goto LAB_0044b6d9;
    }
  }
  else if ((float)((int *)this)[0xfc] < DAT_006cc7a4 == ((float)((int *)this)[0xfc] == DAT_006cc7a4))
  goto LAB_0044b707;
  ((int *)this)[0x130] = DAT_0073ad34;
  ((int *)this)[0xfc] = (int)(fVar2 + (float)((int *)this)[0xfc]);
  iVar5 = (**(code **)(*((int *)this) + 0x40))();
  iVar6 = FUN_004436d0(iVar5);
  if ((iVar6 != 0) || (iVar6 = FUN_004436d0(iVar5), iVar6 != 0)) {
    FUN_00427ed0();
  }
  FUN_0044a000();
  if ((char)((int *)this)[0x104] == '\0') {
    if (((int *)this)[0xff] == 0) {
      (**(code **)(*((int *)this) + 0x60))();
    }
    if (((int *)this)[0xfe] == 0) {
      iVar6 = (**(code **)(*(int *)((int *)this)[0xff] + 0x18))();
      ((int *)this)[0xfe] = iVar6;
    }
    uVar7 = (**(code **)(*((int *)this) + 0x40))();
    FUN_00458cc0(uVar7);
    piVar9 = ((int *)this) + 0xb;
    cVar3 = FUN_0044cf30(piVar9,((int *)this));
    if (cVar3 == '\0') {
      FUN_0044c9c0();
    }
    else {
      if ((((*(int *)(*(int *)(((int *)this)[1] + 0x14) + 4) == 2) &&
           (cVar3 = FUN_00465430(), cVar3 != '\0')) &&
          (cVar3 = (**(code **)(*((int *)this) + 0x78))(piVar9), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(*((int *)this) + 0x8c))(), cVar3 != '\0')) {
        FUN_00465530();
        (**(code **)(*((int *)this) + 0x80))();
      }
      if (DAT_00736090 == 0) {
        FUN_0044f700();
        piVar1 = (int *)((int *)this)[0xfe];
        cVar3 = FUN_0044a0e0();
        if (cVar3 == '\0') {
          iVar5 = FUN_0044bc30();
          if (iVar5 != 0) {
            (**(code **)(*(int *)((int *)this)[0xfe] + 0xc))(piVar9);
            if ((undefined4 *)((int *)this)[0xfe] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)((int *)this)[0xfe])(1);
            }
            ((int *)this)[0xfe] = iVar5;
          }
        }
        else {
          (**(code **)(*piVar1 + 0xc))(piVar9);
          if ((undefined4 *)((int *)this)[0xfe] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)((int *)this)[0xfe])(1);
          }
          ((int *)this)[0xfe] = 0;
          (**(code **)(*((int *)this) + 0x84))(&stack0xfffffe18,0x14);
          ((int *)this)[0xfe] = iVar5;
        }
        (**(code **)(*((int *)this) + 0x88))(((int *)this)[0xfe]);
      }
      else {
        piVar1 = (int *)((int *)this)[0xfe];
        if (piVar1 == (int *)0x0) {
          iVar5 = FUN_00567160();
          if (iVar5 == 0) {
            ((int *)this)[0xfe] = 0;
          }
          else {
            iVar5 = FUN_00450170(0xbf800000);
            ((int *)this)[0xfe] = iVar5;
          }
        }
        else if (piVar1[0x7e] == 7) {
          (*(code *)((undefined4 *)*piVar1)[2])(piVar9);
        }
        else {
          (**(code **)*piVar1)(1);
          ((int *)this)[0xfe] = 0;
          (**(code **)(*((int *)this) + 0x84))(((int *)this) + 0xfe,7);
        }
      }
      FUN_0044c550(((int *)this));
      if ((DAT_00700740 == 0) || (cVar3 = FUN_0044b060(((int *)this)), cVar3 == '\0')) {
        if (*(int *)(((int *)this)[1] + 0x28) == 4) {
          FUN_00425150();
          FUN_00426110();
        }
      }
      else {
        iVar5 = ((int *)this)[1];
        if ((*(int *)(iVar5 + 0x28) != 4) && (*(int *)(iVar5 + 0x28) != 4)) {
          if (*(undefined4 **)(iVar5 + 0x34) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar5 + 0x34))(1);
          }
          *(undefined4 *)(iVar5 + 0x34) = 0;
          *(undefined4 *)(iVar5 + 0x28) = 4;
          pvVar8 = _malloc(0x48);
          uStack_14 = 2;
          if (pvVar8 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_00463260(pvVar8);
          }
          *(undefined4 *)(iVar5 + 0x34) = uVar7;
          *(undefined4 *)(*(int *)(iVar5 + 0x3c) + 0x60) = 0;
          uStack_14 = 0xffffffff;
          FUN_00469f30();
          *(undefined4 *)(*(int *)(iVar5 + 0x34) + 4) = *(undefined4 *)(iVar5 + 0x30);
        }
        FUN_00463b30();
      }
    }
  }
  else {
    FUN_0044bcb0();
    (**(code **)(*(int *)((int *)this)[2] + 0x38))(0,0,0,1);
    *(undefined1 *)(((int *)this) + 0x104) = 1;
  }
LAB_0044bab2:
  FUN_0044c940();
  ExceptionList = pvStack_1c;
  return;
}

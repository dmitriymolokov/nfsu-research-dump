/* spd-match: far pct=14.45 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055F380 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004174b0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f9240();
int __cdecl FUN_004f9340();
int __cdecl FUN_0055fe30();
int __cdecl FUN_005603e0();
int __cdecl FUN_005605d0();
int __cdecl FUN_00565da0();
int __cdecl FUN_00666f30();
int __cdecl FUN_006682f0();
int __cdecl FUN_00674898();
extern int DAT_006bd444;
extern int DAT_006ca778;
extern int DAT_00734718;
extern int DAT_00734719;
extern int DAT_0073d8a8;
extern int DAT_0073d8d0;
extern int DAT_0078ea8d;
extern void LAB_0055f5e1(void);
extern void LAB_0055f81c(void);
extern void LAB_0055f823(void);
extern void LAB_0055fa3d(void);
extern void LAB_0055fa43(void);
extern void LAB_0055fa8c(void);
void __fastcall FUN_0055f380(int obj)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;

  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 *local_118;
  int local_114;
  undefined1 local_10c [8];
  undefined1 local_104 [8];
  undefined1 local_fc [8];
  undefined1 local_f4 [8];
  int local_ec;
  int local_e8;
  undefined4 *local_e4;
  int local_e0 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [12];
  
  if (*(char *)(obj + 0x8c) != '\0') {
    iVar1 = obj + 0x5c;
    *(undefined1 *)(obj + 0x8c) = 0;
    FUN_004f9340(iVar1);
    FUN_005603e0();
    local_114 = *(int *)(obj + 0x90);
    local_e8 = *(int *)(obj + 0x84) + local_114;
    if (local_114 < local_e8) {
      local_e4 = (undefined4 *)(obj + 100);
      do {
        puVar6 = local_e4;
        local_118 = _malloc(0x10);
        if (local_118 == (undefined4 *)0x0) {
          local_118 = (undefined4 *)0x0;
        }
        else {
          puVar4 = local_118 + 2;
          *puVar4 = puVar4;
          local_118[3] = puVar4;
        }
        puVar4 = (undefined4 *)puVar6[1];
        *puVar4 = local_118;
        puVar6[1] = local_118;
        local_118[1] = puVar4;
        *local_118 = puVar6;
        if (*(int *)(obj + 0x70) == 0) {
          *(undefined4 *)(obj + 0x70) = *puVar6;
        }
        if (*(int *)(obj + 0x6c) == 0) {
          *(undefined4 *)(obj + 0x6c) = *puVar6;
        }
        if (DAT_0073d8d0 == 0) {
          iVar12 = 0;
        }
        else if (DAT_0073d8a8 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_00666f30(DAT_0073d8a8,local_114);
        }
        if ((local_114 == *(int *)(obj + 0x7c)) && (*(char *)(obj + 0x135) == '\x01')) {
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004f9240(iVar1);
          return;
        }
        local_ec = local_114 + 1;
        iVar9 = local_ec;
        if (((local_114 == *(int *)(obj + 0x7c)) && (*(char *)(obj + 0x135) == '\0')) &&
           (*(char *)(obj + 0x134) == '\x01')) {
          iVar5 = *(int *)(obj + 0x78);
          if (iVar5 == 0) {
            iVar9 = *(int *)(obj + 0xa0);
          }
          else if (iVar5 == 1) {
            iVar9 = *(int *)(obj + 0xbc);
          }
          else if (iVar5 == 2) {
            iVar9 = *(int *)(obj + 0xd8);
          }
          else if (iVar5 == 3) {
            iVar9 = *(int *)(obj + 0xf4);
          }
          else if (iVar5 == 4) {
            iVar9 = *(int *)(obj + 0x110);
          }
        }
        FUN_004f68c0(8,&DAT_006ca778,iVar9);
        FUN_004174b0(local_118,local_10);
        if (iVar12 == 0) {
          if (*(int *)(obj + 0x7c) <= local_114) {
            piVar10 = (int *)(obj + 0xa0);
            piVar13 = local_e0;
            for (iVar12 = 0x23; iVar12 != 0; iVar12 = iVar12 + -1) {
              *piVar13 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar13 = piVar13 + 1;
            }
            FUN_004174b0(local_118,&DAT_00734718);
            local_50[0] = DAT_00734718;
            if (DAT_00734718 != '\0') {
              iVar12 = 0;
              do {
                cVar2 = (&DAT_00734719)[iVar12];
                local_50[iVar12 + 1] = cVar2;
                iVar12 = iVar12 + 1;
              } while (cVar2 != '\0');
            }
            goto LAB_0055f5e1;
          }
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
          FUN_004174b0(local_118,&DAT_0078ea8d);
        }
        else {
          FUN_006682f0(iVar12 + 0x28,local_e0,0x8c,&DAT_006bd444);
          pcVar11 = (char *)(iVar12 + 8);
          FUN_004174b0(local_118,pcVar11);
          local_50[0] = *pcVar11;
          if (*pcVar11 != '\0') {
            pcVar8 = local_50;
            do {
              cVar2 = pcVar11[1];
              pcVar11 = pcVar11 + 1;
              pcVar8 = pcVar8 + 1;
              *pcVar8 = cVar2;
            } while (cVar2 != '\0');
          }
LAB_0055f5e1:
          if (*(int *)(obj + 0x88) == 0) {
            iVar12 = *(int *)(obj + 0x78);
            if (iVar12 == 0) {
              FUN_00565da0(&DAT_006ca778,local_d0);
              FUN_00565da0(&DAT_006ca778,local_e0[1]);
              FUN_00565da0(&DAT_006ca778,local_e0[2]);
LAB_0055f823:
              uVar7 = FUN_00674898();
              FUN_00565da0("%d%%%%",uVar7);
            }
            else {
              if (iVar12 == 1) {
                FUN_00565da0(&DAT_006ca778,local_b4);
                FUN_00565da0(&DAT_006ca778,local_c0);
                FUN_00565da0(&DAT_006ca778,local_bc);
                goto LAB_0055f823;
              }
              if (iVar12 == 2) {
                FUN_00565da0(&DAT_006ca778,local_98);
                FUN_00565da0(&DAT_006ca778,local_a4);
                FUN_00565da0(&DAT_006ca778,local_a0);
                goto LAB_0055f823;
              }
              if (iVar12 == 3) {
                FUN_00565da0(&DAT_006ca778,local_7c);
                FUN_00565da0(&DAT_006ca778,local_88);
                FUN_00565da0(&DAT_006ca778,local_84);
                iVar9 = local_84 + local_88;
                iVar12 = local_88;
LAB_0055f81c:
                FUN_005605d0(obj,iVar12,iVar9);
                goto LAB_0055f823;
              }
              if (iVar12 == 4) {
                FUN_00565da0(&DAT_006ca778,local_60);
                FUN_00565da0(&DAT_006ca778,local_6c);
                FUN_00565da0(&DAT_006ca778,local_68);
                iVar9 = local_68 + local_6c;
                iVar12 = local_6c;
                goto LAB_0055f81c;
              }
            }
            FUN_004174b0(local_118,local_30);
            FUN_004174b0(local_118,local_f4);
            FUN_004174b0(local_118,local_10c);
            puVar14 = local_fc;
LAB_0055fa8c:
            FUN_004174b0(local_118,puVar14);
          }
          else if (*(int *)(obj + 0x88) == 1) {
            iVar12 = *(int *)(obj + 0x78);
            if (iVar12 == 0) {
              FUN_00565da0(&DAT_006ca778,local_cc);
              FUN_00565da0(&DAT_006ca778,local_c8);
LAB_0055fa43:
              uVar7 = FUN_00674898();
              FUN_00565da0("%d%%%%",uVar7);
            }
            else {
              if (iVar12 == 1) {
                FUN_00565da0(&DAT_006ca778,local_b0);
                FUN_00565da0(&DAT_006ca778,local_ac);
                goto LAB_0055fa43;
              }
              if (iVar12 == 2) {
                FUN_00565da0(&DAT_006ca778,local_94);
                FUN_00565da0(&DAT_006ca778,local_90);
                iVar12 = local_a0 + local_a4;
                uVar7 = local_9c;
LAB_0055fa3d:
                FUN_005605d0(obj,uVar7,iVar12);
                goto LAB_0055fa43;
              }
              if (iVar12 == 3) {
                FUN_00565da0(&DAT_006ca778,local_78);
                FUN_00565da0(&DAT_006ca778,local_74);
                iVar12 = local_84 + local_88;
                uVar7 = local_80;
                goto LAB_0055fa3d;
              }
              if (iVar12 == 4) {
                FUN_00565da0(&DAT_006ca778,local_5c);
                FUN_00565da0(&DAT_006ca778,local_58);
                iVar12 = local_68 + local_6c;
                uVar7 = local_64;
                goto LAB_0055fa3d;
              }
            }
            FUN_004174b0(local_118,local_40);
            FUN_004174b0(local_118,local_20);
            FUN_004174b0(local_118,&DAT_0078ea8d);
            puVar14 = local_104;
            goto LAB_0055fa8c;
          }
          iVar12 = 0;
          do {
            cVar2 = local_50[iVar12];
            cVar3 = (&DAT_00734718)[iVar12];
            iVar12 = iVar12 + 1;
            if ((cVar2 == '\0') || (cVar3 == '\0')) break;
          } while (cVar2 == cVar3);
          if ((cVar2 == cVar3) && (*(int *)(obj + 300) == *(int *)(obj + 0x130))) {
            FUN_0055fe30((local_114 - *(int *)(obj + 0x90)) + 1,0xffffffff);
          }
        }
        local_114 = local_ec;
      } while (local_ec < local_e8);
    }
    FUN_004f9240(iVar1);
  }
  return;
}

/* spd-match: far pct=10.19 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142403Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_00424f60();
int __cdecl FUN_004278d0();
int __cdecl FUN_00436ff0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_00440740();
int __cdecl FUN_004437e0();
int __cdecl FUN_00443a10();
int __cdecl FUN_00458a50();
int __cdecl FUN_00464860();
int __cdecl FUN_00469b00();
int __cdecl FUN_0051d510();
int __cdecl FUN_0051d6b0();
int __cdecl FUN_0051d8c0();
int __cdecl FUN_00567160();
int __cdecl FUN_00569990();
int __cdecl FUN_00577d10();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_0058d750();
int __cdecl FUN_0058df00();
int __cdecl FUN_00674898();
extern int DAT_006b7b5c;
extern int DAT_006cc7a4;
extern int DAT_006f1dd8;
extern int DAT_00734588;
extern int DAT_007356a8;
extern int DAT_007372b0;
extern int DAT_0073ad34;
extern int _DAT_00700d54;
extern int _DAT_007361d8;
extern unsigned char *PTR_FUN_006caaf0;
extern unsigned char *PTR_FUN_006cab08;
extern unsigned char *PTR_FUN_006cab60;
extern void LAB_00425651(void);
extern void LAB_00425665(void);
extern void LAB_006869a8(void);
void *ExceptionList;

int FUN_00425350(int param_1,int param_2,undefined4 *param_3,undefined2 param_4,float param_5)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006869a8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  if (*(char *)(param_2 + 0x434) == -1) {
    ExceptionList = &pvStack_1c;
    FUN_0057f2b0(1);
  }
  FUN_00464860(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x534) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7e4) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + 0x7ec) = 0;
  *(undefined4 *)(param_1 + 0x7f4) = 0;
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  FUN_00440740();
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined4 *)(param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x80c) = 0;
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x824) = 0;
  *(undefined1 *)(param_1 + 0x828) = 0;
  *(undefined4 *)(param_1 + 0x844) = 0;
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  local_14 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (param_3 != (undefined4 *)0x0) {
    local_30 = *param_3;
    local_28 = param_3[2];
    local_2c = param_3[1];
    uVar5 = param_3[1];
    *(undefined4 *)(param_1 + 0x490) = *param_3;
    *(undefined4 *)(param_1 + 0x498) = local_28;
    *(undefined4 *)(param_1 + 0x494) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x808) = 0;
  if ((DAT_006cc7a4 <= param_5) && (iVar4 = FUN_004437e0(&local_30,param_5), iVar4 != 0)) {
    FUN_00443a10(&DAT_007372b0,iVar4);
  }
  FUN_00443a10(&DAT_007372b0,&local_30);
  *(undefined4 *)(param_1 + 0x60) = local_30;
  *(undefined4 *)(param_1 + 100) = local_2c;
  *(undefined4 *)(param_1 + 0x68) = local_28;
  *(undefined2 *)(param_1 + 0x3b4) = param_4;
  *(undefined1 *)(param_1 + 0x86c) = 0;
  *(undefined1 *)(param_1 + 0x86d) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x874) = 0;
  *(short *)(param_1 + 10) = (short)*(char *)(param_2 + 1);
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x10) = param_2 + 0x10;
  if (*(char *)(param_2 + 0x434) == -1) {
    FUN_0057f2b0(1);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  *(int *)(param_1 + 0x20) = param_2 + 0x70;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0xc) = *piVar2 * 0xc90 + (int)DAT_00734588;
  if ((*(int *)(iVar4 + 4) == 1) && (*(char *)(iVar4 + 0x734) == '\0')) {
    _DAT_00700d54 = *piVar2;
    _DAT_007361d8 = piVar2 + 2;
  }
  bVar12 = DAT_006f1dd8 == 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  if (bVar12) goto LAB_00425665;
  if (*(int *)(iVar4 + 4) == 1) {
    if (*(char *)(iVar4 + 0x734) == '\0') {
      uVar5 = FUN_0051d510();
    }
    else {
LAB_00425651:
      uVar5 = FUN_0051d6b0(param_1);
    }
  }
  else {
    if ((*(char *)(iVar4 + 0x734) != '\0') || (*(int *)(iVar4 + 4) == 2)) goto LAB_00425651;
    if (*(int *)(iVar4 + 4) != 3) goto LAB_00425665;
    uVar5 = FUN_0051d8c0(DAT_007356a8,param_1);
  }
  *(undefined4 *)(param_1 + 0x878) = uVar5;
LAB_00425665:
  puVar6 = _malloc(0x2c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00458a50(param_1);
    *puVar6 = (unsigned int)&PTR_FUN_006cab08;
    puVar7 = _malloc(0x1f0);
    if (puVar7 == (undefined4 *)0x0) {
      puVar6[2] = 0;
    }
    else {
      FUN_00424f60();
      *puVar7 = (unsigned int)&PTR_FUN_006cab60;
      puVar6[2] = puVar7;
    }
  }
  *(undefined4 **)(param_1 + 0x2c) = puVar6;
  *(undefined4 *)(param_1 + 0x30) = puVar6[2];
  puVar6 = (undefined4 *)FUN_00567160();
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    *puVar6 = (unsigned int)&PTR_FUN_006caaf0;
    puVar6[2] = param_1 + 0x40;
  }
  *(undefined4 **)(param_1 + 0x34) = puVar6;
  pcVar11 = "CarWorldObject";
  iVar4 = -1;
  uVar8 = 0x43;
  do {
    iVar4 = iVar4 * 0x21 + uVar8;
    pbVar1 = (byte *)(pcVar11 + 1);
    uVar8 = (uint)*pbVar1;
    pcVar11 = pcVar11 + 1;
  } while (*pbVar1 != 0);
  iVar4 = FUN_00577d10(iVar4);
  uVar5 = (**(code **)(iVar4 + 8))(param_1,0);
  *(undefined4 *)(param_1 + 0x82c) = uVar5;
  *(undefined4 *)(param_1 + 0x868) = 0;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0xc54) == 0) {
    pvVar9 = _malloc(0xf8);
    if (pvVar9 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0058d750(param_1);
    }
    *(undefined4 *)(param_1 + 0x868) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar4 = FUN_00567160();
  (*(unsigned char *)&(local_14)) = 1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00469b00(iVar4,param_1);
  }
  (*(unsigned char *)&(local_14)) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  FUN_004278d0();
  *(undefined4 *)(param_1 + 0x3d8) = 1;
  *(undefined4 *)(param_1 + 0x470) = 1;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  FUN_00569990(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 100);
  *(undefined1 *)(param_1 + 0x4d0) = 1;
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  FUN_0058df00(0x10000);
  *(undefined4 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x834) = 0;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x844) = DAT_0073ad34;
  *(undefined4 *)(param_1 + 0x848) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x84c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x850) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x855) = 0;
  *(undefined1 *)(param_1 + 0x854) = 0;
  *(undefined1 *)(param_1 + 0x83e) = 0;
  *(undefined1 *)(param_1 + 0x83f) = 0;
  *(undefined1 *)(param_1 + 0x840) = 0;
  *(undefined4 *)(param_1 + 0x838) = 0;
  *(undefined4 *)(param_1 + 0x884) = 0;
  uVar10 = FUN_00674898();
  uVar5 = DAT_006b7b5c;
  *(undefined4 *)(param_1 + 0x8e0) = uVar10;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined1 *)(param_1 + 0x8a8) = 0;
  *(undefined4 *)(param_1 + 0x888) = uVar5;
  *(undefined1 *)(param_1 + 0x8a9) = 1;
  *(undefined4 *)(param_1 + 0x8ac) = 0;
  *(undefined4 *)(param_1 + 0x8b0) = 0;
  *(undefined4 *)(param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  *(undefined4 *)(param_1 + 0x8bc) = 0;
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  *(undefined1 *)(param_1 + 0x83c) = 0;
  *(undefined1 *)(param_1 + 0x83d) = 1;
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  *(undefined1 *)(param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  *(undefined4 *)(param_1 + 0x830) = 0;
  cVar3 = FUN_0043a2e0();
  if (cVar3 != '\0') {
    pvVar9 = _malloc(0x2a0);
    local_14 = CONCAT31(((unsigned int)(local_14) >> 8),2);
    if (pvVar9 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00436ff0(pvVar9,param_1);
    }
    *(undefined4 *)(param_1 + 0x830) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  ExceptionList = pvStack_1c;
  return param_1;
}

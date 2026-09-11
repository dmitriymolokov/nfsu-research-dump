/* spd-match: far pct=11.01 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_04/attempt3_d6900_recipe */
#include "ghidra_compat.h"

extern char s_UnknownVendr_006a0898[];
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined2 _12_2_;
  char _14_1_;
} m375_s_authentic_amd_006a0888;
extern m375_s_authentic_amd_006a0888 s_AuthenticAMD_006a0888;
int __cdecl FUN_m375_thunk_helper(int *, int *);


undefined8 FUN_005d6900(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char local_2c [4];
  char acStack_28 [4];
  char acStack_24 [4];
  char cStack_20;
  int local_1c;
  uint local_18;
  int local_14;
  char cStack_10;
  undefined4 local_c;
  uint local_8;
  
  cStack_10 = ((char *)s_UnknownVendr_006a0898)[0xc];
  *(int *)local_2c = *(int *)&s_AuthenticAMD_006a0888;
  *(int *)acStack_28 = (*(undefined4 *)((unsigned char *)&(s_AuthenticAMD_006a0888) + 4));
  *(int *)acStack_24 = (*(undefined4 *)((unsigned char *)&(s_AuthenticAMD_006a0888) + 8));
  cStack_20 = ((char *)&s_AuthenticAMD_006a0888)[0xc];
  cpuid_basic_info(0);
  local_8 = 1;
  piVar7 = (int *)cpuid_basic_info(0);
  local_18 = piVar7[2];
  local_1c = piVar7[1];
  local_14 = piVar7[3];
  if (*piVar7 != 0) {
    puVar2 = (undefined4 *)cpuid_Version_info(1);
    local_c = *puVar2;
    local_8 = -(uint)((puVar2[2] & 0x800000) != 0) & 0x20 | 3 |
              -(uint)((puVar2[2] & 0x2000000) != 0) & 0x40;
    puVar3 = (uint *)cpuid(0x80000000);
    local_18 = puVar3[2];
    if (0x80000000 < *puVar3) {
      iVar5 = cpuid(0x80000001);
      local_18 = *(uint *)(iVar5 + 8);
      local_8 = local_8 | 4 | -(uint)((local_18 & 0x80000000) != 0) & 0x80;
      iVar5 = 0xc;
      pcVar6 = local_2c;
      piVar7 = &local_1c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        iVar4 = *piVar7;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        piVar7 = (int *)((int)piVar7 + 1);
      } while (cVar1 == (char)iVar4);
      local_8 = local_8 | -(uint)((local_18 & 0x40000000) != 0) & 0x100 |
                -(uint)((local_18 & 0x400000) != 0) & 0x200;
    }
  }
  return CONCAT44(local_18,local_8);
}

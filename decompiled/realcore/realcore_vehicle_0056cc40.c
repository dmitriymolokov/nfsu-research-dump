/* spd-match: far pct=7.89 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0056CC40 */
#include <stdlib.h>
extern void* _malloc(size_t size);
void FUN_0056cc40(int *param_1) {
  int iVar3;
  int *puVar4, *puVar6, *piVar8, *puVar9;
  int uVar5, iVar7, local_8;
  float f1, f2;
  unsigned char uVar10;
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 8) != 0) {
    int *ptr = (int *)(iVar7 + 0xe78);
    local_8 = 30;
    while (local_8--) {
      puVar9 = 0;
      while ((iVar3 = *ptr) != 0) {
        puVar4 = *(int **)(iVar3 + 0x80);
        if (!puVar4 || *(char *)(iVar3 + 0x1b) == 0) puVar9 = 0;
        else if (puVar9 != 0) {
          if ((puVar9 < puVar4) || (puVar4 + (*(char *)(iVar3 + 0x1b) * 5 - 5) * 4 <= (int)puVar9)) puVar9 = 0;
          else puVar9 += 20;
        } else puVar9 = puVar4;
        if (!puVar9) break;
        uVar5 = *puVar9;
        if (uVar5 == 0xa2a2fc7c || uVar5 == 0x31a66786 || uVar5 == 0x7a5bcf69 || uVar5 == 0xbf700a79 || uVar5 == 0xd09091c6) {
          uVar10 = (uVar5 == 0xbf700a79 || uVar5 == 0xa2a2fc7c);
          piVar8 = (int *)_malloc(80);
          if (piVar8) {
            piVar8[2] = uVar5; piVar8[7] = 0;
            f1 = *(float *)(puVar9 + 16); f2 = *(float *)(iVar7 + 0x30); piVar8[4] = (int)(f1 - f2);
            f1 = *(float *)(puVar9 + 17); f2 = *(float *)(iVar7 + 0x34); piVar8[5] = (int)(f1 - f2);
            f1 = *(float *)(puVar9 + 18); f2 = *(float *)(iVar7 + 0x38); piVar8[6] = (int)(f1 - f2);
            puVar6 = *(int **)(iVar7 + 0x504);
            *puVar6 = (int)piVar8; *(int **)(iVar7 + 0x504) = piVar8; piVar8[1] = (int)puVar6;
            *piVar8 = iVar7 + 0x500;
          }
        }
      }
      ptr += 24;
    }
  }
}

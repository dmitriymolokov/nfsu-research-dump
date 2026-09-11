/* spd-match: far pct=13.56 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0056D870 */
#include <stddef.h>
typedef struct { float x, y, z; } Vec3;
extern const float _DAT_006f1acc;
void __fastcall FUN_0056d870(Vec3 *out, const Vec3 *p1, const Vec3 *p2) {
    float f = _DAT_006f1acc;
    out->x = (p2->x - p1->x) * f + p1->x;
    out->y = (p2->y - p1->y) * f + p1->y;
    out->z = p2->z;
}

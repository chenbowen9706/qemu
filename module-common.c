#include "qemu/osdep.h"
#include "qemu/module.h"
#include "ui/input.h"
void qemu_module_dummy(void)
{
    printf("qmp_input_send_event:%llx\n",qmp_input_send_event);
}

void DSO_STAMP_FUN(void)
{
}

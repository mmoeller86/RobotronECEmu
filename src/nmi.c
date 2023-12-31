/* Copyright holders: Sarah Walker
   see COPYING for more details
*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <86box/io.h>
#include <86box/nmi.h>
#include <86box/plat_unused.h>

int nmi_mask;

void
nmi_write(UNUSED(uint16_t port), uint8_t val, UNUSED(void *priv))
{
    nmi_mask = val & 0x80;
}

void
nmi_init(void)
{
    io_sethandler(0x00a0, 0x000f, NULL, NULL, NULL, nmi_write, NULL, NULL, NULL);
    nmi_mask = 0;
}

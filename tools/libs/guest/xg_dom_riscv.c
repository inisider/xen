/*
 * Xen domain builder -- RISC-V
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation;
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; If not, see <http://www.gnu.org/licenses/>.
 *
 */
#include <inttypes.h>
#include <assert.h>

#include <xen/xen.h>
#include <xen/io/protocols.h>
#include <xen-tools/libs.h>

#include "xg_private.h"

/* get guest IO ABI protocol */
const char *xc_domain_get_native_protocol(xc_interface *xch,
                                          uint32_t domid)
{
    return XEN_IO_PROTO_ABI_RISCV;
}

bool xc_dom_translated(const struct xc_dom_image *dom)
{
    DOMPRINTF("%s: TODO: Add it properly. It is stub right now\n", __func__);

    return true;
}

/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
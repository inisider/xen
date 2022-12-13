/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; If not, see <http://www.gnu.org/licenses/>.
 *
 *
 */

#include "xc_private.h"
#include "xg_core.h"

#include <xen-tools/libs.h>

int
xc_core_arch_gpfn_may_present(struct xc_core_arch_context *arch_ctxt,
                              unsigned long pfn)
{
    errno = ENOSYS;
    return -1;
}

int
xc_core_arch_memory_map_get(xc_interface *xch, struct xc_core_arch_context *unused,
                            xc_dominfo_t *info, shared_info_any_t *live_shinfo,
                            xc_core_memory_map_t **mapp,
                            unsigned int *nr_entries)
{
    PERROR("TODO: add support of %s\n", __func__);

    errno = ENOSYS;
    return -1;
}

static int
xc_core_arch_map_p2m_rw(xc_interface *xch, struct domain_info_context *dinfo, xc_dominfo_t *info,
                        shared_info_any_t *live_shinfo, xen_pfn_t **live_p2m, int rw)
{
    PERROR("TODO: add support of %s\n", __func__);

    errno = ENOSYS;
    return -1;
}

int
xc_core_arch_map_p2m(xc_interface *xch, struct domain_info_context *dinfo, xc_dominfo_t *info,
                        shared_info_any_t *live_shinfo, xen_pfn_t **live_p2m)
{
    PERROR("TODO: add support of %s\n", __func__);

    return xc_core_arch_map_p2m_rw(xch, dinfo, info, live_shinfo, live_p2m, 0);
}

int
xc_core_arch_map_p2m_writable(xc_interface *xch, struct domain_info_context *dinfo, xc_dominfo_t *info,
                              shared_info_any_t *live_shinfo, xen_pfn_t **live_p2m)
{
    PERROR("TODO: add support of %s\n", __func__);

    return xc_core_arch_map_p2m_rw(xch, dinfo, info, live_shinfo, live_p2m, 1);
}

int
xc_core_arch_get_scratch_gpfn(xc_interface *xch, uint32_t domid,
                              xen_pfn_t *gpfn)
{
    PERROR("TODO: add support of %s\n", __func__);

    errno = ENOSYS;
    return -1;
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